#pragma once
#ifndef COMPLEX_H
#define COMPLEX_H

class Complex
{
private:
	double Re_z;
	double Im_z;
public:
	Complex();
	Complex(double x, double y);
	Complex(const Complex& z);
	Complex(double x);
	~Complex(){}
	void getInform();
};
#endif
