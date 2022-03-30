///////////////////////////////////////////////////////////////
// Lab1_7.cpp
#include <iostream>
#include "Triangle.h"
#include <string>


using namespace std;

int main()
{
	Triangle ABC;
	ABC.readTriangle();
	ABC.displayTriangle();
	cout << "Type of ABC = " << ABC.triangleType() << endl;
	cout << "Perimeter ABC = " << ABC.perimeter() << endl;
	cout << "Square ABC = " << ABC.square() << endl;


}
