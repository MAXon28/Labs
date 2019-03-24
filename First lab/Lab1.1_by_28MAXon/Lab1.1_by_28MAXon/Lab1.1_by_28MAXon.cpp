#include "pch.h"
#include <iostream>
#include <string>
#include <locale.h>
#include "Complex.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	komplex komplex_number_one;
	komplex komplex_number_two;
	string oper;
	cout << " Общий вид комплексного числа:\n z = x + y * i\n";
	cout << " Введите первое комплексное число\n Cначала действительную часть:\n";
	komplex_number_one.x = control();
	cout << " Теперь мнимую часть:\n";
	komplex_number_one.y = control();
	cout << " Введите второе комплексное число\n Cначала действительную часть:\n";
	komplex_number_two.x = control();
	cout << " Теперь мнимую часть:\n";
	komplex_number_two.y = control();
	if (komplex_number_one.y < 0)
	{
		cout << " Вид первого комплексного числа: z1 = " << komplex_number_one.x << " + ( " << komplex_number_one.y << ") * i\n";
	}
	else
	{
		cout << " Вид первого комплексного числа: z1 = " << komplex_number_one.x << " + " << komplex_number_one.y << " * i\n";
	}
	if (komplex_number_two.y < 0)
	{
		cout << " Вид второго комплексного числа: z2 = " << komplex_number_two.x << " + ( " << komplex_number_two.y << ") * i\n";
	}
	else
	{
		cout << " Вид второго комплексного числа: z2 = " << komplex_number_two.x << " + " << komplex_number_two.y << " * i\n";
	}
	cout << "\t\t\t\t\t\tКАЛЬКУЛЯТОР\n Выберите действие из нижеприведённого списка. Нажмите знак, который соответствует выбранному действию.\n + сложение\n - вычитание\n * умножение\n / деление\n";
op:
	cin >> oper;
	if (verification(oper.length()) == false)
	{
		cout << "Ошибка ввода!\n Повторите ввод. Выберите действие из нижеприведённого списка. Нажмите знак, который соответствует выбранному действию.\n + сложение\n - вычитание\n * умножение\n / деление\n";
		goto op;
	}
	char operation = oper[0];
	if (operation != '+' && operation != '-' && operation != '*' && operation != '/')
	{
		cout << "Ошибка ввода!\n Повторите ввод. Выберите действие из нижеприведённого списка. Нажмите знак, который соответствует выбранному действию.\n + сложение\n - вычитание\n * умножение\n / деление\n";
		goto op;
	}
	switch (operation)
	{
	case '+':
		sum(komplex_number_one, komplex_number_two);
		break;
	case '-':
		sub(komplex_number_one, komplex_number_two);
		break;
	case '*':
		mul(komplex_number_one, komplex_number_two);
		break;
	case '/':
		div(komplex_number_one, komplex_number_two);
		break;
	}
	system("pause");
	return 0;
}