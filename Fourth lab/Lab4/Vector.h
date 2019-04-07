#pragma once
#ifndef VECTOR_H
#define VECTOR_H

class Vector
{
private:
	double x;
	double y;
	double z;
public:
	Vector();
	Vector(double i, double j, double k);
	Vector(const Vector& vector);
	Vector(double j);
	~Vector(){}
	void get_vector();
};
#endif
