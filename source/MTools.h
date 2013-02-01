//
// Copyright (C) 2002 Carsten Kolve  
// 
// File: MTools.h
//
// Recompiled for Maya 2012 by Shawn Lipowski
//

#pragma once
#ifndef MTOOLS_H
#define MTOOLS_H

#include <cmath>

#include <maya/MDoubleArray.h>
#include <math.h>

#define MAX_DOUBLE 1.7E+308
#define MAX_INT		99999

/*
void shellSort(MDoubleArray &a)
// Sorts an array a[1..n] into ascending numerical order by Shell's method (diminishing increment
// sort). n is input; a is replaced on output by its sorted rearrangement.
{
	int n = a.length();

	int i,j;
	double v;
	
	int inc = 1; 
		
	// Determine the starting increment.

	do 
	{
		inc *= 3;
		inc++;
	} 
	while (inc <= n);
	
	do 
	{ 
		// Loop over the partial sorts.
		inc /= 3;
		for (i=inc+1;i<=n;i++) 
		{ 
			// Outer loop of straight insertion.
			v=a[i];
			j=i;
		
			while (a[j-inc] > v) 
			{ 
				// Inner loop of straight insertion.
				a[j]=a[j-inc];
				j -= inc;
				if (j <= inc) break;
			}
			
			a[j]=v;
		}
	} 
	while (inc > 1);
}

// median

double median(MDoubleArray data)
{
	int n = data.length();
	double medianV;

	if ( fmod(n,2.0)==0.0)
	{
		// n even
		medianV = 0.5 * (data[(n/2)]+data[(n/2)+1]);
	}
	else
	{
		// n odd
		medianV = data[(n+1)/2];
	}

	return medianV;

}
*/

#endif /* MTOOLS_H */
