
#pragma once
#ifndef BBUTILS_H
#define BBUTILS_H

#include <iostream>
#include <maya/MFnParticleSystem.h>

class bbUtils
{
public:

	static MStatus createPPAttr ( MFnParticleSystem  &part, MString attrName, MString shortName, int type );
};

#endif /* BBUTILS_H */
