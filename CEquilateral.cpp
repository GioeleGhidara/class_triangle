/// \file CEquilateral.cpp
///	\brief class Equilateral: implementation of the functions
///
///	Details.
///

#include<iostream>
#include "CEquilateral.h"


/// @brief default constructor 
Equilateral::Equilateral() {

	cout << "Equilateral - constructor - default" << endl;
	Init();
}

/// @brief constructor 
/// @param s side of the Equilateral
Equilateral::Equilateral(float s) {

	Init();

	cout << "Equilateral - constructor" << endl;

	if (s <= 0.) {
		WarningMessage("constructor: side should be > 0");
		SetDim(0);
	}
	else
		SetDim(s);

}

/// @brief destructor 
Equilateral::~Equilateral() {

	cout << "Equilateral - destructor" << endl;
	Reset();

}

/// @brief copy constructor 
/// @param o reference to the object that should be copied 
Equilateral::Equilateral(const Equilateral& r) {

	cout << "Equilateral - copy constructor" << endl;

	Init(r);

}

/// @brief overload of operator = 
/// @param o reference to the object on the right side of the operator 
/// @return reference to the object on the left side of the operator 
Equilateral& Equilateral::operator=(const Equilateral& r) {

	cout << "Equilateral - operator =" << endl;

	Init(r);

	return *this;

}

/// @brief overload of operator == 
/// @param r reference to the object on the right side of the operator 
/// @return true if the two objects have the same sides  
bool Equilateral::operator==(const Equilateral& r) {

	if (r.side == side)
		return true;

	return false;
}

/// @brief default initialization of the object
void Equilateral::Init() {
	SetDim(0);

}


/// @brief initialization of the object as a copy of an object 
/// @param r reference to the object that should be copied 
void Equilateral::Init(const Equilateral& r) {
	Init();
	SetDim(r.side);
}

/// @brief total reset of the object  
void Equilateral::Reset() {

	SetDim(0);

}



/// @brief set side of the object
/// @param s side
void Equilateral::SetSide(float s) {

	if (s < 0.) {
		WarningMessage("Setside: side should be > 0");
		return;
	}

	SetDim(s);

}


/// @brief get side of the object
/// @return side
float Equilateral::GetSide() {

	return side;
}


/// @brief set sides of the object
/// @param s side
void Equilateral::SetDim(float s) {

	side = s;
	Triangle::SetSides(s, s, s);

	return;
}


/// @brief get side of the object
/// @param s side
void Equilateral::GetDim(float& s) {

	s = side;

	return;
}

/// @brief computes the area of the object
/// @return the area 
float Equilateral::GetArea() {
;
	float h = 0;
	h = (sqrt(3)/2 )* side;
	return (side * h) / 2;
}


/// @brief write an error message 
/// @param string message to be printed
void Equilateral::ErrorMessage(const char* string) {

	cout << endl << "ERROR -- Equilateral --";
	cout << string << endl;

}

/// @brief write a warning message 
/// @param string message to be printed
void Equilateral::WarningMessage(const char* string) {

	cout << endl << "WARNING -- Equilateral --";
	cout << string << endl;

}


/// @brief for debugging: all about the object
void Equilateral::Dump() {
	cout << endl;
	cout << "---Equilateral---" << endl;
	cout << endl;

	cout << "side = " << side << endl;

	Triangle::Dump();

	cout << endl;

}

