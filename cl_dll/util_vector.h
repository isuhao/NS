/***
*
*	Copyright (c) 1999, Valve LLC. All rights reserved.
*	
*	This product contains software technology licensed from Id 
*	Software, Inc. ("Id Technology").  Id Technology (c) 1996 Id Software, Inc. 
*	All Rights Reserved.
*
*   Use, distribution, and modification of this source code and/or resulting
*   object code is restricted to non-commercial enhancements to products from
*   Valve LLC.  All other use, distribution, or modification is prohibited
*   without written permission from Valve LLC.
*
****/
//  Vector.h
// A subset of the extdll.h in the project HL Entity DLL
//
#ifndef UTIL_VECTOR_H
#define UTIL_VECTOR_H

// Misc C-runtime library headers
#include "stdio.h"
#include "stdlib.h"
#include "math.h"


// Header file containing definition of globalvars_t and entvars_t
typedef unsigned int	func_t;		//
typedef unsigned int	string_t;	// from engine's pr_comp.h;
typedef float vec_t;				// needed before including progdefs.h

#include "vectorclasses.h"

#ifndef THEVECTOR3T
#define THEVECTOR3T
#define vec3_t Vector
#endif

#endif
