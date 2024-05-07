/*! \file CScalene.h
	\brief Declaration of the class Scalene

	Details.
*/


#ifndef Scalene_H
#define Scalene_H

#include<iostream>

#include "CTriangle.h"

using namespace std;

/// @class Scalene
/// @brief to manage an object with the shape of a Scalene Triangle
class Scalene : public Triangle
{
protected:
	float side1;
	float side2;
	float side3;

public:

	/// @name CONSTRUCTORS/DESTRUCTOR
	/// @{
	Scalene();
	Scalene(float s1, float s2, float s3);
	Scalene(const Scalene& r);

	~Scalene();
	/// @}

	/// @name OPERATORS
	/// @{
	Scalene& operator=(const Scalene& r);
	bool operator==(const Scalene& r);
	/// @}

	/// @name BASIC HANDLING
	/// @{
	void Init();
	void Init(const Scalene& r);
	void Reset();
	/// @}


	/// @name GETTERS / SETTERS
	/// @{
	void SetSide1(float s1);
	void SetSide2(float s2);
	void SetSide3(float s3);
	void SetDim(float s1, float s2, float s3);

	void GetDim(float& s1, float& s2, float& s3);
	float GetSide1();
	float GetSide2();
	float GetSide3();

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