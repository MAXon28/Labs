#include "Vector.h"

Vector::Vector()
{
	x = 0;
	y = 0;
	z = 0;
}

istream& operator>>(istream& in, Vector& vector)
{
	cout << " Введите x: ";
	in >> vector.x;
	cout << " Введите y: ";
	in >> vector.y;
	cout << " Введите z: ";
	in >> vector.z;
	return in;
}

ostream& operator<<(ostream& out, Vector& vector)
{
	out << "{ " << vector.x << ", " << vector.y << ", " << vector.z << "}" << endl;
	return out;
}

Vector& Vector::operator=(const Vector vector)
{
	x = vector.x;
	y = vector.y;
	z = vector.z;
	return *this;
}

bool Vector::operator==(const Vector& object)
{
	return (sqrt(x * x + y * y + z * z) == sqrt(object.x * object.x + object.y * object.y + object.z * object.z));
}