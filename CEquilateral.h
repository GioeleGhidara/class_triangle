/*! \file CEquilateral.h
	\brief Declaration of the class Equilateral

	Details.
*/


#ifndef EQUILATERAL_H
#define EQUILATERAL_H

#include <iostream>
#include <math.h>

#include "CTriangle.h"

using namespace std;

/// @class Equilateral
/// @brief to manage an object with the shape of a Equilateral triangle
class Equilateral : public Triangle
{
protected:
	float side;

public:

	/// @name CONSTRUCTORS/DESTRUCTOR
	/// @{
	Equilateral();
	Equilateral(float s);
	Equilateral(const Equilateral& r);

	~Equilateral();
	/// @}

	/// @name OPERATORS
	/// @{
	Equilateral& operator=(const Equilateral& r);
	bool operator==(const Equilateral& r);
	/// @}

	/// @name BASIC HANDLING
	/// @{
	void Init();
	void Init(const Equilateral& r);
	void Reset();
	/// @}


	/// @name GETTERS / SETTERS
	/// @{
	void SetSide(float s);
	void SetDim(float s);

	void GetDim(float& s);
	float GetSide();

	float GetArea();
	/// @}


	/// @name DEBUG and SERIALIZATION 
	/// @{
	void ErrorMessage(const char* string);
	void WarningMessage(const char* string);
	void Dump();
	/// @}

};

#endif