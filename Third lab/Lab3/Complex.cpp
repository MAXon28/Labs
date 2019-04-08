#include "pch.h" 
#include "Complex.h"
#include <iostream> 
using namespace std;

void Complex::setInform()
{
	cout << " Введите действительную часть: ";
	cin >> Re_z;
	cout << " Введите мнимую часть: ";
	cin >> Im_z;
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
