//
// Copyright (C) 2013 John Cassella
//
// File: bbUtils.cpp
//
// part of  BrainBugz originally by  Carsten Kolve
// Recompiled for Maya 2012 by Shawn Lipowski
// modifications/improvements  2013 by  John Cassella (redpawfx)
//

#include <maya/MGlobal.h>
#include <maya/MFnTypedAttribute.h>

#include "bbUtils.h"


//////////////////////////////////////////////////
MStatus bbUtils::createPPAttr ( MFnParticleSystem  &part, MString attrName, MString shortName, int type )
{
    // type = 0 = int
    // type = 1 = double
    // type = 2 = vector

    //  make the initial state attr first
    MFnTypedAttribute initialStateAttr;
    MFnTypedAttribute ppAttr;

    MStatus stat1,stat2 = MS::kFailure;
    MObject initialStateAttrObj;
    MObject attrObj;
    switch ( type )
    {
    case 0:
    {
        if ( !part.isPerParticleIntAttribute ( ( attrName+"0" ) ) && !part.isPerParticleIntAttribute ( attrName ) )
        {
            initialStateAttrObj = initialStateAttr.create ( ( attrName+"0" ), ( shortName+"0" ), MFnData::kIntArray, &stat1 );
            attrObj 			= ppAttr.create ( ( attrName ), ( shortName ), MFnData::kIntArray, &stat2 );
        }
    }
    break;
    case 1:
    {
        if ( !part.isPerParticleDoubleAttribute ( ( attrName+"0" ) ) && !part.isPerParticleDoubleAttribute ( attrName ) )
        {
            initialStateAttrObj = initialStateAttr.create ( ( attrName+"0" ), ( shortName+"0" ), MFnData::kDoubleArray, &stat1 );
			attrObj 			= ppAttr.create ( ( attrName ), ( shortName ), MFnData::kDoubleArray, &stat2 );
        }
    }
    break;
    case 2:
    {
        if ( !part.isPerParticleVectorAttribute ( ( attrName+"0" ) ) && !part.isPerParticleVectorAttribute ( attrName ) )
        {
            initialStateAttrObj = initialStateAttr.create ( ( attrName+"0" ), ( shortName+"0" ), MFnData::kVectorArray, &stat1 );
            attrObj 			= ppAttr.create ( ( attrName ), ( shortName ), MFnData::kVectorArray, &stat2 );
        }
    }
    break;
    default:
    {}
    }
    if ( stat1 == MStatus::kSuccess && stat2 == MStatus::kSuccess )
    {
        initialStateAttr.setStorable ( true );
        ppAttr.setStorable ( true );
        ppAttr.setKeyable ( true );
        stat1 = part.addAttribute ( initialStateAttrObj, MFnDependencyNode::kLocalDynamicAttr );
        if ( !stat1 )
        {
            MGlobal::displayWarning ( "BBUtils->error:  was unable to create "+attrName+"0"+ " attr" );
        }
        stat2 = part.addAttribute ( attrObj, MFnDependencyNode::kLocalDynamicAttr );
        if ( !stat2 )
        {
            MGlobal::displayWarning ( "BBUtils->error:  was unable to create "+ ( attrName ) + " attr" );
        }
    }
    if ( stat1 != MStatus::kSuccess || stat2 != MStatus::kSuccess )

    {
        return MStatus::kFailure;
    }
    return MStatus::kSuccess;
}
