//
// Copyright (C) 2002 Carsten Kolve
//
// File: bbSteeringDesireNode.cpp
//
// Dependency Graph Node: bbSteeringDesire
//
// Recompiled for Maya 2012 by Shawn Lipowski
// modifications/improvements  2013 by  John Cassella (redpawfx)
//

#include <math.h>
#include <algorithm>

#include <maya/MTime.h>
#include <maya/MVectorArray.h>
#include <maya/MIntArray.h>
#include <maya/MAngle.h>
#include <maya/MMatrix.h>
#include <maya/MTransformationMatrix.h>
#include <maya/MEulerRotation.h>
#include <maya/MQuaternion.h>

#include <maya/MFnDependencyNode.h>
#include <maya/MFnTypedAttribute.h>
#include <maya/MFnNumericAttribute.h>
#include <maya/MFnCompoundAttribute.h>
#include <maya/MFnUnitAttribute.h>
#include <maya/MFnVectorArrayData.h>
#include <maya/MFnDoubleArrayData.h>
#include <maya/MFnNurbsCurve.h>
#include <maya/MFnNurbsSurface.h>
#include <maya/MFnMesh.h>
#include <maya/MFnEnumAttribute.h>
#include <maya/MGlobal.h>

#include "bbSteeringDesireNode.h"
#include "MTools.h"


using namespace std;

// official redpawfx Autodesk ID ID_BRAINBUGZ_STEERINGDESIRE
MTypeId     bbSteeringDesire::id ( 0x0011A306 );

// definitions

// steering desires

#define SDS_BUG								0
#define SDS_BUG_DIRECTIONHEADING			1
#define SDS_BUG_WANDER						2

#define SDS_TARGET							10
#define SDS_TARGET_SEEK						11
#define SDS_TARGET_MOTHSEEK					12
#define SDS_TARGET_ARRIVAL					13
#define SDS_TARGET_PURSUIT					14
#define SDS_TARGET_SHADOW					15
#define SDS_TARGET_FOLLOW					16
#define SDS_TARGET_OBSTACLEAVOIDANCE		17

#define SDS_NEIGHBOR						30
#define SDS_NEIGHBOR_ALIGNMENT				31
#define SDS_NEIGHBOR_COHESION				32
#define SDS_NEIGHBOR_SEPARATION				33
#define SDS_NEIGHBOR_COLLISIONAVOIDANCE		34
#define SDS_NEIGHBOR_KEEPDISTANCE			35
#define SDS_NEIGHBOR_OPORTUNISM				36
#define SDS_NEIGHBOR_VELOGRADIENT			37

// target selection helper

#define TS_POINT		1
#define TS_CURVE		2
#define TS_SURFACE		3
#define TS_MESH			4
#define TS_BUG			5

// sub targets

#define ST_UNIFORM		0
#define ST_KNOTS		1

// target input selections

#define IS_INDEX		0
#define IS_ALL			1
#define IS_AVERAGE		2

// wander choose speed

#define CS_DESIREDSPEED 0
#define CS_SPEEDRANGE   1

// steering forces attributes

MObject	bbSteeringDesire::steeringDesire;

// view parameters
MObject	bbSteeringDesire::sensorRange;
MObject	bbSteeringDesire::sensorAngle;
MObject	bbSteeringDesire::useSensorRange;
MObject	bbSteeringDesire::useSensorAngle;

// common attributes
//MObject	bbSteeringDesire::scaleDesiredForce; // NOT USED
MObject	bbSteeringDesire::desiredSpeed;
MObject bbSteeringDesire::minimumForce;
MObject	bbSteeringDesire::maximumForce;
MObject	bbSteeringDesire::inverseDesiredSteeringForce;
MObject	bbSteeringDesire::bugRadius;
MObject	bbSteeringDesire::lastVector;

// target attr
MObject	bbSteeringDesire::targetType;
MObject	bbSteeringDesire::stoppingRange;
MObject	bbSteeringDesire::inputCurve;
MObject	bbSteeringDesire::inputSurface;
MObject	bbSteeringDesire::inputMesh;
MObject	bbSteeringDesire::targetRadius;
MObject	bbSteeringDesire::inputSelection;
MObject	bbSteeringDesire::inputIndex;
MObject	bbSteeringDesire::subTargets;
MObject	bbSteeringDesire::inputPoint;

MObject	bbSteeringDesire::lastTarget;
MObject	bbSteeringDesire::lastTargetX;
MObject	bbSteeringDesire::lastTargetY;
MObject	bbSteeringDesire::lastTargetZ;

MObject	bbSteeringDesire::tolerance;
MObject	bbSteeringDesire::probeLength;
MObject	bbSteeringDesire::shadowRange;

// bug parameter

MObject	bbSteeringDesire::direction;
MObject	bbSteeringDesire::directionX;
MObject	bbSteeringDesire::directionY;
MObject	bbSteeringDesire::directionZ;

MObject	bbSteeringDesire::wanderMinimumRandomVector;
MObject	bbSteeringDesire::wanderMinimumRandomVectorX;
MObject	bbSteeringDesire::wanderMinimumRandomVectorY;
MObject	bbSteeringDesire::wanderMinimumRandomVectorZ;

MObject	bbSteeringDesire::wanderMaximumRandomVector;
MObject	bbSteeringDesire::wanderMaximumRandomVectorX;
MObject	bbSteeringDesire::wanderMaximumRandomVectorY;
MObject	bbSteeringDesire::wanderMaximumRandomVectorZ;

MObject	bbSteeringDesire::wanderSphereOffset;
MObject	bbSteeringDesire::wanderSphereOffsetX;
MObject	bbSteeringDesire::wanderSphereOffsetY;
MObject	bbSteeringDesire::wanderSphereOffsetZ;

MObject	bbSteeringDesire::wanderSphereRadius;
MObject	bbSteeringDesire::wanderMinimumSpeed;

MObject	bbSteeringDesire::wanderMaximumSpeed;
MObject	bbSteeringDesire::chooseSpeed;
MObject	bbSteeringDesire::currentTime;
MObject	bbSteeringDesire::initSeedFrame;
MObject	bbSteeringDesire::seed;
MObject	bbSteeringDesire::useRandom;

// neighbor Attr
MObject	bbSteeringDesire::bugDistance;

/**************************************************************************************/

void* bbSteeringDesire::creator()
{
    return new bbSteeringDesire();
}

bbSteeringDesire::bbSteeringDesire()
{
}

bbSteeringDesire::~bbSteeringDesire()
{
}

void bbSteeringDesire::postConstructor()
{
}

/**************************************************************************************/

MStatus bbSteeringDesire::initialize()
{
#define nodeCreateAttrDouble(_name, _shortname, _value) \
			_name = nAttr.create( #_name, #_shortname, MFnNumericData::kDouble, _value); \


#define nodeCreateAttrVector(_name, _shortname, _value1,_value2,_value3)\
			_name##X = nAttr.create( #_name "X", #_shortname "x", MFnNumericData::kDouble, _value1);\
 			_name##Y = nAttr.create( #_name "Y", #_shortname "y", MFnNumericData::kDouble, _value2);\
 			_name##Z = nAttr.create( #_name "Z", #_shortname "z", MFnNumericData::kDouble, _value3);\
 			_name = nAttr.create( #_name, #_shortname, _name##X, _name##Y, _name##Z );\
				nAttr.setDefault(  _value1, _value2, _value3 );\

    MFnNumericAttribute nAttr;
    MFnEnumAttribute    eAttr;
    MFnUnitAttribute	uAttr;
    MFnTypedAttribute	tAttr;

    MStatus				stat;
    MString				attrOpt;

    MGlobal:: displayInfo ( "bbSteeringDesire... loaded" );

    // target attributes

    inputSurface = tAttr.create ( "inputSurface", "is",MFnData::kNurbsSurface,&stat );
    tAttr.setArray ( true );
    tAttr.setDisconnectBehavior ( MFnAttribute::kDelete );
    tAttr.setStorable ( false );

    // the name inputCurve, ic, was clashing with an existing attribute name
    inputCurve = tAttr.create ( "bbInputCurve", "bbic", MFnData::kNurbsCurve,	&stat );
    tAttr.setArray ( true );
    tAttr.setDisconnectBehavior ( MFnAttribute::kDelete );
    tAttr.setStorable ( false );

    inputPoint = nAttr.create ( "inputPoint","ip",MFnNumericData::k3Double );
    nAttr.setArray ( true );
    tAttr.setDisconnectBehavior ( MFnAttribute::kDelete );
    nAttr.setStorable ( false );

    inputMesh = tAttr.create ( "inputMesh","ime",MFnData::kMesh,	&stat );
    tAttr.setArray ( true );
    tAttr.setDisconnectBehavior ( MFnAttribute::kDelete );
    tAttr.setStorable ( false );

    nodeCreateAttrVector ( lastTarget,lt,0.0,0.0,0.0 );
    nAttr.setStorable ( true );

    nodeCreateAttrDouble ( targetRadius,pra,1.0 );
    nAttr.setMin ( 0.0 );
    nAttr.setSoftMax ( 100.0 );
    nAttr.setStorable ( true );

    nodeCreateAttrDouble ( tolerance,eps,0.01 );
    nAttr.setMin ( 0.001 );
    nAttr.setMax ( 0.2 );
    nAttr.setStorable ( true );

    nodeCreateAttrDouble ( stoppingRange,str,4.0 );
    nAttr.setMin ( 0.0001 );
    nAttr.setSoftMax ( 50.0 );
    nAttr.setStorable ( true );

    nodeCreateAttrDouble ( probeLength,prl, 2.0 );
    nAttr.setMin ( 0.0001 );
    nAttr.setSoftMax ( 50.0 );
    nAttr.setStorable ( true );

    nodeCreateAttrDouble ( shadowRange,shr, 2.0 );
    nAttr.setMin ( 0.0001 );
    nAttr.setSoftMax ( 50.0 );
    nAttr.setStorable ( true );


    inputSelection = eAttr.create ( "inputSelection", "tis", IS_INDEX );
    eAttr.addField ( "Index",IS_INDEX );
    eAttr.addField ( "All connected",IS_ALL );
    //	eAttr.addField("Average",IS_AVERAGE);
    eAttr.setStorable ( true );

    subTargets = eAttr.create ( "subTargets", "sta", ST_UNIFORM );
    eAttr.addField ( "Uniform", ST_UNIFORM );
    eAttr.addField ( "Knots / Vertices",ST_KNOTS );
    eAttr.setStorable ( true );

    inputIndex = nAttr.create ( "inputIndex","tii",MFnNumericData::kShort,0 );
    nAttr.setMin ( 0 );
    nAttr.setSoftMax ( 50 );
    nAttr.setStorable ( true );

    //	neighbor attr
    nodeCreateAttrDouble ( bugDistance, bdi, 1.0 );
    nAttr.setMin ( 0.0001 );
    nAttr.setSoftMax ( 50.0 );
    nAttr.setStorable ( true );

    // bug attributes

    directionX = nAttr.create ( "headingDirectionX", "hdx", MFnNumericData::kDouble, 0.0 );
    directionY = nAttr.create ( "headingDirectionY", "hdy", MFnNumericData::kDouble, 0.0 );
    directionZ = nAttr.create ( "headingDirectionZ", "hdz", MFnNumericData::kDouble, 0.0 );
    direction = nAttr.create ( "headingDirection", "hd", directionX, directionY, directionZ );
    nAttr.setDefault ( 0.0,0.0,0.0 );
    nAttr.setStorable ( true );

    nodeCreateAttrVector ( wanderMinimumRandomVector,wmi,0.0,0.0,0.0 );
    nAttr.setStorable ( true );

    nodeCreateAttrVector ( wanderMaximumRandomVector,wma,0.3,0.3,0.3 );
    nAttr.setStorable ( true );

    nodeCreateAttrVector ( wanderSphereOffset,wso,3.0,0.0,0.0 );
    nAttr.setStorable ( true );

    nodeCreateAttrDouble ( wanderSphereRadius,wsr,2.0 );
    nAttr.setMin ( 0.0001 );
    nAttr.setSoftMax ( 50.0 );
    nAttr.setStorable ( true );

    chooseSpeed = eAttr.create ( "chooseSpeed", "chs", CS_DESIREDSPEED );
    eAttr.addField ( "Desired Speed", CS_DESIREDSPEED );
    eAttr.addField ( "Speed Range",CS_SPEEDRANGE );
    eAttr.setStorable ( true );

    nodeCreateAttrDouble ( wanderMinimumSpeed,mis,0.0 );
    nAttr.setSoftMin ( -100.0 );
    nAttr.setSoftMax ( +100.0 );
    nAttr.setStorable ( true );

    nodeCreateAttrDouble ( wanderMaximumSpeed,mas,4.0 );
    nAttr.setSoftMin ( -100.0 );
    nAttr.setSoftMax ( +100.0 );
    nAttr.setStorable ( true );


    useRandom = nAttr.create ( "useRandom","ura",MFnNumericData::kBoolean,true );
    nAttr.setStorable ( true );

    seed = nAttr.create ( "seed","see",MFnNumericData::kShort,1 );
    nAttr.setMin ( 0 );
    nAttr.setMax ( 100 );
    nAttr.setStorable ( true );

    initSeedFrame = uAttr.create ( "initSeedFrame", "ist", MFnUnitAttribute::kTime );
    uAttr.setDefault ( 2 );
    uAttr.setStorable ( true );

    currentTime = uAttr.create ( "currentTime", "cti", MFnUnitAttribute::kTime );

    // field of view attributes
    sensorAngle = uAttr.create ( "sensorAngle", "sa", MFnUnitAttribute::kAngle );
    uAttr.setMin ( 0.01745329 );
    uAttr.setMax ( 6.265732 );
    uAttr.setDefault ( 1.74532925 );
    uAttr.setStorable ( true );
	uAttr.setKeyable( true );

    nodeCreateAttrDouble ( sensorRange,sr,3.0 )
    nAttr.setMin ( 0.001 );
    nAttr.setSoftMax ( 100.0 );
    nAttr.setStorable ( true );
	nAttr.setKeyable( true );

    useSensorRange = nAttr.create ( "useSensorRange","usr",MFnNumericData::kBoolean,false );
    nAttr.setStorable ( true );
	nAttr.setKeyable( true );

    useSensorAngle = nAttr.create ( "useSensorAngle","usa",MFnNumericData::kBoolean,false );
    nAttr.setStorable ( true );
	nAttr.setKeyable( true);

    // common attributes
    nodeCreateAttrDouble ( desiredSpeed,des,4.0 );
    nAttr.setMin ( 0.001 );
    nAttr.setSoftMax ( 100.0 );
    nAttr.setStorable ( true );
    nAttr.setKeyable ( true );

	nodeCreateAttrDouble ( minimumForce,mif,0.0);
    nAttr.setMin ( 0.0 );
    nAttr.setSoftMax ( 100.0 );
    nAttr.setStorable ( true );
    nAttr.setKeyable ( true );

    nodeCreateAttrDouble ( maximumForce,maf,3.0 );
    nAttr.setMin ( 0.001 );
    nAttr.setSoftMax ( 100.0 );
    nAttr.setStorable ( true );
    nAttr.setKeyable ( true );

    nodeCreateAttrDouble ( bugRadius,bur,0.1 );
    nAttr.setMin ( 0.0001 );
    nAttr.setSoftMax ( 50.0 );
    nAttr.setStorable ( true );

    inverseDesiredSteeringForce = nAttr.create ( "inverseDesiredSteeringForce","isf",MFnNumericData::kBoolean,false );
    nAttr.setStorable ( true );
    nAttr.setKeyable ( true );

    lastVector = tAttr.create ( "lastVector", "lv", MFnVectorArrayData::kVectorArray , &stat );
    tAttr.setStorable ( true );

    // steering desire

    steeringDesire = eAttr.create ( "steeringDesire", "sd", SDS_BUG_DIRECTIONHEADING );
    // eAttr.addField("-- BUG -------------",SDS_BUG);
    eAttr.addField ( "Bug - Head Direction",SDS_BUG_DIRECTIONHEADING );
    eAttr.addField ( "Bug - Wander",SDS_BUG_WANDER );

    eAttr.addField ( "---------------------",SDS_TARGET );
    eAttr.addField ( "Target - Seek",SDS_TARGET_SEEK );
    eAttr.addField ( "Target - Moth Seek",SDS_TARGET_MOTHSEEK );
    eAttr.addField ( "Target - Arrival",SDS_TARGET_ARRIVAL );
    eAttr.addField ( "Target - Pursuit",SDS_TARGET_PURSUIT	);
    eAttr.addField ( "Target - Shadow",SDS_TARGET_SHADOW );
    eAttr.addField ( "Target - Follow",SDS_TARGET_FOLLOW );
    eAttr.addField ( "Target - Obstacle Avoidance",SDS_TARGET_OBSTACLEAVOIDANCE );

    eAttr.addField ( "---------------------",SDS_NEIGHBOR );
    eAttr.addField ( "Neighbor - Alignment",SDS_NEIGHBOR_ALIGNMENT );
    eAttr.addField ( "Neighbor - Cohesion",SDS_NEIGHBOR_COHESION	);
    eAttr.addField ( "Neighbor - Separation",SDS_NEIGHBOR_SEPARATION	);
    //		eAttr.addField("Neighbor - Collision Avoidance",SDS_NEIGHBOR_COLLISIONAVOIDANCE);
    eAttr.addField ( "Neighbor - Keep Distance",SDS_NEIGHBOR_KEEPDISTANCE );
    //		eAttr.addField("Neighbor - Oportunism",SDS_NEIGHBOR_OPORTUNISM	);
	eAttr.addField ( "Neighbor - Velo Gradient",SDS_NEIGHBOR_VELOGRADIENT	);
    eAttr.setStorable ( true );
    eAttr.setKeyable ( true );

    // target selection

    targetType = eAttr.create ( "targetType","tt", TS_POINT );
    eAttr.addField ( "Point",TS_POINT );
    eAttr.addField ( "Curve",TS_CURVE );
    eAttr.addField ( "Surface",TS_SURFACE );
    eAttr.addField ( "Mesh",TS_MESH );
    //	eAttr.addField("Bug",TS_BUG);
    eAttr.setStorable ( true );

    // Add the attributes we have created to the node

#define nodeAddAttribute(_attr) 	\
			stat = addAttribute( _attr );	\
			if (!stat) { stat.perror("addAttribute"); return stat;} \


    // common
    nodeAddAttribute ( steeringDesire );
    nodeAddAttribute ( desiredSpeed );
	nodeAddAttribute ( minimumForce );
    nodeAddAttribute ( maximumForce );
    nodeAddAttribute ( inverseDesiredSteeringForce );
    nodeAddAttribute ( bugRadius );
    nodeAddAttribute ( lastVector );

    // view
    nodeAddAttribute ( useSensorRange );
    nodeAddAttribute ( sensorRange );
    nodeAddAttribute ( useSensorAngle );
    nodeAddAttribute ( sensorAngle );

    // bug
    nodeAddAttribute ( direction );
    nodeAddAttribute ( wanderSphereRadius );
    nodeAddAttribute ( wanderSphereOffset );
    nodeAddAttribute ( wanderMinimumRandomVector );
    nodeAddAttribute ( wanderMaximumRandomVector );
    nodeAddAttribute ( chooseSpeed );
    nodeAddAttribute ( wanderMinimumSpeed );
    nodeAddAttribute ( wanderMaximumSpeed );
    nodeAddAttribute ( seed );
    nodeAddAttribute ( initSeedFrame );
    nodeAddAttribute ( currentTime );
    nodeAddAttribute ( useRandom );

    // target
    nodeAddAttribute ( targetType );
    nodeAddAttribute ( inputPoint );
    nodeAddAttribute ( inputCurve );
    nodeAddAttribute ( inputSurface );
    nodeAddAttribute ( inputMesh );
    nodeAddAttribute ( subTargets );
    nodeAddAttribute ( inputSelection );
    nodeAddAttribute ( inputIndex );
    nodeAddAttribute ( stoppingRange );
    nodeAddAttribute ( targetRadius );
    nodeAddAttribute ( tolerance );
    nodeAddAttribute ( probeLength );
    nodeAddAttribute ( shadowRange );

    // neighbor
    nodeAddAttribute ( bugDistance );

    // Set up a dependencies

    return MS::kSuccess;

}

/**************************************************************************************/

MStatus bbSteeringDesire::compute ( const MPlug& plug, MDataBlock& block )
{
    MStatus status;

    if ( ! ( plug == mOutputForce ) )
        return ( MS::kUnknownParameter );

    // get the logical index of the element this plug refers to.
    //
    int multiIndex = plug.logicalIndex ( &status );
    McheckErr ( status, "ERROR in plug.logicalIndex.\n" );

    // Get input data handle, use outputArrayValue since we do not
    // want to evaluate both inputs, only the one related to the
    // requested multiIndex. Evaluating both inputs at once would cause
    // a dependency graph loop.
    //
    MArrayDataHandle hInputArray = block.outputArrayValue ( mInputData, &status );
    McheckErr ( status,"ERROR in hInputArray = block.outputArrayValue().\n" );

    status = hInputArray.jumpToElement ( multiIndex );
    McheckErr ( status, "ERROR: hInputArray.jumpToElement failed.\n" );

    // get children of aInputData.
    //
    MDataHandle hCompond = hInputArray.inputValue ( &status );
    McheckErr ( status, "ERROR in hCompond=hInputArray.inputValue\n" );

    MDataHandle hPosition = hCompond.child ( mInputPositions );
    MObject dPosition = hPosition.data();
    MFnVectorArrayData fnPosition ( dPosition );
    MVectorArray points = fnPosition.array ( &status );
    McheckErr ( status, "ERROR in fnPosition.array(), not find points.\n" );

    MDataHandle hVelocity = hCompond.child ( mInputVelocities );
    MObject dVelocity = hVelocity.data();
    MFnVectorArrayData fnVelocity ( dVelocity );
    MVectorArray velocities = fnVelocity.array ( &status );
    McheckErr ( status, "ERROR in fnVelocity.array(), not find velocities.\n" );

    MDataHandle hMass = hCompond.child ( mInputMass );
    MObject dMass = hMass.data();
    MFnDoubleArrayData fnMass ( dMass );
    MDoubleArray masses = fnMass.array ( &status );
    McheckErr ( status, "ERROR in fnMass.array(), not find masses.\n" );

    MDataHandle hDeltaTime = hCompond.child ( mDeltaTime );
    MTime deltaTime = hDeltaTime.asTime();

    // Compute the output force.
    //

    MVectorArray forceArray;
    MVectorArray targetArray;

    short steeringDesireV = steeringDesireValue ( block );
    short targetTypeV = targetTypeValue ( block );

    int pointsSize = points.length();

    // if seperator selected, select next sd

    switch ( steeringDesireV )
    {

        // bug steering desires

    case SDS_BUG_DIRECTIONHEADING:
        sdBugHeadDirection ( block, points, velocities,  forceArray );
        break;

    case SDS_BUG_WANDER:
        sdBugWander ( block, points, velocities,  forceArray );
        break;

        // target steering desires

    case SDS_TARGET_SEEK	:
    {
        switch ( targetTypeV )
        {
        case TS_POINT:
            getTargetsFromPoint ( block,targetArray );
            break;
        case TS_CURVE:
            getTargetsFromCurve ( block,pointsSize,targetArray );
            break;
        case TS_SURFACE:
            getTargetsFromSurface ( block,pointsSize,targetArray );
            break;
        case TS_MESH:
            getTargetsFromMesh ( block,pointsSize,targetArray );
            break;
        }
        sdSeekTargets ( block,points,velocities,targetArray,forceArray );
    }
    break;

    case SDS_TARGET_MOTHSEEK:
    {
        switch ( targetTypeV )
        {
        case TS_POINT:
            getTargetsFromPoint ( block,targetArray );
            break;
        case TS_CURVE:
            getTargetsFromCurve ( block,pointsSize,targetArray );
            break;
        case TS_SURFACE:
            getTargetsFromSurface ( block,pointsSize,targetArray );
            break;
        case TS_MESH:
            getTargetsFromMesh ( block,pointsSize,targetArray );
            break;
        }
        sdMothSeekTargets ( block,points,velocities,targetArray,forceArray );
    }
    break;

    case SDS_TARGET_ARRIVAL:
    {
        switch ( targetTypeV )
        {
        case TS_POINT:
            getTargetsFromPoint ( block,targetArray );
            break;
        case TS_CURVE:
            getTargetsFromCurve ( block,pointsSize,targetArray );
            break;
        case TS_SURFACE:
            getTargetsFromSurface ( block,pointsSize,targetArray );
            break;
        case TS_MESH:
            getTargetsFromMesh ( block,pointsSize,targetArray );
            break;
        }
        sdArrivalTargets ( block,points,velocities,targetArray,forceArray );
    }
    break;

    case SDS_TARGET_PURSUIT:
    {
        switch ( targetTypeV )
        {
        case TS_POINT:
            getTargetsFromPoint ( block,targetArray );
            break;
        case TS_CURVE:
            getTargetsFromCurve ( block,pointsSize,targetArray );
            break;
        case TS_SURFACE:
            getTargetsFromSurface ( block,pointsSize,targetArray );
            break;
        case TS_MESH:
            getTargetsFromMesh ( block,pointsSize,targetArray );
            break;
        }
        sdPursuitTargets ( block,points,velocities,targetArray,forceArray );
    }
    break;

    case SDS_TARGET_SHADOW:
    {
        switch ( targetTypeV )
        {
        case TS_POINT:
            getTargetsFromPoint ( block,targetArray );
            break;
        case TS_CURVE:
            getTargetsFromCurve ( block,pointsSize,targetArray );
            break;
        case TS_SURFACE:
            getTargetsFromSurface ( block,pointsSize,targetArray );
            break;
        case TS_MESH:
            getTargetsFromMesh ( block,pointsSize,targetArray );
            break;
        }
        sdShadowTargets ( block,points,velocities,targetArray,deltaTime,forceArray );
    }
    break;

    case SDS_TARGET_FOLLOW:
    {
        switch ( targetTypeV )
        {
        case TS_POINT:
            break;
        case TS_CURVE:
            sdCurveFollowing ( block, points, velocities,  forceArray );
            break;
        case TS_SURFACE:
            sdSurfaceFollowing ( block, points, velocities,  forceArray );
            break;
        case TS_MESH:
            sdMeshFollowing ( block, points, velocities,  forceArray );
            break;
        }
    }
    break;

    case SDS_TARGET_OBSTACLEAVOIDANCE:
    {
        switch ( targetTypeV )
        {
        case TS_POINT:
            break;
        case TS_CURVE:
            break;
        case TS_SURFACE:
            sdSurfaceObstacleAvoidance ( block, points, velocities,  forceArray );
            break;
        case TS_MESH:
            sdMeshObstacleAvoidance ( block, points, velocities,  forceArray );
            break;
        }
    }
    break;

    // neighbor steering desires

    case SDS_NEIGHBOR_ALIGNMENT:
        sdNeighborAlignment ( block, points, velocities,  forceArray );
        break;

    case SDS_NEIGHBOR_COHESION:
        sdNeighborCohesion ( block, points, velocities,  forceArray );
        break;

    case SDS_NEIGHBOR_SEPARATION:
        sdNeighborSeparation ( block, points, velocities,  forceArray );
        break;

    case SDS_NEIGHBOR_COLLISIONAVOIDANCE:
        sdNeighborUnalignedCollisionAvoidance ( block, points, velocities,  forceArray );
        break;

    case SDS_NEIGHBOR_KEEPDISTANCE:
        sdNeighborKeepDistance ( block, points, velocities,  forceArray );
        break;

    case SDS_NEIGHBOR_OPORTUNISM:
        sdNeighborOportunism ( block, points, velocities,  forceArray );
        break;

    default:
        break;
    }


    // get output data handle
    //
    MArrayDataHandle hOutArray = block.outputArrayValue ( mOutputForce, &status );
    McheckErr ( status, "ERROR in hOutArray = block.outputArrayValue.\n" );

    MArrayDataBuilder bOutArray = hOutArray.builder ( &status );
    McheckErr ( status, "ERROR in bOutArray = hOutArray.builder.\n" );

    // get output force array from block.
    //
    MDataHandle hOut = bOutArray.addElement ( multiIndex, &status );
    McheckErr ( status, "ERROR in hOut = bOutArray.addElement.\n" );

    MFnVectorArrayData fnOutputForce;
    MObject dOutputForce = fnOutputForce.create ( forceArray, &status );

    McheckErr ( status, "ERROR in dOutputForce = fnOutputForce.create\n" );

    // update data block with new output force data.
    //
    hOut.set ( dOutputForce );
    block.setClean ( plug );

    return MS::kSuccess;
}



/**************************************************************************************/

// min / max clamp length of vector to scalar while maintaining vector orientation
MVector truncVector ( MVector& vector, double scalar )
{
    double norm = vector.length();

    if ( scalar <0 )
    {
        if ( ( norm < -scalar ) && ( norm > 0 ) )
        {
            vector *= ( -scalar / norm );
        }
    }
    else
    {
        if ( norm>scalar )
        {
            vector *= scalar / norm;
        }
    }
    return vector;
}

/**************************************************************************************/

// target visible from pov?
bool inFieldOfView ( MVector& targetOffset, const MVector& velocity, bool uRange, bool uAngle, double sRange, double sAngle )
{
    bool result = false;
    bool sensorCheck = false;

    if ( ( !uRange ) && ( !uAngle ) )
    {
        result = true;
    }
    else
    {
        double distance = targetOffset.length();

        if ( ( uRange ) && ( distance <= sRange ) )
        {
            result = sensorCheck = true;
        }

        if ( uAngle )
        {
            double angle = targetOffset.angle ( velocity );
            if ( ( angle < ( sAngle/2 ) ) && ( ( !uRange ) || ( sensorCheck ) ) )
            {
                result = true;
            }
            else
            {
                result = false;
            }

        }
    }

    return result;
}

/**************************************************************************************/

// get list of bugs in field of view
void getNearbyBugs ( const MVectorArray& bugPositions, int refBugIndex,const MVector& velocity, bool uRange, bool uAngle, double sRange, double sAngle,MIntArray &nearbyBugIndexList )
{
    int bugPositionsSize =bugPositions.length();

    MVector difVector;

//	MString temp;

    nearbyBugIndexList.clear();

    if ( ( !uRange ) && ( !uAngle ) )
    {
        for ( int i = 0; i < bugPositionsSize; i++ )
        {
            if ( i != refBugIndex )
            {
                nearbyBugIndexList.append ( i );
            }
        }
    }
    else
    {
        if ( uRange )
        {

//			temp = "Range: ";

            for (int i=0; i < bugPositionsSize; i++ )
            {
                if ( i != refBugIndex )
                {
                    if ( MVector ( bugPositions[refBugIndex] - bugPositions[i] ).length() < sRange )
                    {
//				temp += i-1;
//				temp += ", ";

                        nearbyBugIndexList.append ( i );
                    }
                }
            }
//		MGlobal::displayInfo(temp);
        }
        else
        {
            for ( int i =0; i < bugPositionsSize; i++ )
            {
                if ( i != refBugIndex )
                {
                    nearbyBugIndexList.append ( i );
                }
            }
        }

        int nearbyBugIndexListSize = nearbyBugIndexList.length();

        if ( ( uAngle ) && ( nearbyBugIndexListSize > 0 ) )
        {
            double angle = 0.0;
            sAngle /= 2;

//			temp="Angle: ";

            for ( int i = nearbyBugIndexListSize - 1; i > -1; i-- )
            {
                angle = MVector ( bugPositions[nearbyBugIndexList[i]] - bugPositions[refBugIndex] ).angle ( velocity );

                if ( angle > sAngle )
                {
//					temp += nearbyBugIndexList[i]-1;
//				temp += ", ";
                    nearbyBugIndexList.remove ( i );
                }
            }

//			MGlobal::displayInfo(temp);
        }

    }
}

/**************************************************************************************/

inline void seekSteering ( MVector &desVel,const MVector &curVel,double desSpeed, double scaleF, double maxF, double globalMag )
{
    desVel.normalize();
    desVel *= desSpeed * globalMag * scaleF;
    desVel = desVel - curVel;
    truncVector ( desVel,maxF*globalMag );
}
/**************************************************************************************/

inline void mothSeekSteering ( MVector &desVel,double desSpeed, double scaleF, double maxF, double globalMag )
{
    desVel.normalize();
    desVel *= desSpeed * globalMag * scaleF;
    truncVector ( desVel,maxF*globalMag );
}

/**************************************************************************************/

inline void arrivalSteering ( MVector &desVel,const MVector &curVel,double desSpeed, double scaleF, double maxF,double stopR, double globalMag )
{
    double distance = desVel.length();
    double rampedSpeed = desSpeed * globalMag * ( distance / stopR );

    if ( distance > 0 )
        desVel *= ( min ( rampedSpeed, desSpeed ) ) /distance;

    desVel = desVel - curVel;
    desVel *= scaleF;
    truncVector ( desVel,maxF*globalMag );
}



/**************************************************************************************/

MStatus bbSteeringDesire::getForceAtPoint ( const MVectorArray&	points,
        const MVectorArray&	velocities,
        const MDoubleArray&	mass,
        MVectorArray&	forceArray,
        double deltaTime )
//
//    This method is not required to be overridden, it is only necessary
//    for compatibility with the MFnField function set.
//
{
    MStatus ReturnStatus;

    MDataBlock block = forceCache();

//	sdSeek(block, points, velocities,  forceArray );

    return MS::kSuccess;
}

/**************************************************************************************/
void bbSteeringDesire::getTargetsFromPoint ( MDataBlock& block,MVectorArray &target )
{
    MStatus stat;
    MArrayDataHandle inputPointAD = block.inputArrayValue ( inputPoint, &stat );
    MDataHandle elementHandle;

    if ( !stat )
    {
        MGlobal::displayError ( "bbSteeringDesire::compute inputPointArrayData" );
    }

    int numPoint = inputPointAD.elementCount();
    inputPointAD.jumpToElement ( 0 );

    target.clear();

    short inputSelectionV = inputSelectionValue ( block );

    switch ( inputSelectionV )
    {
    case IS_ALL:
    {
        for ( int i=0; i<numPoint; i++ )
        {
            elementHandle = inputPointAD.inputValue ( &stat );
            if ( stat==MS::kSuccess )
                target.append ( elementHandle.asVector() );
            stat = inputPointAD.next ();
        }
    }
    break;
    case IS_INDEX:
        stat = inputPointAD.jumpToElement ( inputIndexValue ( block ) );
        if ( stat==MS::kSuccess )
        {
            elementHandle = inputPointAD.inputValue ( &stat );
            target.append ( elementHandle.asVector() );
        }
        break;
    }
}

/**************************************************************************************/
void bbSteeringDesire::getTargetsFromCurve ( MDataBlock& block,int posSize, MVectorArray &target )
{
    MStatus stat;

    MArrayDataHandle inputCurveAD = block.inputArrayValue ( inputCurve, &stat );

    if ( !stat )
    {
        stat.perror ( "ERROR getting inputCurvedata" );
        return;
    }

    MDataHandle elementHandle;

    if ( !stat )
    {
        MGlobal::displayError ( "bbSteeringDesire::compute inputPointArrayData" );
    }

    int numCurve = inputCurveAD.elementCount();
    inputCurveAD.jumpToElement ( 0 );

    target.clear();

    short inputSelectionV = inputSelectionValue ( block );
    short subTargetsV = subTargetsValue ( block );

    switch ( inputSelectionV )
    {
    case IS_ALL:
    {
        switch ( subTargetsV )
        {
        case ST_UNIFORM:
        {
            MDoubleArray curveLength;
            curveLength.clear();

            // get curve lengths

            for ( int i=0; i<numCurve; i++ )
            {
                elementHandle = inputCurveAD.inputValue ( &stat );
                MObject curve = elementHandle.asNurbsCurveTransformed();
                MFnNurbsCurve curveFn ( curve, &stat );

                if ( !stat )
                {
                    stat.perror ( "ERROR creating curve function set" );
                    return;
                }

                curveLength.append ( curveFn.length() );
                inputCurveAD.next();
            }

            // calculate curveLengthsSum

            double curveLengthsSum=0;

            for ( int i=0; i<numCurve; i++ )
                curveLengthsSum += curveLength[i];


            // calculate targets per Curve;

            MIntArray targetsPerCurve;
            targetsPerCurve.clear();

            int targetCountSum=0;
            int targetCount=0;

            for ( int i=0; i<numCurve; i++ )
            {
                if ( curveLengthsSum !=0 )
                    targetCount = ( int ) floor ( curveLength[i] * posSize / curveLengthsSum );

                targetsPerCurve.append ( targetCount );
                targetCountSum += targetCount;
            }

            if ( targetCountSum < posSize )
                targetsPerCurve[numCurve-1] += posSize - targetCountSum;

            inputCurveAD.jumpToElement ( 0 );

            for ( int i=0; i<numCurve; i++ )
            {
                elementHandle = inputCurveAD.inputValue ( &stat );
                MObject curve = elementHandle.asNurbsCurveTransformed();
                MFnNurbsCurve curveFn ( curve, &stat );

                if ( targetsPerCurve[i] > 0 )
                {
                    double startParam;
                    double endParam;
                    curveFn.getKnotDomain ( startParam,endParam );

                    double ppCoef = ( endParam-startParam ) /targetsPerCurve[i] ;
                    MPoint targetPoint;

                    for ( int j=0; j<targetsPerCurve[i] ; j++ )
                    {
                        curveFn.getPointAtParam ( ( ppCoef* ( j+1 ) +startParam ),targetPoint );
                        target.append ( MVector ( targetPoint ) );
                    }
                }

                inputCurveAD.next();
            }
        }
        break;

        case ST_KNOTS:
        {
            MDoubleArray knots;
            MPoint targetPoint;

            for ( int j=0; j<numCurve; j++ )
            {
                elementHandle = inputCurveAD.inputValue ( &stat );
                MObject curve = elementHandle.asNurbsCurveTransformed();
                MFnNurbsCurve curveFn ( curve, &stat );
                knots.clear();

                curveFn.getKnots ( knots );
                int knotsSize = knots.length();

                for ( int i = 0; i < knotsSize; i++ )
                {
                    curveFn.getPointAtParam ( knots[i],targetPoint );
                    target.append ( MVector ( targetPoint ) );
                }

                inputCurveAD.next();
            }

        }
        break;
        }
    }
    break;

    case IS_INDEX:
    {
        stat = inputCurveAD.jumpToElement ( inputIndexValue ( block ) );
        if ( stat==MS::kSuccess )
        {
            elementHandle = inputCurveAD.inputValue ( &stat );
            MObject curve = elementHandle.asNurbsCurveTransformed();
            MFnNurbsCurve curveFn ( curve, &stat );

            if ( !stat )
            {
                stat.perror ( "ERROR creating curve function set" );
                return;
            }

            switch ( subTargetsV )
            {
            case ST_UNIFORM:
            {
                if ( posSize > 0 )
                {
                    double startParam;
                    double endParam;
                    curveFn.getKnotDomain ( startParam,endParam );

                    double ppCoef = ( endParam-startParam ) /posSize ;
                    MPoint targetPoint;

                    for ( int i=0; i<posSize; i++ )
                    {
                        curveFn.getPointAtParam ( ppCoef* ( i+1 ),targetPoint );
                        target.append ( MVector ( targetPoint ) );
                    }
                }
            }
            break;

            case ST_KNOTS:
            {
                MDoubleArray knots;
                curveFn.getKnots ( knots );

                int knotsSize = knots.length();
                MPoint targetPoint;

                for ( int i = 0; i < knotsSize; i++ )
                {
                    curveFn.getPointAtParam ( knots[i],targetPoint );
                    target.append ( MVector ( targetPoint ) );
                }
            }
            break;
            }
        }
    }

    break;
    }
}

/**************************************************************************************/
void bbSteeringDesire::getTargetsFromSurface ( MDataBlock& block,int posSize, MVectorArray &target )
{
    MStatus stat;

    MArrayDataHandle inputSurfaceAD = block.inputArrayValue ( inputSurface, &stat );

    if ( !stat )
    {
        stat.perror ( "ERROR getting inputSurfacedata" );
        return;
    }

    MDataHandle elementHandle;

    if ( !stat )
    {
        MGlobal::displayError ( "bbSteeringDesire::compute inputSurfaceArrayData" );
    }

    int numSurface = inputSurfaceAD.elementCount();
    inputSurfaceAD.jumpToElement ( 0 );

    target.clear();

    short inputSelectionV = inputSelectionValue ( block );
    short subTargetsV = subTargetsValue ( block );

    switch ( inputSelectionV )
    {
    case IS_ALL:
    {
        switch ( subTargetsV )
        {
        case ST_UNIFORM:
        {
            MDoubleArray surfaceArea;
            surfaceArea.clear();

            // get surface area

            for ( int i=0; i<numSurface; i++ )
            {
                elementHandle = inputSurfaceAD.inputValue ( &stat );
                MObject surface = elementHandle.asNurbsSurfaceTransformed();
                MFnNurbsSurface surfaceFn ( surface, &stat );

                if ( !stat )
                {
                    stat.perror ( "ERROR creating surface function set" );
                    return;
                }

                surfaceArea.append ( surfaceFn.area() );
                inputSurfaceAD.next();
            }

            // calculate surfaceLengthsSum

            double surfaceAreaSum=0;

            for ( int i=0; i<numSurface; i++ )
                surfaceAreaSum += surfaceArea[i];


            // calculate targets per Surface;

            MIntArray targetsPerSurface;
            targetsPerSurface.clear();

            int targetCountSum=0;
            int targetCount=0;

            for ( int i=0; i<numSurface; i++ )
            {
                if ( surfaceAreaSum !=0 )
                    targetCount = ( int ) floor ( surfaceArea[i] * posSize / surfaceAreaSum );

                targetsPerSurface.append ( targetCount );
                targetCountSum += targetCount;
            }

            if ( targetCountSum < posSize )
                targetsPerSurface[numSurface-1] += posSize - targetCountSum;

            inputSurfaceAD.jumpToElement ( 0 );

            for ( int i=0; i<numSurface; i++ )
            {
                elementHandle = inputSurfaceAD.inputValue ( &stat );
                MObject surface = elementHandle.asNurbsSurfaceTransformed();
                MFnNurbsSurface surfaceFn ( surface, &stat );

                if ( targetsPerSurface[i] > 0 )
                {
                    double startU, endU, startV, endV;

                    surfaceFn.getKnotDomain ( startU,endU,startV,endV );

                    double paramU = ( endU-startU );
                    double paramV = ( endV-startV );
                    double paramUV = paramU / paramV;

                    int targetsPerU = ( int ) ceil ( sqrt ( targetsPerSurface[i]*paramUV ) );
                    int targetsPerV = ( int ) ceil ( sqrt ( targetsPerSurface[i]/paramUV ) );

                    double uCoef =0;
                    double vCoef =0;

                    if ( targetsPerU != 0 ) uCoef = paramU/targetsPerU;
                    if ( targetsPerV != 0 ) vCoef = paramV/targetsPerV;


                    // get targets

                    MPoint targetPoint;

                    for ( int u=0; u<targetsPerU; u++ )
                        for ( int v=0; v<targetsPerU; v++ )
                        {
                            surfaceFn.getPointAtParam ( uCoef* ( u+1 ),vCoef* ( v+1 ),targetPoint );
                            target.append ( MVector ( targetPoint ) );
                        }

                    int unTarget = targetsPerU*targetsPerV-targetsPerSurface[i];

                    // remove unneccesary targets

                    for ( int k=0; k< unTarget; k++ )
                        target.remove ( target.length()-1 );
                }

                inputSurfaceAD.next();
            }
        }
        break;

        case ST_KNOTS:
        {
            MDoubleArray knotsU;
            MDoubleArray knotsV;
            MPoint targetPoint;

            for ( int j=0; j<numSurface; j++ )
            {
                elementHandle = inputSurfaceAD.inputValue ( &stat );
                MObject surface = elementHandle.asNurbsSurfaceTransformed();
                MFnNurbsSurface surfaceFn ( surface, &stat );

                knotsU.clear();
                knotsV.clear();

                surfaceFn.getKnotsInU ( knotsU );
                surfaceFn.getKnotsInU ( knotsV );

                int knotsUSize = knotsU.length();
                int knotsVSize = knotsV.length();

                for ( int u = 0; u < knotsUSize; u++ )
                    for ( int v = 0; v < knotsVSize; v++ )
                    {
                        surfaceFn.getPointAtParam ( knotsU[u],knotsV[v],targetPoint );
                        // ignore multiple knots
                        short temp = target.length();
                        if ( temp>0 )
                        {
                            if ( target[temp-1] != targetPoint )
                                target.append ( MVector ( targetPoint ) );
                        }
                        else target.append ( MVector ( targetPoint ) );
                    }

                inputSurfaceAD.next();
            }

        }
        break;
        }
    }
    break;

    case IS_INDEX:
    {
        stat = inputSurfaceAD.jumpToElement ( inputIndexValue ( block ) );
        if ( stat==MS::kSuccess )
        {
            elementHandle = inputSurfaceAD.inputValue ( &stat );
            MObject surface = elementHandle.asNurbsSurfaceTransformed();
            MFnNurbsSurface surfaceFn ( surface, &stat );

            if ( !stat )
            {
                stat.perror ( "ERROR creating surface function set" );
                return;
            }

            switch ( subTargetsV )
            {
            case ST_UNIFORM:
            {
                if ( posSize > 0 )
                {
                    double startU;
                    double endU;
                    double startV;
                    double endV;

                    surfaceFn.getKnotDomain ( startU,endU,startV,endV );

                    double paramU = ( endU-startU );
                    double paramV = ( endV-startV );
                    double paramUV = paramU / paramV;

                    int targetsPerU = ( int ) ceil ( sqrt ( posSize*paramUV ) );
                    int targetsPerV = ( int ) ceil ( sqrt ( posSize/paramUV ) );

                    double uCoef =0;
                    double vCoef =0;

                    if ( targetsPerU != 0 ) uCoef = paramU/targetsPerU;
                    if ( targetsPerV != 0 ) vCoef = paramV/targetsPerV;


                    // get targets

                    MPoint targetPoint;

                    for ( int u=0; u<targetsPerU; u++ )
                        for ( int v=0; v<targetsPerU; v++ )
                        {
                            surfaceFn.getPointAtParam ( uCoef* ( u+1 ) +startU,vCoef* ( v+1 ) +startV,targetPoint );
                            target.append ( MVector ( targetPoint ) );
                        }

                    int unTarget = targetsPerU*targetsPerV-posSize;

                    // remove unneccesary targets

                    for ( int k=0; k< unTarget; k++ )
                        target.remove ( target.length()-1 );
                }
            }
            break;

            case ST_KNOTS:
            {
                MDoubleArray knotsU;
                MDoubleArray knotsV;

                surfaceFn.getKnotsInU ( knotsU );
                surfaceFn.getKnotsInU ( knotsV );

                int knotsUSize = knotsU.length();
                int knotsVSize = knotsV.length();

                MPoint targetPoint;

                for ( int u = 0; u < knotsUSize; u++ )
                    for ( int v = 0; v < knotsVSize; v++ )
                    {
                        surfaceFn.getPointAtParam ( knotsU[u],knotsV[v],targetPoint );
                        // ignore multiple knots
                        short temp = target.length();
                        if ( temp>0 )
                        {
                            if ( target[temp-1] != targetPoint )
                                target.append ( MVector ( targetPoint ) );
                        }
                        else target.append ( MVector ( targetPoint ) );
                    }
            }
            break;
            }
        }
    }

    break;
    }
}
/**************************************************************************************/

void bbSteeringDesire::getTargetsFromMesh ( MDataBlock& block,int posSize, MVectorArray &target )
{
    MStatus stat;

    MArrayDataHandle inputMeshAD = block.inputArrayValue ( inputMesh, &stat );

    if ( !stat )
    {
        stat.perror ( "ERROR getting inputMeshdata" );
        return;
    }

    MDataHandle elementHandle;

    if ( !stat )
    {
        MGlobal::displayError ( "bbSteeringDesire::compute inputMeshArrayData" );
    }

    int numMesh = inputMeshAD.elementCount();
    inputMeshAD.jumpToElement ( 0 );

    target.clear();

    short inputSelectionV = inputSelectionValue ( block );
    short subTargetsV = subTargetsValue ( block );

    switch ( inputSelectionV )
    {
    case IS_ALL:
    {
        switch ( subTargetsV )
        {
        case ST_UNIFORM:
            /*	{
            		MDoubleArray meshArea;
            		meshArea.clear();

            		// get mesh area

            		for (int i=0;i<numMesh;i++)
            		{
            			elementHandle = inputMeshAD.inputValue(&stat);
            			MObject mesh = elementHandle.asNurbsMeshTransformed();
            			MFnNurbsMesh meshFn( mesh, &stat );

            			if( !stat )
            			{
            				stat.perror("ERROR creating mesh function set");
            				return;
            			}

            			meshArea.append(meshFn.area());
            			inputMeshAD.next();
            		}

            		// calculate meshLengthsSum

            		double meshAreaSum=0;

            		for ( i=0;i<numMesh;i++)
            			meshAreaSum += meshArea[i];


            		// calculate targets per Mesh;

            		MIntArray targetsPerMesh;
            		targetsPerMesh.clear();

            		int targetCountSum=0;
            		int targetCount=0;

            		for (i=0; i<numMesh;i++)
            		{
            			if (meshAreaSum !=0)
            				targetCount = floor(meshArea[i] * posSize / meshAreaSum);

            			targetsPerMesh.append(targetCount);
            			targetCountSum += targetCount;
            		}

            		if (targetCountSum < posSize)
            			targetsPerMesh[numMesh-1] += posSize - targetCountSum;

            		inputMeshAD.jumpToElement(0);

            		for ( i=0; i<numMesh;i++)
            		{
            			elementHandle = inputMeshAD.inputValue(&stat);
            			MObject mesh = elementHandle.asNurbsMeshTransformed();
            			MFnNurbsMesh meshFn( mesh, &stat );

            			if (targetsPerMesh[i] > 0)
            			{
            				double startU, endU, startV, endV;

            				meshFn.getKnotDomain(startU,endU,startV,endV);

            				double paramU = (endU-startU);
            				double paramV = (endV-startV);
            				double paramUV = paramU / paramV;

            				int targetsPerU = ceil(sqrt(targetsPerMesh[i]*paramUV));
            				int targetsPerV = ceil(sqrt(targetsPerMesh[i]/paramUV));

            				double uCoef =0;
            				double vCoef =0;

            				if (targetsPerU != 0) uCoef = paramU/targetsPerU;
            				if (targetsPerV != 0) vCoef = paramV/targetsPerV;


            				// get targets

            				MPoint targetPoint;

            				for (int u=0;u<targetsPerU;u++)
            					for (int v=0;v<targetsPerU;v++)
            					{
            						meshFn.getPointAtParam( uCoef*(u+1),vCoef*(v+1),targetPoint);
            						target.append(MVector(targetPoint));
            					}

            				int unTarget = targetsPerU*targetsPerV-targetsPerMesh[i];

            				// remove unneccesary targets

            				for (int k=0; k< unTarget; k++)
            					target.remove(target.length()-1);
            			}

            			inputMeshAD.next();
            		}
            	}*/
            break;

        case ST_KNOTS:
        {
            int meshPointSize;

            for ( int j=0; j<numMesh; j++ )
            {
                elementHandle = inputMeshAD.inputValue ( &stat );
                MObject mesh = elementHandle.asMeshTransformed();
                MFnMesh meshFn ( mesh, &stat );

                MPointArray meshPoint;
                meshFn.getPoints ( meshPoint );
                meshPointSize =meshPoint.length();

                for ( int e=0; e<meshPointSize; e++ )
                    target.append ( MVector ( meshPoint[e] ) );

                inputMeshAD.next();
            }

        }
        break;
        }
    }
    break;

    case IS_INDEX:
    {
        stat = inputMeshAD.jumpToElement ( inputIndexValue ( block ) );
        if ( stat==MS::kSuccess )
        {
            elementHandle = inputMeshAD.inputValue ( &stat );
            MObject mesh = elementHandle.asMeshTransformed();
            MFnMesh meshFn ( mesh, &stat );

            if ( !stat )
            {
                stat.perror ( "ERROR creating mesh function set" );
                return;
            }

            switch ( subTargetsV )
            {
            case ST_UNIFORM:
            {
                /*	if (posSize > 0)
                	{
                		double startU; double endU;
                		double startV; double endV;

                		meshFn.getKnotDomain(startU,endU,startV,endV);

                		double paramU = (endU-startU);
                		double paramV = (endV-startV);
                		double paramUV = paramU / paramV;

                		int targetsPerU = ceil(sqrt(posSize*paramUV));
                		int targetsPerV = ceil(sqrt(posSize/paramUV));

                		double uCoef =0;
                		double vCoef =0;

                		if (targetsPerU != 0) uCoef = paramU/targetsPerU;
                		if (targetsPerV != 0) vCoef = paramV/targetsPerV;


                		// get targets

                		MPoint targetPoint;

                		for (int u=0;u<targetsPerU;u++)
                			for (int v=0;v<targetsPerU;v++)
                			{
                				meshFn.getPointAtParam( uCoef*(u+1)+startU,vCoef*(v+1)+startV,targetPoint);
                				target.append(MVector(targetPoint));
                			}

                		int unTarget = targetsPerU*targetsPerV-posSize;

                		// remove unneccesary targets

                		for (int k=0; k< unTarget; k++)
                			target.remove(target.length()-1);
                }	*/
            }
            break;

            case ST_KNOTS:
            {
                MPointArray meshPoint;
                meshFn.getPoints ( meshPoint );
                int meshPointSize =meshPoint.length();

                for ( int e=0; e<meshPointSize; e++ )
                    target.append ( MVector ( meshPoint[e] ) );
            }
            break;
            }
        }
    }

    break;
    }
}
/**************************************************************************************/
void bbSteeringDesire::sdSeekTargets ( MDataBlock& block,
                                       const MVectorArray &positions,
                                       const MVectorArray &velocities,
                                       const MVectorArray &target,
                                       MVectorArray &outputForce )
{
    MStatus stat;

    // points and velocities should have the same length. If not return.
    if ( positions.length() != velocities.length() )	return;

    outputForce.clear();

    // get field of view parameter
    double magValue	= block.inputValue ( mMagnitude ).asDouble();
    bool useSensorRangeV = useSensorRangeValue ( block );
    double sensorRangeV = sensorRangeValue ( block );
    bool useSensorAngleV = useSensorAngleValue ( block );
    double sensorAngle = sensorAngleValue ( block );

    // get inverse faktor
    double scaleDesiredForceV = 1.0;
    if ( inverseDesiredSteeringForceValue ( block ) )
        scaleDesiredForceV = -1.0;

    //
    double desiredSpeedV = desiredSpeedValue ( block );
    double maximumForceV = maximumForceValue ( block );

    int targetSize = target.length();
    int posSize = positions.length();

    int j =0;

    MVector desiredVelocityV ( 0.0,0.0,0.0 );

    if ( targetSize != 0 )
    {
        for ( int i = 0; i < posSize; i ++ )
        {
            desiredVelocityV = target[j] - positions[i];

            if ( inFieldOfView ( desiredVelocityV, velocities[i], useSensorRangeV,useSensorAngleV,sensorRangeV,sensorAngle ) )
            {
                seekSteering ( desiredVelocityV,velocities[i],desiredSpeedV,scaleDesiredForceV,maximumForceV, magValue );
                outputForce.append ( desiredVelocityV );
            }
            else
            {
                outputForce.append ( MVector::zero );
            }

            j++;
            if ( j == targetSize ) j=0;
        }
    }

}
/**************************************************************************************/
void bbSteeringDesire::sdMothSeekTargets ( MDataBlock& block,
        const MVectorArray &positions,
        const MVectorArray &velocities,
        const MVectorArray &target,
        MVectorArray &outputForce )
{
    MStatus stat;

    // points and velocities should have the same length. If not return.
    if ( positions.length() != velocities.length() )	return;

    outputForce.clear();

    // get field of view parameters
    bool useSensorRangeV = useSensorRangeValue ( block );
    double sensorRangeV = sensorRangeValue ( block );
    bool useSensorAngleV = useSensorAngleValue ( block );
    double sensorAngle = sensorAngleValue ( block );


    // get inverse faktor
    double scaleDesiredForceV = 1.0;
    if ( inverseDesiredSteeringForceValue ( block ) )
        scaleDesiredForceV = -1.0;

    //
    double magValue	= block.inputValue ( mMagnitude ).asDouble();
    double desiredSpeedV = desiredSpeedValue ( block );
    double maximumForceV = maximumForceValue ( block );

    int targetSize = target.length();
    int posSize = positions.length();

    int j =0;


    MVector desiredVelocityV ( 0.0,0.0,0.0 );

    if ( targetSize != 0 )
    {
        for ( int i =0 ; i < posSize; i ++ )
        {
            desiredVelocityV = target[j] - positions[i];

            if ( inFieldOfView ( desiredVelocityV, velocities[i], useSensorRangeV,useSensorAngleV,sensorRangeV,sensorAngle ) )
            {
                mothSeekSteering ( desiredVelocityV,desiredSpeedV,scaleDesiredForceV,maximumForceV, magValue );
                outputForce.append ( desiredVelocityV );
            }
            else
            {
                outputForce.append ( MVector::zero );
            }

            j++;
            if ( j == targetSize ) j=0;
        }
    }

}
/**************************************************************************************/
void bbSteeringDesire::sdArrivalTargets ( MDataBlock& block,
        const MVectorArray &positions,
        const MVectorArray &velocities,
        const MVectorArray &target,
        MVectorArray &outputForce )
{
    MStatus stat;

    // points and velocities should have the same length. If not return.
    if ( positions.length() != velocities.length() )	return;

    outputForce.clear();

    // get field of view parameter
    bool useSensorRangeV = useSensorRangeValue ( block );
    double sensorRangeV = sensorRangeValue ( block );
    bool useSensorAngleV = useSensorAngleValue ( block );
    double sensorAngle = sensorAngleValue ( block );

    // get inverse faktor
    double scaleDesiredForceV = 1.0;
    if ( inverseDesiredSteeringForceValue ( block ) )
        scaleDesiredForceV = -1.0;

    //
    double desiredSpeedV = desiredSpeedValue ( block );
    double maximumForceV = maximumForceValue ( block );
    double stoppingRangeV = stoppingRangeValue ( block );
    double magValue	= block.inputValue ( mMagnitude ).asDouble();

    int targetSize = target.length();
    int posSize = positions.length();

    int j =0;


    MVector desiredVelocityV ( 0.0,0.0,0.0 );

    if ( targetSize != 0 )
    {
        for (int i =0; i < posSize; i ++ )
        {
            desiredVelocityV = target[j] - positions[i];

            if ( inFieldOfView ( desiredVelocityV, velocities[i], useSensorRangeV,useSensorAngleV,sensorRangeV,sensorAngle ) )
            {
                arrivalSteering ( desiredVelocityV,velocities[i],desiredSpeedV,scaleDesiredForceV,maximumForceV,stoppingRangeV, magValue );
                outputForce.append ( desiredVelocityV );
            }
            else
            {
                outputForce.append ( MVector::zero );
            }

            j++;
            if ( j == targetSize ) j=0;
        }
    }

}

/**************************************************************************************/
void	bbSteeringDesire::sdPursuitTargets ( MDataBlock& block,
        const MVectorArray &positions,
        const MVectorArray &velocities,
        const MVectorArray &target,
        MVectorArray &outputForce )
{
    MStatus stat;

    // points and velocities should have the same length. If not return.
    if ( positions.length() != velocities.length() )	return;

    outputForce.clear();

    // get field of view parameter
    bool useSensorRangeV = useSensorRangeValue ( block );
    double sensorRangeV = sensorRangeValue ( block );
    bool useSensorAngleV = useSensorAngleValue ( block );
    double sensorAngle = sensorAngleValue ( block );

    // get inverse faktor
    double scaleDesiredForceV = 1.0;
    if ( inverseDesiredSteeringForceValue ( block ) )
        scaleDesiredForceV = -1.0;

    //
    double desiredSpeedV = desiredSpeedValue ( block );
    double maximumForceV = maximumForceValue ( block );
    //double stoppingRangeV = stoppingRangeValue ( block );
    double magValue	= block.inputValue ( mMagnitude ).asDouble();

    int targetSize = target.length();
    int posSize = positions.length();

    int j =0;

    // get last offset values
    MVectorArray lastTargetPos;

    MDataHandle hLastVectorV = block.inputValue ( lastVector, &stat );
    MObject dLastVectorV = hLastVectorV.data();
    lastTargetPos = MFnVectorArrayData ( dLastVectorV ).array ( &stat );

    int lastTargetPosSize = lastTargetPos.length();

    // if necessary update last target size

    if ( lastTargetPosSize != targetSize )
    {
        if ( lastTargetPosSize < targetSize )
        {
            for ( int e=lastTargetPosSize-1; e<targetSize; e++ )
                lastTargetPos.append ( MVector::zero );
        }
        else
        {
            do
            {
                lastTargetPos.remove ( lastTargetPosSize-1 );
                lastTargetPosSize = lastTargetPos.length();
            }
            while ( ( int ) lastTargetPos.length() > targetSize );
        }
    }
    // calculate target velocities

    MVectorArray targetVel ( targetSize,MVector::zero );

    for ( int e=0; e<targetSize; e++ )
    {
        // target Velocity
        targetVel[e] = target[e] - lastTargetPos[e];

        // update last target value
        lastTargetPos[e] = target[e];
    }
    //

    MVector desiredVelocityV ( 0.0,0.0,0.0 );
    double predictionS;

    if ( targetSize != 0 )
    {
        for ( int i = 0; i < posSize; i ++ )
        {
            desiredVelocityV = target[j] - positions[i];

            if ( inFieldOfView ( desiredVelocityV, velocities[i], useSensorRangeV,useSensorAngleV,sensorRangeV,sensorAngle ) )
            {
                predictionS = desiredVelocityV.length() * desiredSpeedV;
                desiredVelocityV = target[j]+ targetVel[j]*predictionS - positions[i];
                seekSteering ( desiredVelocityV,velocities[i],desiredSpeedV,scaleDesiredForceV,maximumForceV, magValue );
                outputForce.append ( desiredVelocityV );
            }
            else
            {
                outputForce.append ( MVector::zero );
            }

            j++;
            if ( j == targetSize ) j=0;
        }
    }


    // store last vector data

    MDataHandle hOut = block.outputValue ( lastVector, &stat );
    MFnVectorArrayData fnLastVectorV;

    MObject dOutputLastVectorV = fnLastVectorV.create ( lastTargetPos, &stat );

    // update data block with new output force data.
    hOut.set ( dOutputLastVectorV );

}

/**************************************************************************************/
void	bbSteeringDesire::sdShadowTargets ( MDataBlock& block,
        const MVectorArray &positions,
        const MVectorArray &velocities,
        const MVectorArray &target,
        const MTime &deltaTime,
        MVectorArray &outputForce )
{
    MStatus stat;

    // points and velocities should have the same length. If not return.
    if ( positions.length() != velocities.length() )	return;

    outputForce.clear();

    // get field of view parameter
    bool useSensorRangeV = useSensorRangeValue ( block );
    double sensorRangeV = sensorRangeValue ( block );
    bool useSensorAngleV = useSensorAngleValue ( block );
    double sensorAngle = sensorAngleValue ( block );

    // get inverse faktor
    double scaleDesiredForceV = 1.0;
    if ( inverseDesiredSteeringForceValue ( block ) )
        scaleDesiredForceV = -1.0;

    //
    double desiredSpeedV = desiredSpeedValue ( block );
    double maximumForceV = maximumForceValue ( block );
    double shadowRangeV = shadowRangeValue ( block );
    double magValue	= block.inputValue ( mMagnitude ).asDouble();

    int targetSize = target.length();
    int posSize = positions.length();

    int j =0;

    // get last offset values
    MVectorArray lastTargetPos;

    MDataHandle hLastVectorV = block.inputValue ( lastVector, &stat );
    MObject dLastVectorV = hLastVectorV.data();
    lastTargetPos = MFnVectorArrayData ( dLastVectorV ).array ( &stat );

    int lastTargetPosSize = lastTargetPos.length();

    // if necessary update last target size

    if ( lastTargetPosSize != targetSize )
    {
        if ( lastTargetPosSize < targetSize )
        {
            for ( int e=lastTargetPosSize-1; e<targetSize; e++ )
                lastTargetPos.append ( MVector::zero );
        }
        else
        {
            do
            {
                lastTargetPos.remove ( lastTargetPosSize-1 );
                lastTargetPosSize = lastTargetPos.length();
            }
            while ( ( int ) lastTargetPos.length() > targetSize );
        }
    }
    // calculate target velocities

    MVectorArray targetVel ( targetSize,MVector::zero );

    for ( int e=0; e<targetSize; e++ )
    {
        // target Velocity
        targetVel[e] = target[e] - lastTargetPos[e];

        // update last target value
        lastTargetPos[e] = target[e];
    }
    //

    MVector desiredVelocityV ( 0.0,0.0,0.0 );
    double deltaTimeV = deltaTime.as ( MTime::kSeconds );
    if ( deltaTimeV != 0.0 )
        deltaTimeV = 1 / deltaTimeV;


    if ( targetSize != 0 )
    {
        for ( int i =0; i < posSize; i ++ )
        {
            desiredVelocityV = target[j] - positions[i];

            if ( inFieldOfView ( desiredVelocityV, velocities[i], useSensorRangeV,useSensorAngleV,sensorRangeV,sensorAngle ) )
            {
                if ( desiredVelocityV.length() > shadowRangeV )
                {
                    seekSteering ( desiredVelocityV,velocities[i],desiredSpeedV,scaleDesiredForceV,maximumForceV, magValue );
                }
                else
                {
                    desiredVelocityV =  deltaTimeV * targetVel[j] - velocities[i];

                    // delta time


                    desiredVelocityV *= scaleDesiredForceV;
                    truncVector ( desiredVelocityV,maximumForceV );
                }

                outputForce.append ( desiredVelocityV );
            }
            else
            {
                outputForce.append ( MVector::zero );
            }

            j++;
            if ( j == targetSize ) j=0;
        }
    }


    // store last vector data

    MDataHandle hOut = block.outputValue ( lastVector, &stat );
    MFnVectorArrayData fnLastVectorV;

    MObject dOutputLastVectorV = fnLastVectorV.create ( lastTargetPos, &stat );

    // update data block with new output force data.
    hOut.set ( dOutputLastVectorV );

}


/**************************************************************************************/
// steering desire: head direction

void bbSteeringDesire::sdBugHeadDirection ( MDataBlock& block,
        const MVectorArray &positions,
        const MVectorArray &velocities,
        MVectorArray &outputForce )
{
    // points and velocities should have the same length. If not return.
    //
    if ( positions.length() != velocities.length() )
        return;

    // clear the output force array.
    //
    outputForce.clear();

    double scaleDesiredForceV = 1.0;
    if ( inverseDesiredSteeringForceValue ( block ) )
        scaleDesiredForceV = -1.0;

    double desiredSpeedV = desiredSpeedValue ( block );
    double maximumForceV = maximumForceValue ( block );
    double magValue	= block.inputValue ( mMagnitude ).asDouble();
	double minimumForceV = minimumForceValue( block );

    MVector directionV;
    directionValue ( block,directionV );


    int posSize = positions.length();
    MVector desiredVelocityV ( 0.0,0.0,0.0 );

    for ( int i=0; i < posSize; i++ )
    {
        if ( directionV != MVector::zero && velocities[i].length() >=  minimumForceV )
        {
            desiredVelocityV = directionV;
        }
        else
        {
            desiredVelocityV = velocities[i];
        }

        seekSteering ( desiredVelocityV,velocities[i],desiredSpeedV,scaleDesiredForceV,maximumForceV, magValue );
        outputForce.append ( desiredVelocityV );
    }
}

/**************************************************************************************/

void bbSteeringDesire::sdNeighborAlignment ( MDataBlock& block,
        const MVectorArray &positions,
        const MVectorArray &velocities,
        MVectorArray &outputForce )
{
    // points and velocities should have the same length. If not return.
    if ( positions.length() != velocities.length() )
        return;

    // clear the output force array.
    outputForce.clear();

    // get field parameters.
    double scaleDesiredForceV = 1.0;
    if ( inverseDesiredSteeringForceValue ( block ) )
        scaleDesiredForceV = -1.0;

    bool useSensorRangeV = useSensorRangeValue ( block );
    double sensorRangeV = sensorRangeValue ( block );

    bool useSensorAngleV = useSensorAngleValue ( block );
    double sensorAngle = sensorAngleValue ( block );
    double maximumForceV = maximumForceValue ( block );
	double minimumForceV = minimumForceValue ( block );
	double magValue	= block.inputValue ( mMagnitude ).asDouble();

    MVector targetV;

    // alignment steering
    int posSize = positions.length();

    MVector desiredVelocityV;

    int j =0;

    MIntArray nearbyBugIndexList;
    int nearbyBugIndexListSize;

    for ( int i =0; i < posSize; i++ )
    {
        getNearbyBugs ( positions,i,velocities[i],useSensorRangeV,useSensorAngleV,sensorRangeV,sensorAngle,nearbyBugIndexList );
        nearbyBugIndexListSize= nearbyBugIndexList.length();

        if ( nearbyBugIndexListSize > 0 )
        {
            desiredVelocityV = MVector::zero;

			int includeForceCount = 1;
            for ( j=0; j < nearbyBugIndexListSize; j++ )
            {
				if (velocities[nearbyBugIndexList[j]].length() > minimumForceV)
				{
					desiredVelocityV += velocities[nearbyBugIndexList[j]];
					includeForceCount ++;
				}
            }

			float mag = desiredVelocityV.length();
            desiredVelocityV *= 1.0/float ( includeForceCount );

            //desiredVelocityV =  desiredVelocityV - velocities[i];
            desiredVelocityV *= scaleDesiredForceV;
			desiredVelocityV *= mag;
			desiredVelocityV *= magValue;

            truncVector ( desiredVelocityV,maximumForceV*magValue );
            outputForce.append ( desiredVelocityV );
        }
        else
        {
            outputForce.append ( MVector::zero );
        }
    }

    nearbyBugIndexList.clear();
}

/**************************************************************************************/

void bbSteeringDesire::sdNeighborCohesion ( MDataBlock& block,
        const MVectorArray &positions,
        const MVectorArray &velocities,
        MVectorArray &outputForce )
{
    // points and velocities should have the same length. If not return.
    if ( positions.length() != velocities.length() )
        return;

    // clear the output force array.
    outputForce.clear();

    // get field parameters.
    double scaleDesiredForceV = 1.0;
    if ( inverseDesiredSteeringForceValue ( block ) )
        scaleDesiredForceV = -1.0;

    bool useSensorRangeV = useSensorRangeValue ( block );
    double sensorRangeV = sensorRangeValue ( block );

    bool useSensorAngleV = useSensorAngleValue ( block );
    double sensorAngle = sensorAngleValue ( block );

//	double desiredSpeedV = desiredSpeedValue(block);
    double maximumForceV = maximumForceValue ( block );
	double minimumForceV = minimumForceValue ( block );
	double magValue	= block.inputValue ( mMagnitude ).asDouble();


    MVector targetV;
//	targetValue(block,targetV);

    // alignment steering
    int posSize = positions.length();

    MVector desiredVelocityV;
    MVector noForceV ( 0.0,0.0,0.0 );

    int j =0;

    MIntArray nearbyBugIndexList;
    int nearbyBugIndexListSize;

    MString temp;
    //temp ="bug: ";
    //temp += i;

    //MGlobal::displayError(temp);
    //temp ="";


    for (int  i =0; i < posSize; i ++ )
    {
        getNearbyBugs ( positions,i,velocities[i],useSensorRangeV,useSensorAngleV,sensorRangeV,sensorAngle,nearbyBugIndexList );
        nearbyBugIndexListSize= nearbyBugIndexList.length();

        //temp ="bug: ";
        //temp += i;
        //MGlobal::displayError(temp);

        if ( nearbyBugIndexListSize > 0 && velocities[i].length() > minimumForceV )
        {

            //temp="";

            desiredVelocityV = MVector::zero;

			int affectedCount = 1;
            for ( j=0; j < nearbyBugIndexListSize; j++ )
            {
                //temp += nearbyBugIndexList[j];
                //temp += ", ";
                if (velocities[nearbyBugIndexList[j]].length() > minimumForceV)
				{
					desiredVelocityV += positions[nearbyBugIndexList[j]];
					affectedCount ++;
				}
            }
            //
            //MGlobal::displayInfo(temp);
            desiredVelocityV *= 1.0/float ( affectedCount );
            desiredVelocityV = desiredVelocityV - positions[i];
            desiredVelocityV *= scaleDesiredForceV;
			desiredVelocityV *= magValue;
            truncVector ( desiredVelocityV,maximumForceV*magValue );
            outputForce.append ( desiredVelocityV );
        }
        else
        {
            outputForce.append ( noForceV );
        }
    }
    nearbyBugIndexList.clear();
}

/**************************************************************************************/

void bbSteeringDesire::sdNeighborSeparation ( MDataBlock& block,
        const MVectorArray &positions,
        const MVectorArray &velocities,
        MVectorArray &outputForce )
{
    // points and velocities should have the same length. If not return.
    if ( positions.length() != velocities.length() )
        return;

    // clear the output force array.
    outputForce.clear();

    // get field parameters.
    double scaleDesiredForceV = 1.0;
    if ( inverseDesiredSteeringForceValue ( block ) )
        scaleDesiredForceV = -1.0;

    bool useSensorRangeV = useSensorRangeValue ( block );
    double sensorRangeV = sensorRangeValue ( block );
    bool useSensorAngleV = useSensorAngleValue ( block );
    double sensorAngle = sensorAngleValue ( block );

    double maximumForceV = maximumForceValue ( block );
    //double bugRadiusV = bugRadiusValue ( block );

    // alignment steering
    int posSize = positions.length();

    MVector desiredVelocityV;
    MVector positionOffset;
    MVector noForceV ( 0.0,0.0,0.0 );

    int j =0;

    MIntArray nearbyBugIndexList;
    int nearbyBugIndexListSize;

    for ( int i =0; i < posSize; i ++ )
    {
        getNearbyBugs ( positions,i,velocities[i],useSensorRangeV,useSensorAngleV,sensorRangeV,sensorAngle,nearbyBugIndexList );
        nearbyBugIndexListSize= nearbyBugIndexList.length();

        if ( nearbyBugIndexListSize > 0 )
        {
            desiredVelocityV = MVector::zero;

            for ( j=0; j < nearbyBugIndexListSize; j++ )
            {
                positionOffset = positions[i] -  positions[nearbyBugIndexList[j]];
                positionOffset.normalize();
                desiredVelocityV += positionOffset;
            }

            desiredVelocityV *= 1.0/float ( nearbyBugIndexListSize );

            desiredVelocityV *= scaleDesiredForceV;
            truncVector ( desiredVelocityV,maximumForceV );
            outputForce.append ( desiredVelocityV );
        }
        else
        {
            outputForce.append ( noForceV );
        }
    }
    nearbyBugIndexList.clear();
}

/**************************************************************************************/

void bbSteeringDesire::sdNeighborUnalignedCollisionAvoidance ( MDataBlock& block,
        const MVectorArray &positions,
        const MVectorArray &velocities,
        MVectorArray &outputForce )
{
    // points and velocities should have the same length. If not return.
    if ( positions.length() != velocities.length() )
        return;

    // clear the output force array.
    outputForce.clear();

    // get field parameters.
    double scaleDesiredForceV = 1.0;
    if ( inverseDesiredSteeringForceValue ( block ) )
        scaleDesiredForceV = -1.0;

    bool useSensorRangeV = useSensorRangeValue ( block );
    double sensorRangeV = sensorRangeValue ( block );
    bool useSensorAngleV = useSensorAngleValue ( block );
    double sensorAngle = sensorAngleValue ( block );

    double maximumForceV = maximumForceValue ( block );
    //double bugRadiusV = bugRadiusValue ( block );

    double toleranceV = toleranceValue ( block );

    // alignment steering
    int posSize = positions.length();

    MVector desiredVelocityV;
    MVector positionOffset;

    MIntArray nearbyBugIndexList;
    int nearbyBugIndexListSize;

    MVector p,v;
    double a,b, maxTime;

    maxTime = 4;

    for ( int i=0; i < posSize; i ++ )
    {
        // neighborhoud search

        getNearbyBugs ( positions,i,velocities[i],useSensorRangeV,useSensorAngleV,sensorRangeV,sensorAngle,nearbyBugIndexList );
        nearbyBugIndexListSize= nearbyBugIndexList.length();

        if ( nearbyBugIndexListSize > 0 )
        {
            // find closest approach

            double closestDistanceSqu = MAX_DOUBLE;
            int closestBug;

            bool foundClosestBug = false;

            for ( int j=0; j < nearbyBugIndexListSize; j++ )
            {
                p = positions[i] -  positions[nearbyBugIndexList[j]];
                v = velocities[i] - velocities[nearbyBugIndexList[j]];

                a = v*p;
                b = v.length();

                if ( -toleranceV < a && a < toleranceV )	// nearby bug moving parrallel to current bug
                    if ( a > toleranceV ) 					// closest approach in the past
                        if ( -toleranceV < b && b < toleranceV )	// no relative motion
                            if ( ( a < -toleranceV ) && ! ( -toleranceV < b && b < toleranceV ) )
                            {
                                // calculate time and distance.
                                double time = - a / pow ( b,2 );
                                double distanceSqu = pow ( p.length(),2 ) + 2*a*time + pow ( b,2 ) *pow ( time,2 );

                                if ( time < maxTime )			// collision !!!
                                {
                                    if ( distanceSqu < closestDistanceSqu )
                                    {
                                        closestDistanceSqu = distanceSqu;
                                        closestBug = nearbyBugIndexList[j];
                                        foundClosestBug = true;
                                    }

                                }
                            }

            }


            // take evasive action if closestBug found

            if ( foundClosestBug )
            {
                desiredVelocityV = MVector::zero;

                desiredVelocityV *= scaleDesiredForceV;
                truncVector ( desiredVelocityV,maximumForceV );
                outputForce.append ( desiredVelocityV );
            }
            else
                outputForce.append ( MVector::zero );

        }
        else
            outputForce.append ( MVector::zero );
    }
    nearbyBugIndexList.clear();
}

/**************************************************************************************/

void bbSteeringDesire::sdNeighborKeepDistance ( MDataBlock& block,
        const MVectorArray &positions,
        const MVectorArray &velocities,
        MVectorArray &outputForce )
{
    // points and velocities should have the same length. If not return.
    if ( positions.length() != velocities.length() )
        return;

    // clear the output force array.
    outputForce.clear();

    // get field parameters.
    double scaleDesiredForceV = 1.0;
    if ( inverseDesiredSteeringForceValue ( block ) )
        scaleDesiredForceV = -1.0;

    bool useSensorRangeV = useSensorRangeValue ( block );
    double sensorRangeV = sensorRangeValue ( block );
    bool useSensorAngleV = useSensorAngleValue ( block );
    double sensorAngle = sensorAngleValue ( block );

    double maximumForceV = maximumForceValue ( block );
    //double bugRadiusV = bugRadiusValue ( block );

    double toleranceV = toleranceValue ( block );
    double desiredSpeedV = desiredSpeedValue ( block );
    double distance = stoppingRangeValue ( block );
    double magValue	= block.inputValue ( mMagnitude ).asDouble();

    // alignment steering
    int posSize = positions.length();

    MVector desiredVelocityV;
    MVector positionOffset;

    double nearestBugDistance = MAX_DOUBLE;

    int j =0;

    double currDistance;

    int nearestBugIndex = -1;
    MVector nearestBugOffset;

    MIntArray nearbyBugIndexList;
    int nearbyBugIndexListSize;

    for ( int i =0; i < posSize; i ++ )
    {
        getNearbyBugs ( positions,i,velocities[i],useSensorRangeV,useSensorAngleV,sensorRangeV,sensorAngle,nearbyBugIndexList );
        nearbyBugIndexListSize= nearbyBugIndexList.length();

        if ( nearbyBugIndexListSize > 0 )
        {
            nearestBugDistance = MAX_DOUBLE;
            nearestBugIndex = -1;

            // find nearest Bug
            for ( j=0; j < nearbyBugIndexListSize; j++ )
            {
                positionOffset = positions[i] -  positions[nearbyBugIndexList[j]];
                currDistance = positionOffset.length();

                if ( currDistance < nearestBugDistance )
                {
                    nearestBugDistance = currDistance;
                    nearestBugIndex = nearbyBugIndexList[j];
                    nearestBugOffset = positionOffset;
                }
            }

            //

            if ( nearestBugIndex )
            {
                if ( ! ( ( ( distance - toleranceV ) < nearestBugDistance )  &&
                         ( ( distance + toleranceV ) > nearestBugDistance ) ) )
                {
                    desiredVelocityV = velocities[i];
                    desiredVelocityV.normalize();
                    desiredVelocityV *= distance;

                    desiredVelocityV = positions[i] + desiredVelocityV - positions[nearestBugIndex];
                    desiredVelocityV.normalize();
                    desiredVelocityV *= distance;

                    seekSteering ( desiredVelocityV,velocities[i],desiredSpeedV,scaleDesiredForceV,maximumForceV, magValue );
                    outputForce.append ( desiredVelocityV );
                }
                else
                    outputForce.append ( MVector::zero );
            }
            else
                outputForce.append ( MVector::zero );
        }
    }
    nearbyBugIndexList.clear();
}

/*************************************************************************************************/

void bbSteeringDesire::sdNeighborOportunism ( MDataBlock& block,
        const MVectorArray &positions,
        const MVectorArray &velocities,
        MVectorArray &outputForce )
{
    /*	// points and velocities should have the same length. If not return.
    	if( positions.length() != velocities.length() )
    		return;

    	// clear the output force array.
    	outputForce.clear();

    	// get field parameters.
    	double scaleDesiredForceV = 1.0;
    	if (inverseDesiredSteeringForceValue(block))
    		scaleDesiredForceV = -1.0;

    	bool useSensorRangeV = useSensorRangeValue(block);
    	double sensorRangeV = sensorRangeValue(block);
    	bool useSensorAngleV = useSensorAngleValue(block);
    	double sensorAngle = sensorAngleValue(block);

    	double maximumForceV = maximumForceValue(block);
    	double bugRadiusV = bugRadiusValue(block);

    	double toleranceV = toleranceValue(block);
    	double desiredSpeedV = desiredSpeedValue(block);

    	double angleTolerance = 1.047;

    	angleTolerance /=2;

    	// alignment steering
    	int posSize = positions.length();

    	MVector desiredVelocityV;
    	MVector positionOffset;

    	double nearestBugDistance = MAX_DOUBLE;


    	int i =0;
    	int j =0;
    	int e;

    	MIntArray nearbyBugIndexList;
    	int nearbyBugIndexListSize;

    	for (i; i < posSize; i ++ )
    	{
    		getNearbyBugs(positions,i,velocities[i],useSensorRangeV,useSensorAngleV,sensorRangeV,sensorAngle,nearbyBugIndexList);
    		nearbyBugIndexListSize= nearbyBugIndexList.length();

    		if (nearbyBugIndexListSize > 0)
    		{
    			// calculate angles between bug and neighbors

    			MDoubleArray nearbyAngle(nearbyBugIndexListSize,0.0);
    			MDoubleArray nearbyAngleSorted;

    			for (e=0; e < nearbyBugIndexListSize; e++)
    				nearbyAngle[e] = velocities[i].angle(velocities[nearbyBugIndexList[e]]);

    			// find median

    			nearbyAngleSorted.copy(nearbyAngle);
    			shellSort(nearbyAngleSorted);
    			double nearbyAngleMedian = median(nearbyAngleSorted);

    			// find median vector

    			MIntArray sortedNearbyBugIndexList(nearbyBugIndexListSize,0);

    			for (int a=0; a <nearbyBugIndexListSize; a++)
    			{
    				int b=-1;

    				do
    				{
    					b++;
    				}
    				while (nearbyAngleSorted[a] == nearbyAngle[b]);

    				sortedNearbyBugIndexList[a] = b;
    			}


    			MVector medianVector;

    			e = -1 ;

    			do
    			{
    				e++;
    			}
    			while (nearbyAngleMedian <= nearbyAngleSorted[e]);


    			if (nearbyAngleMedian == nearbyAngle[e])
    				medianVector = velocities[sortedNearbyBugIndexList[e]];
    			else
    				if (e > 0)
    					medianVector = 0.5*(velocities[sortedNearbyBugIndexList[e]]+velocities[sortedNearbyBugIndexList[e-1]]);


    			// diff Angle >

    			double diffAngle = velocities[i].angle(medianVector);

    			if (diffAngle > angleTolerance )
    			{
    				desiredVelocityV =  medianVector - velocities[i];
    				desiredVelocityV *= scaleDesiredForceV;
    				truncVector(desiredVelocityV,maximumForceV);
    				outputForce.append( desiredVelocityV );	seekSteering(desiredVelocityV,velocities[i],desiredSpeedV,scaleDesiredForceV,maximumForceV);
    			}
    			else
    				outputForce.append( MVector::zero );
    		}
    		else
    			outputForce.append(MVector::zero);
    	}
    	nearbyBugIndexList.clear(); */
}

/**************************************************************************************/
// steering desire: curve following

void bbSteeringDesire::sdCurveFollowing ( MDataBlock& block,
        const MVectorArray &positions,
        const MVectorArray &velocities,
        MVectorArray &outputForce )
{
    MStatus stat;

    if ( positions.length() != velocities.length() )	return;
    outputForce.clear();

    // get attribute data

    double scaleDesiredForceV = 1.0;
    if ( inverseDesiredSteeringForceValue ( block ) )
        scaleDesiredForceV = -1.0;

    double desiredSpeedV = desiredSpeedValue ( block );
    double maximumForceV = maximumForceValue ( block );
    double targetRadiusV = targetRadiusValue ( block );
    double toleranceV = toleranceValue ( block );
    double sensorRangeV = sensorRangeValue ( block );
    double magValue	= block.inputValue ( mMagnitude ).asDouble();

    // get curve

    MArrayDataHandle inputCurveAD = block.inputArrayValue ( inputCurve, &stat );
    if ( !stat )
    {
        stat.perror ( "ERROR getting inputCurvedata" );
        return;
    }

    MDataHandle elementHandle;
    if ( !stat )
    {
        MGlobal::displayError ( "bbSteeringDesire::compute inputPointArrayData" );
    }

    int numCurve = inputCurveAD.elementCount();
    inputCurveAD.jumpToElement ( 0 );

    short inputSelectionV = inputSelectionValue ( block );

    if ( ( numCurve == 1 ) || ( inputSelectionV==IS_INDEX ) )
    {
        stat = inputCurveAD.jumpToElement ( inputIndexValue ( block ) );
        if ( stat==MS::kSuccess )
        {
            elementHandle = inputCurveAD.inputValue ( &stat );
            MObject curve = elementHandle.asNurbsCurveTransformed();
            MFnNurbsCurve curveFn ( curve, &stat );

            if ( !stat )
            {
                stat.perror ( "ERROR creating curve function set" );
                return;
            }

            // init variables

            int posSize = positions.length();

            MVector desiredVelocityV ( 0.0,0.0,0.0 );
            MVector predictedPos;
            MVector unitVelocity;
            MPoint predictedPosPoint;
            MPoint closestCurvePoint;

            double pointParameter;

            for ( int i=0; i < posSize; i ++ )
            {
                unitVelocity = velocities[i];
                unitVelocity.normalize();

                predictedPosPoint = MPoint ( positions[i] + sensorRangeV * unitVelocity );
                closestCurvePoint = curveFn.closestPoint ( predictedPosPoint,&pointParameter,toleranceV );

                if ( MVector ( predictedPosPoint-closestCurvePoint ).length() <= targetRadiusV )
                {
                    outputForce.append ( MVector::zero );
                }
                else
                {
                    desiredVelocityV = MVector ( closestCurvePoint ) - positions[i];
                    seekSteering ( desiredVelocityV,velocities[i],desiredSpeedV,scaleDesiredForceV,maximumForceV, magValue );
                    outputForce.append ( desiredVelocityV );
                }
            }
        }
    }
}
/**************************************************************************************/
// steering desire: path alignment

void bbSteeringDesire::sdSurfaceFollowing ( MDataBlock& block,
        const MVectorArray &positions,
        const MVectorArray &velocities,
        MVectorArray &outputForce )
{
    MStatus stat;
    // points and velocities should have the same length. If not return.

    if ( positions.length() != velocities.length() )
        return;

    outputForce.clear();

    //bool useSensorRangeV = useSensorRangeValue ( block );
    double sensorRangeV = sensorRangeValue ( block );

    //bool useSensorAngleV = useSensorAngleValue ( block );
    //double sensorAngle = sensorAngleValue ( block );

    double scaleDesiredForceV = 1.0;
    if ( inverseDesiredSteeringForceValue ( block ) )
        scaleDesiredForceV = -1.0;

    double desiredSpeedV = desiredSpeedValue ( block );
    double maximumForceV = maximumForceValue ( block );
    double targetRadiusV = targetRadiusValue ( block );
    double magValue	= block.inputValue ( mMagnitude ).asDouble();
    // get surface


    MArrayDataHandle inputSurfaceAD = block.inputArrayValue ( inputSurface, &stat );
    if ( !stat )
    {
        stat.perror ( "ERROR getting inputSurfacedata" );
        return;
    }

    MDataHandle elementHandle;
    if ( !stat )
    {
        MGlobal::displayError ( "bbSteeringDesire::compute inputSurfaceArrayData" );
    }

    stat = inputSurfaceAD.jumpToElement ( inputIndexValue ( block ) );

    if ( stat==MS::kSuccess )
    {
        elementHandle = inputSurfaceAD.inputValue ( &stat );
        MObject surface = elementHandle.asNurbsSurfaceTransformed();
        MFnNurbsSurface surfaceFn ( surface, &stat );

        if ( !stat )
        {
            stat.perror ( "ERROR creating surface function set" );
            return;
        }

        // path following

        int posSize = positions.length();

        MVector desiredVelocityV ( 0.0,0.0,0.0 );
        MVector predictedPos;
        MVector unitVelocity;
        MPoint predictedPosPoint;
        MPoint closestSurfacePoint;
        MVector tangent;

        //double epsilon = 0.01;

        MString temp;

        for ( int i=0; i < posSize; i ++ )
        {
            unitVelocity = velocities[i];
            unitVelocity.normalize();

            predictedPosPoint = MPoint ( positions[i] + sensorRangeV * unitVelocity );
            closestSurfacePoint = surfaceFn.closestPoint ( predictedPosPoint );

            if ( MVector ( predictedPosPoint-closestSurfacePoint ).length() <= targetRadiusV )
            {
                outputForce.append ( MVector::zero );
            }
            else
            {
                desiredVelocityV = MVector ( closestSurfacePoint ) - positions[i];
                seekSteering ( desiredVelocityV,velocities[i],desiredSpeedV,scaleDesiredForceV,maximumForceV, magValue );
                outputForce.append ( desiredVelocityV );
            }
        }
    }
}

/**************************************************************************************/
// steering desire: obstacle avoidance

void bbSteeringDesire::sdSurfaceObstacleAvoidance ( MDataBlock& block,
        const MVectorArray &positions,
        const MVectorArray &velocities,
        MVectorArray &outputForce )
{
    MStatus stat;
    // points and velocities should have the same length. If not return.

    if ( positions.length() != velocities.length() )	return;

    outputForce.clear();

//	bool useSensorRangeV = useSensorRangeValue(block);
//	double sensorRangeV = sensorRangeValue(block);

//	bool useSensorAngleV = useSensorAngleValue(block);
//	double sensorAngle = sensorAngleValue(block);

    double scaleDesiredForceV = 1.0;
    if ( inverseDesiredSteeringForceValue ( block ) ) scaleDesiredForceV = -1.0;

    double desiredSpeedV = desiredSpeedValue ( block );
    double maximumForceV = maximumForceValue ( block );
    double probeLengthV = probeLengthValue ( block );

    double toleranceV = toleranceValue ( block );

    int posSize = positions.length();

    MVector desiredVelocityV ( 0.0,0.0,0.0 );
    MVector unitVelocity;
    double magValue	= block.inputValue ( mMagnitude ).asDouble();

    // get surfaces


    MArrayDataHandle inputSurfaceAD = block.inputArrayValue ( inputSurface, &stat );
    if ( !stat )
    {
        stat.perror ( "ERROR getting inputSurfacedata" );
        return;
    }

    MDataHandle elementHandle;
    if ( !stat )
    {
        MGlobal::displayError ( "bbSteeringDesire::compute inputSurfaceArrayData" );
    }

    int numSurface = inputSurfaceAD.elementCount();
    inputSurfaceAD.jumpToElement ( 0 );

    short inputSelectionV = inputSelectionValue ( block );


    switch ( inputSelectionV )
    {
    case IS_ALL:
    {
        MPoint intersectPoint;
        double distance, uIP, vIP;

        MDoubleArray shortestDistance ( posSize,1.7E+308 );
        MDoubleArray shortestUIP ( posSize,0.0 );
        MDoubleArray shortestVIP ( posSize,0.0 );

        MIntArray shortestSurface ( posSize,0 );

        MVector uTangent, vTangent, uvPerpend;

        // get shortest interesection values;

        for ( int i=0; i<numSurface; i++ )
        {
            elementHandle = inputSurfaceAD.inputValue ( &stat );
            MObject surface = elementHandle.asNurbsSurfaceTransformed();
            MFnNurbsSurface surfaceFn ( surface, &stat );
            if ( !stat )
            {
                stat.perror ( "ERROR creating surface function set" );
                return;
            }

            for ( int e=0; e < posSize; e++ )
            {
                if ( surfaceFn.intersect ( positions[e],velocities[e],uIP,vIP,intersectPoint,toleranceV,MSpace::kObject,true,&distance ) )
                {
                    if ( distance < shortestDistance[e] )
                    {
                        shortestDistance[e] = distance;
                        shortestUIP[e] = uIP;
                        shortestVIP[e] = vIP;
                        shortestSurface[e] = i;
                    }
                }
            }
            inputSurfaceAD.next();
        }

        // steer
        for ( int e=0; e < posSize; e++ )
        {
            if ( shortestDistance[e] <= probeLengthV )
            {
                inputSurfaceAD.jumpToElement ( shortestSurface[e] );
                elementHandle = inputSurfaceAD.inputValue ( &stat );
                MObject surface = elementHandle.asNurbsSurfaceTransformed();
                MFnNurbsSurface surfaceFn ( surface, &stat );
                if ( !stat )
                {
                    stat.perror ( "ERROR creating surface function set" );
                    return;
                }

                // calculate steering vector as perpendicular to tangent vectors
                surfaceFn.getTangents ( shortestUIP[e],shortestVIP[e],uTangent,vTangent );
                uvPerpend = uTangent ^ vTangent;
                desiredVelocityV = uvPerpend;

                // double check this
                seekSteering ( desiredVelocityV,velocities[e],desiredSpeedV,scaleDesiredForceV,maximumForceV, magValue );

                outputForce.append ( desiredVelocityV );
            }
            else
            {
                outputForce.append ( MVector::zero );
            }

        }

    }
    break;

    case IS_INDEX:
    {
        stat = inputSurfaceAD.jumpToElement ( inputIndexValue ( block ) );
        if ( stat==MS::kSuccess )
        {
            elementHandle = inputSurfaceAD.inputValue ( &stat );
            MObject surface = elementHandle.asNurbsSurfaceTransformed();
            MFnNurbsSurface surfaceFn ( surface, &stat );

            if ( !stat )
            {
                stat.perror ( "ERROR creating surface function set" );
                return;
            }

            MPoint intersectPoint;
            double distance, uIP, vIP;
            MVector uTangent, vTangent, uvPerpend;


            for ( int i=0; i < posSize; i ++ )
            {
                // intersection test
                if ( surfaceFn.intersect ( positions[i],velocities[i],uIP,vIP,intersectPoint,toleranceV,MSpace::kObject,true,&distance ) )
                {
                    // point of intersection critical?

                    //	double probeLength = MVector(positions[i] + sensorRangeV * unitVelocity).length();

                    if ( distance <= probeLengthV )
                    {
                        // calculate steering vector as perpendicular to tangent vectors
                        surfaceFn.getTangents ( uIP,vIP,uTangent,vTangent );
                        uvPerpend = uTangent ^ vTangent;
                        desiredVelocityV = uvPerpend;
                        seekSteering ( desiredVelocityV,velocities[i],desiredSpeedV,scaleDesiredForceV,maximumForceV, magValue );
                        outputForce.append ( desiredVelocityV );

                    }
                    else
                    {
                        outputForce.append ( MVector::zero );
                    }
                }
                else
                {
                    outputForce.append ( MVector::zero );
                }
            }
        }

    }
    break;
    }
}

/**************************************************************************************/
//steering desire: mesh following

void bbSteeringDesire::sdMeshFollowing ( MDataBlock& block,
        const MVectorArray &positions,
        const MVectorArray &velocities,
        MVectorArray &outputForce )
{
    MStatus stat;
    // points and velocities should have the same length. If not return.

    if ( positions.length() != velocities.length() )
        return;

    outputForce.clear();

    //bool useSensorRangeV = useSensorRangeValue ( block );
    double sensorRangeV = sensorRangeValue ( block );

    //bool useSensorAngleV = useSensorAngleValue ( block );
    //double sensorAngle = sensorAngleValue ( block );

    double scaleDesiredForceV = 1.0;
    if ( inverseDesiredSteeringForceValue ( block ) )
        scaleDesiredForceV = -1.0;

    double desiredSpeedV = desiredSpeedValue ( block );
    double maximumForceV = maximumForceValue ( block );
    double targetRadiusV = targetRadiusValue ( block );
    double magValue	= block.inputValue ( mMagnitude ).asDouble();

    // get mesh

    MArrayDataHandle inputMeshAD = block.inputArrayValue ( inputMesh, &stat );
    if ( !stat )
    {
        stat.perror ( "ERROR getting inputMeshData" );
        return;
    }

    MDataHandle elementHandle;
    if ( !stat )
    {
        MGlobal::displayError ( "bbSteeringDesire::compute inputMeshArrayData" );
    }

    //int numMesh = inputMeshAD.elementCount();

    stat = inputMeshAD.jumpToElement ( inputIndexValue ( block ) );

    if ( stat==MS::kSuccess )
    {
        elementHandle = inputMeshAD.inputValue ( &stat );
        MObject mesh = elementHandle.asMeshTransformed();
        MFnMesh meshFn ( mesh, &stat );

        if ( !stat )
        {
            stat.perror ( "ERROR creating mesh function set" );
            return;
        }

        // mesh following

        int posSize = positions.length();

        MVector desiredVelocityV ( 0.0,0.0,0.0 );
        MVector predictedPos;
        MVector unitVelocity;
        MPoint predictedPosPoint;
        MPoint closestMeshPoint;
        MVector tangent;

        //double epsilon = 0.01;

        MString temp;

        for ( int i=0; i < posSize; i ++ )
        {
            unitVelocity = velocities[i];
            unitVelocity.normalize();

            predictedPosPoint = MPoint ( positions[i] + sensorRangeV * unitVelocity );
            meshFn.getClosestPoint ( predictedPosPoint,closestMeshPoint );

            if ( MVector ( predictedPosPoint-closestMeshPoint ).length() <= targetRadiusV )
            {
                outputForce.append ( MVector::zero );
            }
            else
            {
                desiredVelocityV = MVector ( closestMeshPoint ) - positions[i];
                seekSteering ( desiredVelocityV,velocities[i],desiredSpeedV,scaleDesiredForceV,maximumForceV, magValue );
                outputForce.append ( desiredVelocityV );
            }
        }
    }

}

/**************************************************************************************/
// steering desire: mesh obstacle avoidance

void bbSteeringDesire::sdMeshObstacleAvoidance ( MDataBlock& block,
        const MVectorArray &positions,
        const MVectorArray &velocities,
        MVectorArray &outputForce )
{
    MStatus stat;
    // points and velocities should have the same length. If not return.

    if ( positions.length() != velocities.length() )	return;

    outputForce.clear();

//	bool useSensorRangeV = useSensorRangeValue(block);
//	double sensorRangeV = sensorRangeValue(block);

//	bool useSensorAngleV = useSensorAngleValue(block);
//	double sensorAngle = sensorAngleValue(block);

    double scaleDesiredForceV = 1.0;
    if ( inverseDesiredSteeringForceValue ( block ) ) scaleDesiredForceV = -1.0;

    double desiredSpeedV = desiredSpeedValue ( block );
    double maximumForceV = maximumForceValue ( block );
    double magValue	= block.inputValue ( mMagnitude ).asDouble();

    double toleranceV = toleranceValue ( block );

    int posSize = positions.length();

    MVector desiredVelocityV ( 0.0,0.0,0.0 );
    MVector unitVelocity;

    // get surfaces


    MArrayDataHandle inputMeshAD = block.inputArrayValue ( inputMesh, &stat );
    if ( !stat )
    {
        stat.perror ( "ERROR getting inputMeshData" );
        return;
    }

    MDataHandle elementHandle;
    if ( !stat )
    {
        MGlobal::displayError ( "bbSteeringDesire::compute inputMeshArrayData" );
    }

    int numMesh = inputMeshAD.elementCount();
    inputMeshAD.jumpToElement ( 0 );


    MPointArray intersectionPoint;
    MIntArray	polyID;
    double distance;
    double probeLengthV = probeLengthValue ( block );


    short inputSelectionV = inputSelectionValue ( block );

//	MString temp = "\ndata\n";


    switch ( inputSelectionV )
    {
    case IS_ALL:
    {
        MDoubleArray shortestDistance ( posSize,1.7E+308 );
        MIntArray shortestMesh ( posSize,0 );
        MIntArray shortestPolyID ( posSize,0 );
        MVector polyNormal;

        // get shortest interesection values;

        for ( int i=0; i<numMesh; i++ )
        {
            elementHandle = inputMeshAD.inputValue ( &stat );
            MObject mesh = elementHandle.asMeshTransformed();
            MFnMesh meshFn ( mesh, &stat );

            if ( !stat )
            {
                stat.perror ( "ERROR creating mesh function set" );
                return;
            }

            for ( int e=0; e < posSize; e++ )
            {
                if ( meshFn.intersect ( positions[e],velocities[e],intersectionPoint,toleranceV,MSpace::kObject,&polyID ) )
                {
                    distance = MVector ( positions[e] - intersectionPoint[0] ).length();

                    if ( distance < shortestDistance[e] )
                    {
                        shortestDistance[e] = distance;
                        shortestPolyID[e] = polyID[0];
                        shortestMesh[e] = i;
                    }
                }
            }

            inputMeshAD.next();
        }

        /*		for (int ek=0; ek < posSize; ek++)
        		{
        			temp += "e: ";
        			temp += ek;
        			temp += " sDistance: ";
        			temp += shortestDistance[ek];
        			temp += " sMesh: ";
        			temp += shortestMesh[ek];
        			temp += " sPoly: ";
        			temp += shortestPolyID[ek];
        			temp += "\n";
        		}

        		MGlobal::displayInfo(temp);
        */
        // steer

        for ( int e=0; e < posSize; e++ )
        {
            if ( shortestDistance[e] <= probeLengthV )
            {
                inputMeshAD.jumpToElement ( shortestMesh[e] );
                elementHandle = inputMeshAD.inputValue ( &stat );
                MObject mesh = elementHandle.asMeshTransformed();
                MFnMesh meshFn ( mesh, &stat );
                if ( !stat )
                {
                    stat.perror ( "ERROR creating surface function set" );
                    return;
                }

                // calculate steering vector
                meshFn.getPolygonNormal ( shortestPolyID[e],desiredVelocityV );

                seekSteering ( desiredVelocityV,velocities[e],desiredSpeedV,scaleDesiredForceV,maximumForceV, magValue );
                outputForce.append ( desiredVelocityV );
            }
            else
                outputForce.append ( MVector::zero );

        }

    }
    break;

    case IS_INDEX:

    {
        stat = inputMeshAD.jumpToElement ( inputIndexValue ( block ) );
        if ( stat==MS::kSuccess )
        {
            elementHandle = inputMeshAD.inputValue ( &stat );
            MObject mesh = elementHandle.asMeshTransformed();
            MFnMesh meshFn ( mesh, &stat );

            if ( !stat )
            {
                stat.perror ( "ERROR creating mesh function set" );
                return;
            }

            for ( int i=0; i < posSize; i ++ )
            {
                // intersection test
                if ( meshFn.intersect ( positions[i],velocities[i],intersectionPoint,toleranceV,MSpace::kObject,&polyID ) )
                {
                    // point of intersection critical?
                    distance = MVector ( positions[i] - intersectionPoint[0] ).length();

                    if ( distance <= probeLengthV )
                    {
                        // calculate steering vector as normal
                        meshFn.getPolygonNormal ( polyID[0],desiredVelocityV );
                        seekSteering ( desiredVelocityV,velocities[i],desiredSpeedV,scaleDesiredForceV,maximumForceV, magValue );
                        outputForce.append ( desiredVelocityV );
                    }
                    else
                        outputForce.append ( MVector::zero );

                }
                else
                    outputForce.append ( MVector::zero );

            }
        }

    }
    break;
    }
}

/**************************************************************************************/

void bbSteeringDesire::sdBugWander ( MDataBlock& block,
                                     const MVectorArray &positions,
                                     const MVectorArray &velocities,
                                     MVectorArray &outputForce )
{
    MStatus stat;

    // points and velocities should have the same length. If not return.
    if ( positions.length() != velocities.length() )	return;

    // clear the output force array.
    outputForce.clear();

    // get field parameters.
    double scaleDesiredForceV = 1.0;
    if ( inverseDesiredSteeringForceValue ( block ) )
        scaleDesiredForceV = -1.0;

    double maximumForceV = maximumForceValue ( block );
    //double bugRadiusV = bugRadiusValue ( block );
    double magValue	= block.inputValue ( mMagnitude ).asDouble();
	double minimumForceV = minimumForceValue( block );

    bool useRandomV = useRandomValue ( block );

    MVector wMinRandV;
    wanderMinimumRandomVectorValue ( block, wMinRandV );
    MVector wMaxRandV;
    wanderMaximumRandomVectorValue ( block, wMaxRandV );
    MVector wSphereOffsetV;
    wanderSphereOffsetValue ( block, wSphereOffsetV );

    double wSphereRadiusV = wanderSphereRadiusValue ( block );

    double minSpeedT = wanderMinimumSpeedValue ( block );
    double maxSpeedT = wanderMaximumSpeedValue ( block );

    double minSpeed = min ( minSpeedT,maxSpeedT );
    double maxSpeed = max ( minSpeedT,maxSpeedT );

    double speedRange = maxSpeed - minSpeed;
    double distanceRange = 2*wSphereRadiusV;

    double speed = 0;


    short chooseSpeedV = chooseSpeedValue ( block );
    double desiredSpeedV = desiredSpeedValue ( block );
    MVector desiredVelocityV;
    MVectorArray lastVectorV;

    // get last offset values
    int posSize = positions.length();

    // use random wandering?
    if ( useRandomV )
    {
        // get last offset values

        MDataHandle hLastVectorV = block.inputValue ( lastVector, &stat );
        MObject dLastVectorV = hLastVectorV.data();
        lastVectorV = MFnVectorArrayData ( dLastVectorV ).array ( &stat );

        int lastVSize = lastVectorV.length();

        // initialize seed, lastVectorV etc

        MTime currentTimeV, initSeedFrameV;
        MDataHandle hTime = block.inputValue ( currentTime, &stat );
        currentTimeV = hTime.asTime();
        hTime = block.inputValue ( initSeedFrame, &stat );
        initSeedFrameV = hTime.asTime();

        if ( currentTimeV == initSeedFrameV )
        {
            // reinit seed
            srand ( seedValue ( block ) );

            // update lastV
            lastVectorV.clear();

            MVector initOffset = wSphereOffsetV;
            initOffset.normalize();
            initOffset *= wSphereRadiusV;

            for ( int i=0; i<posSize; i++ )
                lastVectorV.append ( initOffset );

        }
        else
        {
            if ( lastVSize < posSize )
            {
                MVector initOffset = wSphereOffsetV;
                initOffset.normalize();
                initOffset *= wSphereRadiusV;

                for ( int e=lastVSize-1; e<posSize; e++ )
                {
                    lastVectorV.append ( initOffset );
                }
            }
        }

        MVector randomV;

        // initialize reusable random values

        MVector randMinV, randMaxV, randRangeV;

        for ( int r=0; r<3; r++ )
        {
            wMinRandV[r] = fabs ( wMinRandV[r] );
            wMaxRandV[r] = fabs ( wMaxRandV[r] );

            randMinV[r] = min ( wMinRandV[r],wMaxRandV[r] );
            randMaxV[r] = max ( wMinRandV[r],wMaxRandV[r] );
        }

        randRangeV = randMaxV-randMinV;

        // bug wander steering

        for ( int i=0; i < posSize; i ++ )
        {
            // generate randomOffsetV
            for ( int r=0; r<3; r++ )
            {
                if ( randRangeV[r] >0 )
                {
                    randomV[r] = ( ( randRangeV[r] * 2 * rand() ) / RAND_MAX ) - randRangeV[r];

                    if ( randomV[r] > 0 )
                        randomV[r] += randMinV[r];
                    else
                        randomV[r] -= randMinV[r];
                }
                else
                {
                    randomV[r] = wMinRandV[r];

                    if ( fmod ( rand(),2.0 ) ==0.0 )
                        randomV[r] *= -1;
                }
            }

            // add to last offset position
            randomV += lastVectorV[i];

            // reproject to sphere
            randomV.normalize();
            randomV *= wSphereRadiusV;

            // store in lastVector
            lastVectorV[i] = randomV;

            // add sphere offset

            randomV +=wSphereOffsetV;

            // local space to world space transformation

            //// find vectors x y z that describe local coordinate system

            MVector x = velocities[i];
            x.normalize();
            MVector y = x ^ MVector::yAxis;
            y.normalize();
            MVector z = y ^ x;
            z.normalize();

            //// transform to global coord system

            MQuaternion xQu ( x,MVector::xAxis );
            MQuaternion yQu ( y,MVector::yAxis );
            MQuaternion zQu ( z,MVector::yAxis );

            MQuaternion rotQu = zQu*yQu*xQu;

            MTransformationMatrix transformM;
            transformM = rotQu.asMatrix();
            transformM.setTranslation ( positions[i],MSpace::kTransform );

            desiredVelocityV = randomV*transformM.asMatrixInverse();

            // determine speed
            switch ( chooseSpeedV )
            {
            case CS_DESIREDSPEED :
                speed = desiredSpeedV;
                break;

            case CS_SPEEDRANGE:
                double currDistance = desiredVelocityV.length() - wSphereOffsetV.length();
                speed = ( ( speedRange * currDistance ) / distanceRange ) + minSpeed;
                break;
            }

            // seek new pos
            if (velocities[i].length() > minimumForceV)
			{
				seekSteering ( desiredVelocityV,velocities[i],speed,scaleDesiredForceV,maximumForceV, magValue );
			}
			else
			{
				desiredVelocityV = MVector::zero;
			}
            outputForce.append ( desiredVelocityV );
        }
    }
    else // no random
    {
        for ( int i=0; i < posSize; i ++ )
        {
			if (velocities[i].length() > minimumForceV)
			{
				desiredVelocityV = positions[i] + wSphereOffsetV;
				seekSteering ( desiredVelocityV,velocities[i],desiredSpeedV,scaleDesiredForceV,maximumForceV, magValue );
			}
			else
			{
				desiredVelocityV = MVector::zero;
			}

			outputForce.append ( desiredVelocityV );
        }
    }


    if ( useRandomV )
    {
        // store last vector data
        MDataHandle hOut = block.outputValue ( lastVector, &stat );
        MFnVectorArrayData fnLastVectorV;

        MObject dOutputLastVectorV = fnLastVectorV.create ( lastVectorV, &stat );

        // update data block with new output force data.
        hOut.set ( dOutputLastVectorV );
    }
}

/**************************************************************************************/
void fillSumArray ( MIntArray & sumA, int size )
{
    sumA.clear();
    if ( size>0 )
    {
        sumA.append ( 1 );
        if ( size > 1 )
        {
            for ( int i = 2; i < size; i++ )
            {
                sumA.append ( sumA[i-2]+i );
            }
        }
    }
}

/**************************************************************************************/






/*void bbSteeringDesire::sdBugWander( MDataBlock& block,
								const MVectorArray &positions,
								const MVectorArray &velocities,
								MVectorArray &outputForce )
{
	MStatus stat;

	// points and velocities should have the same length. If not return.
	if( positions.length() != velocities.length() )
		return;

	// clear the output force array.
	outputForce.clear();

	// get field parameters.
	double scaleDesiredForceV = 1.0;
	if (inverseDesiredSteeringForceValue(block))
		scaleDesiredForceV = -1.0;

	double maximumForceV = maximumForceValue(block);
	double bugRadiusV = bugRadiusValue(block);

	MVector wMinRandV;	wanderMinimumRandomVectorValue( block, wMinRandV);
	MVector wMaxRandV;  wanderMaximumRandomVectorValue( block, wMaxRandV);
	MVector wSphereOffsetV; wanderSphereOffsetValue(block, wSphereOffsetV);
	double wSphereRadiusV = wanderSphereRadiusValue(block);

	double minSpeedT = wanderMinimumSpeedValue(block);
	double maxSpeedT = wanderMaximumSpeedValue(block);

	double minSpeed = min(minSpeedT,maxSpeedT);
	double maxSpeed = max(minSpeedT,maxSpeedT);

	double speedRange = maxSpeed - minSpeed;
	double distanceRange = 2*wSphereRadiusV;

	double speed;


	short chooseSpeedV = chooseSpeedValue(block);

	double desiredSpeedV = desiredSpeedValue(block);


	// get last offset values
	MVectorArray lastVectorV;

	MDataHandle hLastVectorV = block.inputValue(lastVector, &stat);
	MObject dLastVectorV = hLastVectorV.data();
	lastVectorV = MFnVectorArrayData(dLastVectorV).array(&stat);

	int posSize = positions.length();
	int lastVSize = lastVectorV.length();

	MString temp, temp1, temp2, temp3;

	// initialize seed, lastVectorV etc

	MTime currentTimeV, initSeedFrameV;
	MDataHandle hTime = block.inputValue(currentTime, &stat);
	currentTimeV = hTime.asTime();
	hTime = block.inputValue(initSeedFrame, &stat);
	initSeedFrameV = hTime.asTime();

//	temp = "ct: ";
//	temp += currentTimeV.value();
//	temp +=" isf: ";
//	temp += initSeedFrameV.value();
//	MGlobal::displayInfo(temp);

	if (currentTimeV == initSeedFrameV)
	{
//		MGlobal::displayInfo("seed reinit");
		// reinit seed
		srand(seedValue(block));

		// update lastV
		lastVectorV.clear();

		MVector initOffset = wSphereOffsetV;
		initOffset.normalize();
		initOffset *= wSphereRadiusV;

		for (int i=0; i<posSize; i++)
			lastVectorV.append(initOffset);
	}
	else
	{
		if (lastVSize < posSize)
		{
//				MGlobal::displayInfo("size reinit");
			MVector initOffset = wSphereOffsetV;
			initOffset.normalize();
			initOffset *= wSphereRadiusV;

			for (int e=lastVSize-1; e<posSize; e++)
			{
				lastVectorV.append(initOffset);
			}
		}
	}
	// bug wander steering

	MVector desiredVelocityV;
	MVector randomV;
//	MTransformationMatrix transformM;
//	MMatrix transM;
//	transM = transM.setToIdentity();

//	int randV;
	double randMin, randMax, randRange;

//	MString temp, temp1, temp2, temp3;
//	temp ="\nposSize: ";
//	temp += posSize;
//	temp +="\nlastVSize: ";
//	temp += lastVSize;



//	MGlobal::displayError(temp);
//	temp ="";

	for (int i=0; i < posSize; i ++ )
	{
		temp +="\n\nbug: "; temp +=i;

		// generate randomOffsetV
		for (int r=0; r<3;r++)
		{
			wMinRandV[r] = fabs(wMinRandV[r]);
			wMaxRandV[r] = fabs(wMaxRandV[r]);

			randMin = min(wMinRandV[r],wMaxRandV[r]);
			randMax = max(wMinRandV[r],wMaxRandV[r]);
			randRange = randMax-randMin;

		//	temp = temp+ "\nrMin: " + randMin;
		//	temp = temp+"\nrMax: " + randMax;
		//	temp = temp+"\nrRan: " + randRange;
		//	temp +="\nrVal: ";temp +=randV;

			if (randRange >0)
			{
				randomV[r] = ((randRange * 2 * rand()) / RAND_MAX ) - randRange;

				if (randomV[r] > 0 )
					randomV[r] += randMin;
				else
					randomV[r] -= randMin;
			}
			else
			{
				randomV[r] = wMinRandV[r];

				if (fmod(rand(),2.0)==0.0)
				{
					randomV[r] *= -1;
				}
			}

		//	temp = temp+"\nrVec: " +	randomV[r];
		}

//		temp1.set(randomV.x, 5);
//		temp2.set(randomV.y, 5);
//		temp3.set(randomV.z, 5);
//		temp = temp +  "\nrandomV: "+temp1+" | "+temp2+" | "+temp3;


//		temp = temp + "\nlastV  : " + lastVectorV[i].x + " | " + lastVectorV[i].y + " | "+lastVectorV[i].z;

		// add to last offset position
		randomV += lastVectorV[i];


//		temp = temp +"\nrV+offs: " + randomV.x + " | " + randomV.y + " | "+randomV.z;
//		temp +="\nlength: "; temp += randomV.length();

		// reproject to sphere
		randomV.normalize();
		randomV *= wSphereRadiusV;

//		temp = temp +"\nreproj: " + randomV.x + " | " + randomV.y + " | "+randomV.z;
//		temp +="\nlength: "; temp += randomV.length();

		// store in lastVector
		lastVectorV[i] = randomV;

		// add sphere offset

		randomV +=wSphereOffsetV;

		// local space to world space transformation

		//// find vectors w u v that describe local coordinate system

		MVector x = velocities[i];
		x.normalize();
		MVector y = x ^ MVector::yAxis;
		y.normalize();
		MVector z = y ^ x;
		z.normalize();

//		#define tempAddVector(_name,_vect)\
//				temp = temp +"\n"+ #_name +": " + _vect##.x + " | " + _vect##.y + " | "+ _vect##.z;

//		tempAddVector(rndSpO,randomV);

//		temp +="\nlocal coord";
//		tempAddVector(locW,x);
//		tempAddVector(locU,y);
//		tempAddVector(locV,z);
//
		//MEulerRotation euRot;

		//euRot.x = MVector::xAxis.angle(x);
		//euRot.y = MVector::yAxis.angle(y);
		//euRot.z = MVector::zAxis.angle(z);

		MQuaternion xQu(x,MVector::xAxis);
		MQuaternion yQu(y,MVector::yAxis);
		MQuaternion zQu(z,MVector::yAxis);

		MQuaternion rotQu = zQu*yQu*xQu;

//		euRot = rotQu.asEulerRotation();
//		tempAddVector(euRotR,euRot);
//		tempAddVector(trans,positions[i]);
//		temp = temp +"\nveloci: " + velocities[i].x + " | " + velocities[i].y + " | "+velocities[i].z;

		MTransformationMatrix transformM;
		transformM = rotQu.asMatrix();
		transformM.setTranslation(positions[i],MSpace::kTransform);
		//transformM=transformM.rotateTo(euRot);
		//transformM=transformM.rotateTo(rotQu);

		desiredVelocityV = randomV*transformM.asMatrixInverse();

//		temp =temp + "\ndesVelo: " + desiredVelocityV.x + " | " + desiredVelocityV.y + " | "+desiredVelocityV.z;

		// determine speed

		switch (chooseSpeedV)
		{
			case CS_DESIREDSPEED :
					speed = desiredSpeedV;
				break;

			case CS_SPEEDRANGE:
					double currDistance = desiredVelocityV.length() - wSphereOffsetV.length();
					speed = ((speedRange * currDistance) / distanceRange) + minSpeed;
				break;
		}

		// seek new pos

		seekSteering(desiredVelocityV,velocities[i],speed,scaleDesiredForceV,maximumForceV);
		outputForce.append( desiredVelocityV );
	}

//	MGlobal::displayInfo(temp);

	// store last vector data

	MDataHandle hOut = block.outputValue( lastVector, &stat);
	MFnVectorArrayData fnLastVectorV;

	MObject dOutputLastVectorV = fnLastVectorV.create( lastVectorV, &stat );

	// update data block with new output force data.
	hOut.set( dOutputLastVectorV );

}
*/
