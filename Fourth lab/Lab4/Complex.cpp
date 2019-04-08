#include "pch.h" 
#include "Complex.h"
#include <iostream> 
using namespace std;

Complex::Complex()
{
	Re_z = 0.0;
	Im_z = 0.0;
	cout << " Сработал пустой конструктор\n";
}

Complex::Complex(double x, double y)
{
	Re_z = x;
	Im_z = y;
	cout << " Сработал конструктор с параметрами\n";
}

Complex::Complex(const Complex& z)
{
	Re_z = z.Re_z;
	Im_z = z.Im_z;
	cout << " Сработал конструктор копирования\n";
}

Complex::Complex(double x) : Re_z(x)
{
	Im_z = 0.0;
	cout << " Сработал конструктор инициализации\n";
}

void Complex::getInform()
{
	cout << " Вид комплексного числа: z = " << Re_z << " + " << Im_z << " * i" << endl;
	cout << " Re_z = " << Re_z << endl;
	cout << " Im_z = " << Im_z << endl;
	double modul;
	modul = sqrt(Re_z * Re_z + Im_z * Im_z);
	cout << " Модуль комплексного числа: |z| = " << modul;
}