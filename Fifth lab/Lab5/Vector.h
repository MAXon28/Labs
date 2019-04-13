#pragma once
#include <iostream>
using namespace std;

class Vector
{
private:
	double x;
	double y;
	double z;
public:
	Vector();

	friend istream& operator>>(istream& in, Vector& vector);
	friend ostream& operator<<(ostream& out, Vector& vector);
	Vector& operator=(const Vector vector);
	bool operator==(const Vector& object);
};