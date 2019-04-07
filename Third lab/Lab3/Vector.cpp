#include "pch.h" 
#include "Vector.h"
#include <iostream> 
using namespace std;

void Vector::set_vector()
{
	cout << " x = ";
	cin >> x;
	cout << " y = ";
	cin >> y;
	cout << " z = ";
	cin >> z;
}

void Vector::get_vector()
{
	cout << " ( " << x << ", " << y << ", " << z << ")";
}

void Vector::modul()
{
	cout << sqrt(x * x + y * y + z * z);
}

void Vector::sum(Vector v_1, Vector v_2)
{
	cout << v_1.x + v_2.x << ", " << v_1.y + v_2.y << ", " << v_1.z + v_2.z << ")";
}

void Vector::sub(Vector v_1, Vector v_2)
{
	cout << v_1.x - v_2.x << ", " << v_1.y - v_2.y << ", " << v_1.z - v_2.z << ")";
}