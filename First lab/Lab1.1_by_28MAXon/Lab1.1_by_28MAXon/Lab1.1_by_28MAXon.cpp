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
		double t;
		while (!(cin >> t) || cin.get() != '\n')
		{
			cout << " Ошибка ввода! Повторите ввод заново:\n";
			cin.clear();
			cin.sync();
		}
		return t;
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
	char oper;
	string oper;
	cout << " Общий вид комплексного числа:\n z = x + y * i\n";
	cout << " Введите первое комплексное число (сначала действительную часть, а затем мнимую):\n";
	cin >> komplex_number_one.x >> komplex_number_one.y;
	cout << " Введите второе комплексное число (сначала действительную часть, а затем мнимую):\n";
	cin >> komplex_number_two.x >> komplex_number_two.y;
	cout << " Введите второе комплексное число\n Cначала действительную часть:\n";
	komplex_number_two.x = check.control();
	cout << " Теперь мнимую часть:\n";
	komplex_number_two.y = check.control();
	cout << " Вид первого комплексного числа: z1 = " << komplex_number_one.x << " + ( " << komplex_number_one.y << ") * i\n";
	cout << " Вид второго комплексного числа: z2 = " << komplex_number_two.x << " + ( " << komplex_number_two.y << ") * i\n";
	cout << "\t\t\t\t\t\tКАЛЬКУЛЯТОР\n Выберите действие из нижеприведённого списка. Нажмите знак, который соответствует выбранному действию.\n + сложение\n - вычитание\n * умножение\n / деление\n";
op:
	cin >> oper;
	switch (oper)
	{
		cout << "Ошибка ввода!\n Повторите ввод. Выберите действие из нижеприведённого списка. Нажмите знак, который соответствует выбранному действию.\n + сложение\n - вычитание\n * умножение\n / деление\n";
		goto op;
	}
	char operation = oper[0];
	if (operation != '+' || operation != '-' || operation != '*' || operation != '/')
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