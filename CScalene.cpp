/// \file CScalene.cpp
///	\brief class Scalene: implementation of the functions
///
///	Details.
///

#include<iostream>
#include <math.h>
#include "CScalene.h"


/// @brief default constructor 
Scalene::Scalene() {

	cout << "Scalene - constructor - default" << endl;
	Init();
}

/// @brief constructor 
/// @param s1 side1 of the Scalene
/// @param s2 side2 of the Scalene
/// @param s2 side2 of the Scalene
Scalene::Scalene(float s1, float s2, float s3) {

	Init();

	cout << "Scalene - constructor" << endl;

	if (s1 <= 0. || s2 <= 0. || s3 <= 0.) {
		WarningMessage("constructor: side1, side2 and side3 should be > 0");
		SetDim(0, 0, 0);
	}
	else
		SetDim(s1, s2, s3);

}

/// @brief destructor 
Scalene::~Scalene() {

	cout << "Scalene - destructor" << endl;
	Reset();

}

/// @brief copy constructor 
/// @param o reference to the object that should be copied 
Scalene::Scalene(const Scalene& r) {

	cout << "Scalene - copy constructor" << endl;

	Init(r);

}

/// @brief overload of operator = 
/// @param o reference to the object on the right side of the operator 
/// @return reference to the object on the left side of the operator 
Scalene& Scalene::operator=(const Scalene& r) {

	cout << "Scalene - operator =" << endl;

	Init(r);

	return *this;

}

/// @brief overload of operator == 
/// @param r reference to the object on the right side of the operator 
/// @return true if the two objects have the same side1, side2 and side 3  
bool Scalene::operator==(const Scalene& r) {

	if (r.side1 == side1 && r.side2 == side2 && r.side3 == side3)
		return true;

	return false;
}

/// @brief default initialization of the object
void Scalene::Init() {
	SetDim(0, 0, 0);

}


/// @brief initialization of the object as a copy of an object 
/// @param r reference to the object that should be copied 
void Scalene::Init(const Scalene& r) {
	Init();
	SetDim(r.side1, r.side2, r.side3);
}

/// @brief total reset of the object  
void Scalene::Reset() {

	SetDim(0, 0, 0);

}


/// @brief set side1 of the object
/// @param s1 side1
void Scalene::SetSide1(float s1) {

	if (s1 < 0.) {
		WarningMessage("SetSide1: side1 should be > 0");
		return;
	}

	SetDim(s1, side2, side3);

}

/// @brief set side2 of the object
/// @param s2 side2 
void Scalene::SetSide2(float s2) {

	if (s2 < 0.) {
		WarningMessage("SetSide2: side2 should be > 0");
		return;
	}

	SetDim(side1, s2, side3);

}


/// @brief set Side3 of the object
/// @param s3 side3
void Scalene::SetSide3(float s3) {

	if (s3 < 0.) {
		WarningMessage("SetSide3: side3 should be > 0");
		return;
	}

	SetDim(side1, side2, s3);

}


/// @brief get side1 of the object
/// @return side1
float Scalene::GetSide1() {

	return side1;
}


/// @brief get side2 of the object
/// @return side2
float Scalene::GetSide2() {

	return side2;
}


/// @brief get side3 of the object
/// @return side3
float Scalene::GetSide3() {

	return side3;
}


/// @brief set the sides of the object
/// @param s1 side1 
/// @param s2 side2
/// @param s3 side3
void Scalene::SetDim(float s1, float s2, float s3) {

	side1 = s1;
	side2 = s2;
	side3 = s3;
	Triangle::SetSides(s1, s2, s3);

	return;
}

/// @brief get side1, side2 and side3 of the object
/// @param s1 side1 
/// @param s2 side2
/// @param s3 side3
void Scalene::GetDim(float& s1, float& s2, float& s3) {

	s1 = side1;
	s2 = side2;
	s3 = side3;

	return;
}

/// @brief computes the area of the object
/// @return the area using the Erone formula
float Scalene::GetArea() {
	float sp = GetPerimeter()/2;
	float prod1 = sp * (sp - side1);  
	float prod2 = sp * (sp - side2);
	float prod3 = sp * (sp - side3);
	return sqrt(sp * prod1 * prod2 * prod3);
}


/// @brief write an error message 
/// @param string message to be printed
void Scalene::ErrorMessage(const char* string) {

	cout << endl << "ERROR -- Scalene --";
	cout << string << endl;

}

/// @brief write a warning message 
/// @param string message to be printed
void Scalene::WarningMessage(const char* string) {

	cout << endl << "WARNING -- Scalene --";
	cout << string << endl;

}


/// @brief for debugging: all about the object
void Scalene::Dump() {
	cout << endl;
	cout << "---Scalene---" << endl;
	cout << endl;

	cout << "side1 = " << side1 << endl;
	cout << "side2 = " << side2 << endl;
	cout << "side3 = " << side3 << endl;

	Triangle::Dump();

	cout << endl;

}