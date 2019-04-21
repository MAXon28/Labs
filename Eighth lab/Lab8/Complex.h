#pragma once
#include <iostream>
using namespace std;

class Complex
{
private:
	double Re_z;
	double Im_z;
public:
	Complex() {}
	~Complex() {}

	void set_x();
	void set_y();
	friend ostream& operator<<(ostream& out, Complex& complex);
};

