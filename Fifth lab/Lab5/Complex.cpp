#include "Complex.h"

Complex::Complex()
{
	Re_z = 0;
	Im_z = 0;
}

istream& operator>>(istream& in, Complex& complex)
{
	cout << " Действительная часть: ";
	in >> complex.Re_z;
	cout << " Мнимая часть: ";
	in >> complex.Im_z;
	return in;
}

ostream& operator<<(ostream& out, Complex& complex)
{
	if (complex.Im_z < 0)
	{
		out << " z = " << complex.Re_z << " - " << complex.Im_z * (-1) << " * i";
	}
	else
	{
		out << " z = " << complex.Re_z << " + " << complex.Im_z << " * i";
	}
	return out;
}

Complex& Complex::operator=(const Complex complex)
{
	Re_z = complex.Re_z;
	Im_z = complex.Im_z;
	return *this;
}

Complex& Complex::operator++(int)
{
	Re_z++;
	Im_z++;
	return *this;
}

Complex& Complex::operator--(int)
{
	Re_z--;
	Im_z--;
	return *this;
}

bool operator==(const Complex& first_complex, const Complex& second_complex)
{
	return (first_complex.Re_z == second_complex.Re_z && first_complex.Im_z == second_complex.Im_z);
}