#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double side;
	double r;
	double x;
	double y;
	cout << "Введите сторону внешнего квадрата: ";
	cin >> side;
	cout << "Введите радиус окружности: ";
	cin >> r;
	cout << "Введите X: ";
	cin >> x;
	cout << "Введите Y: ";
	cin >> y;
	if (x >= -side / 2 && x <= side / 2 && y >= -side / 2 && y <= side / 2) 
	{
		if (x * x + y * y <= r * r) 
		{
			cout << "Точка (" << x << "," << y << ") не принадлежит заданной области!";
		}
		else 
		{
			cout << "Точка (" << x << "," << y << ") принадлежит заданной области!";
		}
	}
	else 
	{
		cout << "Точка (" << x << "," << y << ") не принадлежит заданной области!";
	}
}