//
// Copyright (C) 2002 Carsten Kolve
//
// File: bbSteeringDesireNode.h
//
// Dependency Graph Node: bbSteeringDesire
//
// Recompiled for Maya 2012 by Shawn Lipowski
//

#pragma once
#ifndef BBSTEERINGDESIRENODE_H
#define BBSTEERINGDESIRENODE_H

#include <iostream>

#include <maya/MVector.h>
#include <maya/MObject.h>
#include <maya/MPlug.h>
#include <maya/MDataBlock.h>
#include <maya/MPxFieldNode.h>

#define McheckErr(stat, msg)		\
	if ( MS::kSuccess != stat )		\
	{								\
		cerr << msg;				\
		return MS::kFailure;		\
	}

#ifdef className
#undef className
#endif

#define className bbSteeringDesire

class bbSteeringDesire : public MPxFieldNode
{
public:
    bbSteeringDesire();
    virtual	~bbSteeringDesire();

    static  void *creator();
    static  MStatus		initialize();
    virtual void  postConstructor();

    virtual MStatus		compute ( const MPlug& plug, MDataBlock& block );


    virtual MStatus getForceAtPoint ( const MVectorArray& point,
                                      const MVectorArray& velocity,
                                      const MDoubleArray& mass,
                                      MVectorArray& force,
                                      double deltaTime );

    // attributes.

#define declareVector(_attr)\
			static MObject	_attr;\
			static MObject	_attr##X;\
			static MObject	_attr##Y;\
			static MObject	_attr##Z;\

    // combination attributes

    static  MObject	cPriority;			// priority value for combination
    static  MObject	cWeight;			// weight value for combination


    // view attributes

    static  MObject	useSensorRange;
    static  MObject	sensorRange;		// radius in which bug can sense
    static  MObject	useSensorAngle;
    static  MObject	sensorAngle;		// pitch opening angle

    // COMMON

    static  MObject	steeringDesire;		// enum steering desire
    static  MObject desiredSpeed;
	static  MObject minimumForce;
    static  MObject maximumForce;
    static  MObject bugRadius;
    static  MObject lastVector;		// storage for vector data from previous cycles



    static  MObject inverseDesiredSteeringForce;

    // target attributes

    static  MObject targetType;
    static  MObject targetRadius;
    static  MObject	stoppingRange;		// stopping range for arrival steering

    static  MObject inputPoint;
    static  MObject inputCurve;
    static  MObject inputSurface;
    static  MObject inputMesh;

    static  MObject inputSelection;
    static  MObject inputIndex;

    static  MObject seekTargets;
    static  MObject tolerance;
    static  MObject subTargets;
    static  MObject probeLength;
    static  MObject shadowRange;

    declareVector ( target );				// target vector
    declareVector ( lastTarget );

    // bug attributes

    declareVector ( direction );

    // wander

    static  MObject wanderSphereRadius;

    declareVector ( wanderSphereOffset );
    declareVector ( wanderMinimumRandomVector );
    declareVector ( wanderMaximumRandomVector );

    static  MObject chooseSpeed;
    static  MObject wanderMinimumSpeed;
    static  MObject wanderMaximumSpeed;

    static  MObject currentTime;
    static  MObject initSeedFrame;
    static  MObject seed;

    static  MObject useRandom;

    // neighbor attr

    static  MObject bugDistance;

    static	MTypeId	id;

private:

    void	getTargetsFromPoint ( MDataBlock& block,MVectorArray &target );
    void	getTargetsFromCurve ( MDataBlock& block,int posSize,MVectorArray &target );
    void	getTargetsFromSurface ( MDataBlock& block,int posSize,MVectorArray &target );
    void	getTargetsFromMesh ( MDataBlock& block,int posSize,MVectorArray &target );

    void	sdSeekTargets ( MDataBlock& block, const MVectorArray &positions, const MVectorArray &velocities, const MVectorArray &target, MVectorArray &outputForce );
    void	sdMothSeekTargets ( MDataBlock& block, const MVectorArray &positions, const MVectorArray &velocities, const MVectorArray &target, MVectorArray &outputForce );
    void	sdArrivalTargets ( MDataBlock& block, const MVectorArray &positions, const MVectorArray &velocities, const MVectorArray &target, MVectorArray &outputForce );
    void	sdPursuitTargets ( MDataBlock& block, const MVectorArray &positions, const MVectorArray &velocities, const MVectorArray &target, MVectorArray &outputForce );
    void	sdShadowTargets ( MDataBlock& block, const MVectorArray &positions, const MVectorArray &velocities, const MVectorArray &target, const MTime &deltaTime, MVectorArray &outputForce );


    void	sdNeighborAlignment ( MDataBlock& block, const MVectorArray &points, const MVectorArray &velocities, MVectorArray &outputForce );
    void	sdNeighborCohesion ( MDataBlock& block, const MVectorArray &points, const MVectorArray &velocities, MVectorArray &outputForce );
    void	sdNeighborSeparation ( MDataBlock& block, const MVectorArray &points, const MVectorArray &velocities, MVectorArray &outputForce );
    void	sdNeighborUnalignedCollisionAvoidance ( MDataBlock& block, const MVectorArray &points, const MVectorArray &velocities, MVectorArray &outputForce );
    void	sdNeighborKeepDistance ( MDataBlock& block, const MVectorArray &points, const MVectorArray &velocities, MVectorArray &outputForce );
    void	sdNeighborOportunism ( MDataBlock& block, const MVectorArray &points, const MVectorArray &velocities, MVectorArray &outputForce );

    void	sdBugHeadDirection ( MDataBlock& block, const MVectorArray &points, const MVectorArray &velocities, MVectorArray &outputForce );
    void	sdBugWander ( MDataBlock& block, const MVectorArray &points, const MVectorArray &velocities, MVectorArray &outputForce );

    void	sdPursuit ( MDataBlock& block,
                        const MVectorArray &points,
                        const MVectorArray &velocities,
                        MVectorArray &outputForce );

    void	sdCurveFollowing ( MDataBlock& block, const MVectorArray &points, const MVectorArray &velocities, MVectorArray &outputForce );

    void	sdSurfaceFollowing ( MDataBlock& block, const MVectorArray &points, const MVectorArray &velocities, MVectorArray &outputForce );
    void	sdSurfaceObstacleAvoidance ( MDataBlock& block, const MVectorArray &points, const MVectorArray &velocities, MVectorArray &outputForce );

    void	sdMeshFollowing ( MDataBlock& block, const MVectorArray &points, const MVectorArray &velocities, MVectorArray &outputForce );
    void    sdMeshObstacleAvoidance ( MDataBlock& block, const MVectorArray &points, const MVectorArray &velocities, MVectorArray &outputForce );

    // methods to get attribute value of local attributes.
    //
    short	steeringDesireValue ( MDataBlock& block );
    short	targetTypeValue ( MDataBlock& block );
    short	subTargetsValue ( MDataBlock& block );
    short	inputSelectionValue ( MDataBlock& block );
    short	inputIndexValue ( MDataBlock& block );
    short   seedValue ( MDataBlock& block );
    short   chooseSpeedValue ( MDataBlock& block );

    double	sensorRangeValue ( MDataBlock& block );
    double	sensorAngleValue ( MDataBlock& block );
    double	scaleDesiredForceValue ( MDataBlock& block );
    double	stoppingRangeValue ( MDataBlock& block );
    double  desiredSpeedValue ( MDataBlock& block );
	double  minimumForceValue ( MDataBlock& block );
    double  maximumForceValue ( MDataBlock& block );
    double  targetRadiusValue ( MDataBlock& block );
    double  toleranceValue ( MDataBlock& block );
    double  bugRadiusValue ( MDataBlock& block );
    double  wanderSphereRadiusValue ( MDataBlock& block );
    double  wanderMinimumSpeedValue ( MDataBlock& block );
    double  wanderMaximumSpeedValue ( MDataBlock& block );
    double	shadowRangeValue ( MDataBlock& block );
    double  probeLengthValue ( MDataBlock& block );
    double  bugDistanceValue ( MDataBlock& block );
    bool	useSensorRangeValue ( MDataBlock& block );
    bool	useSensorAngleValue ( MDataBlock& block );
    bool    inverseDesiredSteeringForceValue ( MDataBlock& block );
    bool    useRandomValue ( MDataBlock& block );

    MStatus lastTargetValue ( MDataBlock& block, MVector &vector );
    MStatus	directionValue ( MDataBlock& block, MVector &vector );
    MStatus	wanderMinimumRandomVectorValue ( MDataBlock& block, MVector &vector );
    MStatus	wanderMaximumRandomVectorValue ( MDataBlock& block, MVector &vector );
    MStatus	wanderSphereOffsetValue ( MDataBlock& block, MVector &vector );


};

// inlines

inline short bbSteeringDesire::steeringDesireValue ( MDataBlock& block )
{
    MStatus status;
    MDataHandle hValue = block.inputValue ( steeringDesire, &status );
    short value = 0;
    if ( status == MS::kSuccess )
        value = hValue.asShort();
    return ( value );
}

inline short bbSteeringDesire::targetTypeValue ( MDataBlock& block )
{
    MStatus status;
    MDataHandle hValue = block.inputValue ( targetType, &status );
    short value = 0;
    if ( status == MS::kSuccess )
        value = hValue.asShort();
    return ( value );
}

inline short bbSteeringDesire::subTargetsValue ( MDataBlock& block )
{
    MStatus status;
    MDataHandle hValue = block.inputValue ( subTargets, &status );
    short value = 0;
    if ( status == MS::kSuccess )
        value = hValue.asShort();
    return ( value );
}

inline short bbSteeringDesire::inputSelectionValue ( MDataBlock& block )
{
    MStatus status;
    MDataHandle hValue = block.inputValue ( inputSelection, &status );
    short value = 0;
    if ( status == MS::kSuccess )
        value = hValue.asShort();
    return ( value );
}

inline short bbSteeringDesire::inputIndexValue ( MDataBlock& block )
{
    MStatus status;
    MDataHandle hValue = block.inputValue ( inputIndex, &status );
    short value = 0;
    if ( status == MS::kSuccess )
        value = hValue.asShort();
    return ( value );
}

inline short bbSteeringDesire::seedValue ( MDataBlock& block )
{
    MStatus status;
    MDataHandle hValue = block.inputValue ( seed, &status );
    short value = 0;
    if ( status == MS::kSuccess )
        value = hValue.asShort();
    return ( value );
}

inline short bbSteeringDesire::chooseSpeedValue ( MDataBlock& block )
{
    MStatus status;
    MDataHandle hValue = block.inputValue ( chooseSpeed, &status );
    short value = 0;
    if ( status == MS::kSuccess )
        value = hValue.asShort();
    return ( value );
}




// double inlines

inline double bbSteeringDesire::sensorRangeValue ( MDataBlock& block )
{
    MStatus status;
    MDataHandle hValue = block.inputValue ( sensorRange, &status );
    double value = 0.0;
    if ( status == MS::kSuccess )
        value = hValue.asDouble();
    return ( value );
}

inline double bbSteeringDesire::sensorAngleValue ( MDataBlock& block )
{
    MStatus status;
    MDataHandle hValue = block.inputValue ( sensorAngle, &status );
    double value = 0.0;
    if ( status == MS::kSuccess )
        value = hValue.asDouble();
    return ( value );
}

inline double bbSteeringDesire::stoppingRangeValue ( MDataBlock& block )
{
    MStatus status;
    MDataHandle hValue = block.inputValue ( stoppingRange, &status );
    double value = 0.0;
    if ( status == MS::kSuccess )
        value = hValue.asDouble();
    return ( value );
}

inline double bbSteeringDesire::desiredSpeedValue ( MDataBlock& block )
{
    MStatus status;
    MDataHandle hValue = block.inputValue ( desiredSpeed, &status );
    double value = 0.0;
    if ( status == MS::kSuccess )
        value = hValue.asDouble();
    return ( value );
}

inline double bbSteeringDesire::minimumForceValue ( MDataBlock& block )
{
    MStatus status;
    MDataHandle hValue = block.inputValue ( minimumForce, &status );
    double value = 0.0;
    if ( status == MS::kSuccess )
        value = hValue.asDouble();
    return ( value );
}

inline double bbSteeringDesire::maximumForceValue ( MDataBlock& block )
{
    MStatus status;
    MDataHandle hValue = block.inputValue ( maximumForce, &status );
    double value = 0.0;
    if ( status == MS::kSuccess )
        value = hValue.asDouble();
    return ( value );
}

inline double bbSteeringDesire::targetRadiusValue ( MDataBlock& block )
{
    MStatus status;
    MDataHandle hValue = block.inputValue ( targetRadius, &status );
    double value = 0.0;
    if ( status == MS::kSuccess )
        value = hValue.asDouble();
    return ( value );
}

inline double bbSteeringDesire::toleranceValue ( MDataBlock& block )
{
    MStatus status;
    MDataHandle hValue = block.inputValue ( tolerance, &status );
    double value = 0.0;
    if ( status == MS::kSuccess )
        value = hValue.asDouble();
    return ( value );
}

inline double bbSteeringDesire::bugRadiusValue ( MDataBlock& block )
{
    MStatus status;
    MDataHandle hValue = block.inputValue ( bugRadius, &status );
    double value = 0.0;
    if ( status == MS::kSuccess )
        value = hValue.asDouble();
    return ( value );
}


inline double bbSteeringDesire::wanderSphereRadiusValue ( MDataBlock& block )
{
    MStatus status;
    MDataHandle hValue = block.inputValue ( wanderSphereRadius, &status );
    double value = 0.0;
    if ( status == MS::kSuccess )
        value = hValue.asDouble();
    return ( value );
}

inline double bbSteeringDesire::wanderMinimumSpeedValue ( MDataBlock& block )
{
    MStatus status;
    MDataHandle hValue = block.inputValue ( wanderMinimumSpeed, &status );
    double value = 0.0;
    if ( status == MS::kSuccess )
        value = hValue.asDouble();
    return ( value );
}

inline double bbSteeringDesire::wanderMaximumSpeedValue ( MDataBlock& block )
{
    MStatus status;
    MDataHandle hValue = block.inputValue ( wanderMaximumSpeed, &status );
    double value = 0.0;
    if ( status == MS::kSuccess )
        value = hValue.asDouble();
    return ( value );
}

inline double bbSteeringDesire::probeLengthValue ( MDataBlock& block )
{
    MStatus status;
    MDataHandle hValue = block.inputValue ( probeLength, &status );
    double value = 0.0;
    if ( status == MS::kSuccess )
        value = hValue.asDouble();
    return ( value );
}

inline double bbSteeringDesire::shadowRangeValue ( MDataBlock& block )
{
    MStatus status;
    MDataHandle hValue = block.inputValue ( shadowRange, &status );
    double value = 0.0;
    if ( status == MS::kSuccess )
        value = hValue.asDouble();
    return ( value );
}

inline double bbSteeringDesire::bugDistanceValue ( MDataBlock& block )
{
    MStatus status;
    MDataHandle hValue = block.inputValue ( bugDistance, &status );
    double value = 0.0;
    if ( status == MS::kSuccess )
        value = hValue.asDouble();
    return ( value );
}


// bool inlines

inline bool bbSteeringDesire::useSensorRangeValue ( MDataBlock& block )
{
    MStatus status;
    MDataHandle hValue = block.inputValue ( useSensorRange , &status );
    bool value = false;
    if ( status == MS::kSuccess )
        value = hValue.asBool();
    return ( value );
}

inline bool bbSteeringDesire::useSensorAngleValue ( MDataBlock& block )
{
    MStatus status;
    MDataHandle hValue = block.inputValue ( useSensorAngle , &status );
    bool value = false;
    if ( status == MS::kSuccess )
        value = hValue.asBool();
    return ( value );
}

inline bool bbSteeringDesire::inverseDesiredSteeringForceValue ( MDataBlock& block )
{
    MStatus status;
    MDataHandle hValue = block.inputValue ( inverseDesiredSteeringForce , &status );
    bool value = false;
    if ( status == MS::kSuccess )
        value = hValue.asBool();
    return ( value );
}

inline bool bbSteeringDesire::useRandomValue ( MDataBlock& block )
{
    MStatus status;
    MDataHandle hValue = block.inputValue ( useRandom, &status );
    bool value = false;
    if ( status == MS::kSuccess )
        value = hValue.asBool();
    return ( value );
}

// vector inlines


inline MStatus bbSteeringDesire::lastTargetValue ( MDataBlock& block,MVector &vector )
{
    MStatus status;
    MDataHandle hValueX = block.inputValue ( lastTargetX, &status );
    MDataHandle hValueY = block.inputValue ( lastTargetY, &status );
    MDataHandle hValueZ = block.inputValue ( lastTargetZ, &status );
    if ( status == MS::kSuccess )
    {
        vector[0] = hValueX.asDouble();
        vector[1] = hValueY.asDouble();
        vector[2] = hValueZ.asDouble();
    }
    return ( status );
}

inline MStatus bbSteeringDesire::directionValue ( MDataBlock& block,MVector &vector )
{
    MStatus status;
    MDataHandle hValueX = block.inputValue ( directionX, &status );
    MDataHandle hValueY = block.inputValue ( directionY, &status );
    MDataHandle hValueZ = block.inputValue ( directionZ, &status );
    if ( status == MS::kSuccess )
    {
        vector[0] = hValueX.asDouble();
        vector[1] = hValueY.asDouble();
        vector[2] = hValueZ.asDouble();
    }
    return ( status );
}

inline MStatus bbSteeringDesire::wanderMinimumRandomVectorValue ( MDataBlock& block,MVector &vector )
{
    MStatus status;
    MDataHandle hValueX = block.inputValue ( wanderMinimumRandomVectorX, &status );
    MDataHandle hValueY = block.inputValue ( wanderMinimumRandomVectorY, &status );
    MDataHandle hValueZ = block.inputValue ( wanderMinimumRandomVectorZ, &status );
    if ( status == MS::kSuccess )
    {
        vector[0] = hValueX.asDouble();
        vector[1] = hValueY.asDouble();
        vector[2] = hValueZ.asDouble();
    }
    return ( status );
}

inline MStatus bbSteeringDesire::wanderMaximumRandomVectorValue ( MDataBlock& block,MVector &vector )
{
    MStatus status;
    MDataHandle hValueX = block.inputValue ( wanderMaximumRandomVectorX, &status );
    MDataHandle hValueY = block.inputValue ( wanderMaximumRandomVectorY, &status );
    MDataHandle hValueZ = block.inputValue ( wanderMaximumRandomVectorZ, &status );
    if ( status == MS::kSuccess )
    {
        vector[0] = hValueX.asDouble();
        vector[1] = hValueY.asDouble();
        vector[2] = hValueZ.asDouble();
    }
    return ( status );
}

inline MStatus bbSteeringDesire::wanderSphereOffsetValue ( MDataBlock& block,MVector &vector )
{
    MStatus status;
    MDataHandle hValueX = block.inputValue ( wanderSphereOffsetX, &status );
    MDataHandle hValueY = block.inputValue ( wanderSphereOffsetY, &status );
    MDataHandle hValueZ = block.inputValue ( wanderSphereOffsetZ, &status );
    if ( status == MS::kSuccess )
    {
        vector[0] = hValueX.asDouble();
        vector[1] = hValueY.asDouble();
        vector[2] = hValueZ.asDouble();
    }
    return ( status );
}

#endif /* BBSTEERINGDESIRENODE_H */
