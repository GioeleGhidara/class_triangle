/// \file CIsosceles.cpp
///	\brief class Isosceles: implementation of the functions
///
///	Details.
///

#include<iostream>
#include <math.h>
#include "CIsosceles.h"


/// @brief default constructor 
Isosceles::Isosceles() {

	cout << "Isosceles - constructor - default" << endl;
	Init();
}

/// @brief constructor 
/// @param b base of the Isosceles
/// @param s side of the Isosceles
Isosceles::Isosceles(float b, float s) {

	Init();

	cout << "Isosceles - constructor" << endl;

	if (b <= 0. || s <= 0.) {
		WarningMessage("constructor: base and side should be > 0");
		SetDim(0, 0);
	}
	else
		SetDim(b, s);

}

/// @brief destructor 
Isosceles::~Isosceles() {

	cout << "Isosceles - destructor" << endl;
	Reset();

}

/// @brief copy constructor 
/// @param o reference to the object that should be copied 
Isosceles::Isosceles(const Isosceles& r) {

	cout << "Isosceles - copy constructor" << endl;

	Init(r);

}

/// @brief overload of operator = 
/// @param o reference to the object on the right side of the operator 
/// @return reference to the object on the left side of the operator 
Isosceles& Isosceles::operator=(const Isosceles& r) {

	cout << "Isosceles - operator =" << endl;

	Init(r);

	return *this;

}

/// @brief overload of operator == 
/// @param r reference to the object on the right side of the operator 
/// @return true if the two objects have the same base and the same length  
bool Isosceles::operator==(const Isosceles& r) {

	if (r.base == base && r.side == side)
		return true;

	return false;
}

/// @brief default initialization of the object
void Isosceles::Init() {
	SetDim(0, 0);

}


/// @brief initialization of the object as a copy of an object 
/// @param r reference to the object that should be copied 
void Isosceles::Init(const Isosceles& r) {
	Init();
	SetDim(r.base, r.side);
}

/// @brief total reset of the object  
void Isosceles::Reset() {

	SetDim(0, 0);

}


/// @brief set base of the object
/// @param b base 
void Isosceles::SetBase(float b) {

	if (b < 0.) {
		WarningMessage("Setbase: base should be > 0");
		return;
	}

	SetDim(b, side);

}

/// @brief set length of the object
/// @param s side
void Isosceles::SetSide(float s) {

	if (s < 0.) {
		WarningMessage("Setside: side should be > 0");
		return;
	}

	SetDim(base, s);

}



/// @brief get base of the object
/// @return base 
float Isosceles::GetBase() {

	return base;

}

/// @brief get length of the object
/// @return side
float Isosceles::GetSide() {

	return side;
}

/// @brief set base and length of the object
/// @param b base 
/// @param s side
void Isosceles::SetDim(float b, float s) {

	base = b;
	side = s;
	Triangle::SetSides(b,s,s);

	return;
}

/// @brief get base and side of the object
/// @param b base 
/// @param s side
void Isosceles::GetDim(float& b, float& s) {

	b = base;
	s = side;

	return;
}

/// @brief computes the area of the object
/// @return the area 
float Isosceles::GetArea() {
	float powb = 0;
	float pows = 0;
	float h = 0;
	powb = pow(base / 2, 2);
	pows = pow(side, 2);
	h = sqrt(powb + pows);
	return (base * h) / 2;
}


/// @brief write an error message 
/// @param string message to be printed
void Isosceles::ErrorMessage(const char* string) {

	cout << endl << "ERROR -- Isosceles --";
	cout << string << endl;

}

/// @brief write a warning message 
/// @param string message to be printed
void Isosceles::WarningMessage(const char* string) {

	cout << endl << "WARNING -- Isosceles --";
	cout << string << endl;

}


/// @brief for debugging: all about the object
void Isosceles::Dump() {
	cout << endl;
	cout << "---Isosceles---" << endl;
	cout << endl;

	cout << "base = " << base << endl;
	cout << "side = " << side << endl;

	Triangle::Dump();

	cout << endl;

}






