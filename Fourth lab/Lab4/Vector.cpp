#include "pch.h" 
#include "Vector.h"
#include <iostream> 
using namespace std;

Vector::Vector()
{
	x = 0.0;
	y = 0.0;
	z = 0.0;
	cout << " Сработал пустой конструктор\n";
}

Vector::Vector(double i, double j, double k)
{
	x = i;
	y = j;
	z = k;
	cout << " Сработал конструктор с параметрами\n";
}

Vector::Vector(const Vector& vector)
{
	x = vector.x;
	y = vector.y;
	z = vector.z;
	cout << " Сработал конструктор копирования\n";
}

Vector::Vector(double j) : y(j)
{
	x = 0.0;
	z = 0.0;
	cout << " Сработал конструктор инициализации\n";
}

void Vector::get_vector()
{
	cout << " ( " << x << ", " << y << ", " << z << ")";
}