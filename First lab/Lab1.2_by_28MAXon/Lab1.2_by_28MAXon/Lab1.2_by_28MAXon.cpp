#include "pch.h"
#include <iostream>
#include <string>
#include <locale.h>
#include <fstream>
using namespace std;
struct komplex {
	double x; // Действительная часть
	double y; // Мнимая часть
};
int main()
{
	setlocale(LC_ALL, "Russian");
	ifstream file("complex.txt");
	if (!file.is_open())
	{
		cout << " Файл не может быть открыт!\n";
	}
	else
	{
		cout << " Файл найден. Работа продолжается!\n";
	}
	int n;
	file >> n;
	cout << " Количество комплексных чисел в файле: " << n << endl;
	komplex *p = new komplex[n];
	cout << " Все комплексные числа из файла: \n";
	int max = 0, modul, index;
	for (int i = 0; i < n; i++)
	{
		file >> p[i].x >> p[i].y;
		if (p[i].y < 0)
		{
			cout << " z" << i << " = " << p[i].x << " - " << p[i].y * (-1) << " * i" << endl;
		}
		else
		{
			cout << " z" << i << " = " << p[i].x << " + " << p[i].y << " * i" << endl;
		}
		modul = sqrt(p[i].x * p[i].x + p[i].y * p[i].y);
		if (modul > max)
		{
			max = modul;
			index = i;
		}
	}
	if (p[index].y < 0)
	{
		cout << " Комплексное число с наибольшим модулем:\n" << " z" << index << " = " << p[index].x << " - " << p[index].y * (-1) << " * i\n Модуль этого числа равен: " << max << endl;
	}
	else
	{
		cout << " Комплексное число с наибольшим модулем:\n" << " z" << index << " = " << p[index].x << " + " << p[index].y << " * i\n Модуль этого числа равен: " << max << endl;
	}
	system("pause");
}