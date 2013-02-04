//
// Copyright (C) 2002 Carsten Kolve
//
// File: bbCombineDesireseNode.h
//
// Dependency Graph Node: bbCombineDesires
//
// Recompiled for Maya 2012 by Shawn Lipowski
//

#pragma once
#ifndef BBCOMBINEDESIRESNODE_H
#define BBCOMBINEDESIRESNODE_H

#include <iostream>

#include <maya/MIOStream.h>
#include <maya/MPxNode.h>
#include <maya/MFnNumericAttribute.h>
#include <maya/MTypeId.h>
#include <maya/MDataBlock.h>
#include <maya/MVectorArray.h>
#include <maya/MDoubleArray.h>

#define McheckErr(stat, msg)		\
	if ( MS::kSuccess != stat )	\
	{				\
		cerr << msg;		\
		return MS::kFailure;	\
	}\

#define className bbCombineDesires


class bbCombineDesires : public MPxNode
{
public:
    bbCombineDesires();
    virtual				~bbCombineDesires();

    virtual MStatus		compute ( const MPlug& plug, MDataBlock& data );

    static  void*		creator();
    static  MStatus		initialize();



    static  MObject		inputForce;		// input attributes

    static  MObject		weight;
    static  MObject		priority;
    static  MObject		ditheringFactor;
    static  MObject		numForces;

    static  MObject		outputForce;		// output attribute
    static  MObject	    combineMode;

    static  MObject		selectedForce;

    static	MTypeId		id;

private:

    void cdLinear ( MArrayDataHandle &inputForceAD,int numForces,MVectorArray &outForces );
    void cdWeights ( MArrayDataHandle &inputForceAD,int numForces,MDataBlock& data, MVectorArray &outForces );
    void cdPriorities ( MArrayDataHandle &inputForceAD,int numForces, MDataBlock& data, MVectorArray &outForces );
    void cdSelect ( MArrayDataHandle &inputForceAD, MDataBlock& data, MVectorArray &outForces );


    MDoubleArray getWeights ( MDataBlock& data, int numForces );
    MIntArray getPriorities ( MDataBlock& data, int numForces );

    // methods to get attribute value of local attributes.
    //

    short	combineModeValue ( MDataBlock& block );
    short	selectedForceValue ( MDataBlock& block );

};

// inlines
inline short bbCombineDesires::combineModeValue ( MDataBlock& block )
{
    MStatus status;
    MDataHandle hValue = block.inputValue ( combineMode, &status );
    short value = 0;
    if ( status == MS::kSuccess )
        value = hValue.asShort();
    return ( value );
}
inline short bbCombineDesires::selectedForceValue ( MDataBlock& block )
{
    MStatus status;
    MDataHandle hValue = block.inputValue ( selectedForce, &status );
    short value = 0;
    if ( status == MS::kSuccess )
        value = hValue.asShort();
    return ( value );
}

#endif /* BBCOMBINEDESIRESNODE_H */
