#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(0));
	int rowsMartix; // количество строк
	int columnsMatrix; // количество столбцов
	int counter = 0;
	cout << "Введите количество строк матрицы (от 1 до 100 включительно): ";
	do
	{
		if (counter != 0)
		{
			cout << "Неверный ввод! Попробуйте ещё раз: ";
		}
		cin >> rowsMartix;
		counter++;
	} while (!(rowsMartix >= 1 && rowsMartix <= 100));
	cout << "Введите количество столбцов матрицы (от 1 до 50 включительно): ";
	counter = 0;
	do
	{
		if (counter != 0)
		{
			cout << "Неверный ввод! Попробуйте ещё раз: ";
		}
		cin >> columnsMatrix;
		counter++;
	} while (!(columnsMatrix >= 1 && columnsMatrix <= 50));
	int** matrix = new int* [rowsMartix];
	for (int i = 0; i < rowsMartix; i++)
	{
		matrix[i] = new int[columnsMatrix];
	}
	cout << "Матрица:" << endl;
	for (int i = 0; i < rowsMartix; i++)
	{
		for (int j = 0; j < columnsMatrix; j++)
		{
			matrix[i][j] = 1 + rand() % 27;
			cout << matrix[i][j];
			if (j + 1 != columnsMatrix)
			{
				cout << " ";
			}
			else 
			{
				cout << endl;
			}
		}
	}
	int k;
	cout << "Введите число k: ";
	cin >> k;
	int saveFirstElement;
	while (k != 0)
	{
		saveFirstElement = matrix[0][0];
		for (int i = 0; i < rowsMartix; i++)
		{
			for (int j = 0; j < columnsMatrix; j++)
			{
				if (!(i == 0 && j == 0))
				{
					if (j == 0)
					{
						matrix[i - 1][columnsMatrix - 1] = matrix[i][j];
					}
					else
					{
						matrix[i][j - 1] = matrix[i][j];
					}
				}
			}
		}
		matrix[rowsMartix - 1][columnsMatrix - 1] = saveFirstElement;
		k--;
	}
	cout << "Обновленная матрица:" << endl;
	for (int i = 0; i < rowsMartix; i++)
	{
		for (int j = 0; j < columnsMatrix; j++)
		{
			cout << matrix[i][j];
			if (j + 1 != columnsMatrix)
			{
				cout << " ";
			}
			else
			{
				cout << endl;
			}
		}
	}
}