#include "pch.h"
#include <iostream>
#include <string>
#include <locale.h>
#include "Complex.h"
using namespace std;
class complex
{
public:
	int control()
	{
		string t;
	start:
		cin >> t;
		if (t.length() == 0)
		{
			cout << "Ошибка! Вы не ввели ни одного символа! Повторите ввод ещё раз:\n";
			goto start;
		}
		for (int i = 0; i < t.length(); i++)
		{
			if (i == 0)
			{
				if (t[i] <= 48 || t[i] > 57)
				{
					if (t[i] == '0')
					{
						cout << "Ошибка! В начале числа не может стоять 0! Повторите ввод ещё раз:\n";
						goto start;
					}
					else
					{
						cout << "Ошибка! Нужно ввести ЧИСЛО, а не набор символов! Повторите ввод ещё раз:\n";
						goto start;
					}
				}
			}
			if (t[i] < 48 || t[i] > 57)
			{
				cout << "Ошибка! Нужно ввести ЧИСЛО, а не набор символов! Повторите ввод ещё раз:\n";
				goto start;
			}
		}
		double number = stod(t);
		return number;
	}
	bool verification(int o)
	{
		if (o == 0 || o > 1)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
};
int main()
{
	setlocale(LC_ALL, "Russian");
	komplex komplex_number_one;
	komplex komplex_number_two;
	complex check;
	string oper;
	cout << " Общий вид комплексного числа:\n z = x + y * i\n";
	cout << " Введите первое комплексное число\n Cначала действительную часть:\n";
	komplex_number_one.x = check.control();
	cout << " Теперь мнимую часть:\n";
	komplex_number_one.y = check.control();
	cout << " Введите второе комплексное число\n Cначала действительную часть:\n";
	komplex_number_two.x = check.control();
	cout << " Теперь мнимую часть:\n";
	komplex_number_two.y = check.control();
	cout << " Вид первого комплексного числа: z1 = " << komplex_number_one.x << " + ( " << komplex_number_one.y << ") * i\n";
	cout << " Вид второго комплексного числа: z2 = " << komplex_number_two.x << " + ( " << komplex_number_two.y << ") * i\n";
	cout << "\t\t\t\t\t\tКАЛЬКУЛЯТОР\n Выберите действие из нижеприведённого списка. Нажмите знак, который соответствует выбранному действию.\n + сложение\n - вычитание\n * умножение\n / деление\n";
op:
	cin >> oper;
	if (check.verification(oper.length()) == false)
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