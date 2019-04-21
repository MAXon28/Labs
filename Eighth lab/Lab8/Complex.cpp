#include "Complex.h"

void Complex::set_x()
{
	cin >> Re_z;
}

void Complex::set_y()
{
	cin >> Im_z;
}

ostream& operator<<(ostream& out, Complex& complex)
{
	if (complex.Im_z < 0)
	{
		out << complex.Re_z << " - " << complex.Im_z * (-1) << " * i" << endl;
	}
	else
	{
		out << complex.Re_z << " + " << complex.Im_z << " * i" << endl;
	}
	return out;
}
