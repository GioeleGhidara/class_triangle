/*! \file CIsosceles.h
	\brief Declaration of the class Isosceles

	Details.
*/


#ifndef ISOSCELES_H
#define ISOSCELES_H

#include<iostream>

#include "CTriangle.h"

using namespace std;

/// @class Isosceles
/// @brief to manage an object with the shape of a Isosceles Triangle
class Isosceles : public Triangle
{
protected:
	float side; 
	float base;

public:

	/// @name CONSTRUCTORS/DESTRUCTOR
	/// @{
	Isosceles();
	Isosceles(float s, float b);
	Isosceles(const Isosceles& r);

	~Isosceles();
	/// @}

	/// @name OPERATORS
	/// @{
	Isosceles& operator=(const Isosceles& r);
	bool operator==(const Isosceles& r);
	/// @}

	/// @name BASIC HANDLING
	/// @{
	void Init();
	void Init(const Isosceles& r);
	void Reset();
	/// @}


	/// @name GETTERS / SETTERS
	/// @{
	void SetSide(float s);
	void SetBase(float b);
	void SetDim(float s, float b);

	void GetDim(float& b, float& s);
	float GetSide();
	float GetBase();

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