//
// Copyright (C) 2002 Carsten Kolve
//
// File: pluginMain.cpp
//
// Recompiled for Maya 2012 by Shawn Lipowski
// modifications/improvements  2013 by  John Cassella (redpawfx)
//

#include <maya/MFnPlugin.h>
#include <maya/MPxNode.h>
//#include <maya/MPxFieldNode.h>

#include "bbCombineDesiresNode.h"
#include "bbSteeringDesireNode.h"

MStatus initializePlugin ( MObject obj )

{
    MStatus   status;
    MFnPlugin plugin ( obj, "Carsten Kolve", "4.0", "Any" );

    // register steering desire node
    status = plugin.registerNode ( "bbSteeringDesireField",
                                   bbSteeringDesire::id,
                                   &bbSteeringDesire::creator,
                                   &bbSteeringDesire::initialize,
                                   MPxNode::kFieldNode );
    if ( !status )
    {
        status.perror ( "registerNodeBBSD" );
        return status;
    }

    // register combine desires node
    status = plugin.registerNode ( "bbCombineDesiresField",
                                   bbCombineDesires::id,
                                   bbCombineDesires::creator,
                                   bbCombineDesires::initialize );

    if ( !status )
    {
        status.perror ( "registerNodeBBCD" );
        return status;
    }

    // register ui

    status = plugin.registerUI ( "bbCreateUI", "bbDeleteUI" );
    if ( !status )
    {
        status.perror ( "registerUIScripts" );
        return status;
    }


    return status;
}

MStatus uninitializePlugin ( MObject obj )

{
    MStatus   status;
    MFnPlugin plugin ( obj );

    status = plugin.deregisterNode ( bbSteeringDesire::id );

    if ( !status )
    {
        status.perror ( "deregisterNodeBBSD" );
        return status;
    }

    status = plugin.deregisterNode ( bbCombineDesires::id );
    if ( !status )
    {
        status.perror ( "deregisterNodeBBCD" );
        return status;
    }

    return status;
}
