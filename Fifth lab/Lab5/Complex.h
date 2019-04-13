#pragma once
#include <iostream>
using namespace std;

class Complex
{
private:
	double Re_z;
	double Im_z;
public:
	Complex();

	friend istream& operator>>(istream& in, Complex& complex);
	friend ostream& operator<<(ostream& out, Complex& complex);
	Complex& operator=(const Complex complex);
	Complex& operator++(int);
	Complex& operator--(int);
	friend bool operator==(const Complex& first_complex, const Complex& second_complex);
};