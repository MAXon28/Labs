#include "pch.h"
#include "functions.h"
#include <iostream>
using namespace std;

void (*pointer (int *arr, int sum1)) (int*, int)
{
	if (sum1 == arr[0])
	{
		return &inverse;
	}
	else if (sum1 > arr[0])
	{
		return &increase;
	}
	else
	{
		return &decrease;
	}
}

void inverse (int *arr, int amount)
{
	cout << "Инвертирование:\n";
	int t;
	for (int i = 0; i < amount; i++)
	{
		if (i != amount / 2)
		{
			t = arr[i];
			arr[i] = arr[amount - i - 1];
			arr[amount - i - 1] = t;
		}
		cout << arr[i] << "\t";
	}
}

void increase (int *arr, int amount)
{
	cout << "Возрастание:\n";
	int t;
	for (int i = 0; i < amount - 1; i++)
	{
		for (int j = i + 1; j < amount; j++)
		{
			if (arr[i] > arr[j])
			{
				t = arr[j];
				arr[j] = arr[i];
				arr[i] = t;
			}
		}
	}
	for (int i = 0; i < amount; i++)
	{
		cout << arr[i] << "\t";
	}
}

void decrease (int *arr, int amount)
{
	cout << "Убывание:\n";
	int t;
	for (int i = 0; i < amount - 1; i++)
	{
		for (int j = i + 1; j < amount; j++)
		{
			if (arr[i] < arr[j])
			{
				t = arr[j];
				arr[j] = arr[i];
				arr[i] = t;
			}
		}
	}
	for (int i = 0; i < amount; i++)
	{
		cout << arr[i] << "\t";
	}
}