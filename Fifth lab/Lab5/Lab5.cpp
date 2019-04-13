#include <iostream>
#include "Complex.h"
#include "Vector.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	//Комплексные числа
	Complex first_complex;
	cout << " Введите данные комплексного числа:\n";
	cin >> first_complex;
	Complex second_complex;
	second_complex = first_complex;
	first_complex++;
	second_complex--;
	cout << " Первое комплексное число:\n" << first_complex;
	cout << "\n Второе комплексное число:\n" << second_complex;
	cout << endl;
	if (first_complex == second_complex)
	{
		cout << " Комплексные числа равны!" << endl << endl;
	}
	else
	{
		cout << " Комплексные числа не равны!" << endl << endl;
	}

	//Векторы
	Vector first_vector, second_vector;
	cout << " Введите координаты вектора:\n";
	cin >> first_vector;
	second_vector = first_vector;
	cout << " Координаты первого вектора: \n A = " << first_vector;
	cout << " Координаты второго вектора: \n B = " << second_vector;
	if (first_vector == second_vector)
	{
		cout << " Векторы равны!";
	}
	else
	{
		cout << " Векторы не равны!";
	}
}
