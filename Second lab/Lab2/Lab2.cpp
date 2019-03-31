#include "pch.h"
#include <iostream>
#include <locale>
#include "functions.h"
using namespace std;

int main ()
{
	setlocale (LC_ALL, "Russian");
	cout << "Введите количество элементов в массиве:\n"; 
	int size;
	cin >> size;
	int *array = new int[size];
	array[0] = -100 + rand() % 100;
	int sum = array[0];
	for (int i = 1; i < size; i++)
	{
		array[i] = -100 + rand() % 100;
		sum = sum + array[i];
	}
	void (*action)(int*, int) = pointer (array, sum);
	action (array, size);
	system ("pause");
}