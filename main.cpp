#include<iostream>
#include "CEquilateral.h"
#include "CIsosceles.h"
#include "CScalene.h"

using namespace std;
int main() {

	Triangle* A, * B, * C,* D;
	float s1, s2, s3;

	Isosceles triangA(10, 5);
	Isosceles triangB(3, 7);
	Equilateral triangC(4);
	Scalene triangD(3, 4, 5);

	A = &triangA;
	B = &triangB;
	C = &triangC;
	D = &triangD;


	cout << endl;
	cout << "**** Triangle A ****" << endl;
	A->Dump();
	cout << "**** ***** ****" << endl;
	cout << "**** Triangle B ****" << endl;
	B->Dump();;
	cout << " **** ***** ****" << endl;
	cout << " **** Triangle C ****" << endl;
	C->Dump();
	cout << " **** ***** ****" << endl;
	cout << " **** Triangle D ****" << endl;
	D->Dump();

	cout << endl;
	cout << "**** triangle isosceles A ****" << endl;
	triangA.Dump();
	cout << "**** ***** ****" << endl;
	cout << "**** triangle isosceles B ****" << endl;
	triangB.Dump();
	cout << "**** ***** ****" << endl;
	cout << "**** triangle equilateral C ****" << endl;
	triangC.Dump();
	cout << "**** ***** ****" << endl;
	cout << "**** triangle scalene D ****" << endl;
	triangD.Dump();
	cout << "**** ***** ****" << endl;

	triangA = triangB;

	cout << endl;
	cout << "**** Triangle A ****" << endl;
	A->Dump();
	cout << "**** ***** ****" << endl;
	cout << "**** Triangle B ****" << endl;
	B->Dump();
	cout << "**** ***** ****" << endl;

	triangB.SetBase(12);
	cout << endl;
	cout << "**** Triangle A ****" << endl;
	A->Dump();
	cout << "**** ***** ****" << endl;
	cout << "**** Triangle B ****" << endl;
	B->Dump();
	cout << "**** ***** ****" << endl;

	B->GetSides(s1, s2, s3);
	cout << "triangle B - sides:" << s1 << " " << s2 << " " << s3 << " " << endl;


	return 0;

}