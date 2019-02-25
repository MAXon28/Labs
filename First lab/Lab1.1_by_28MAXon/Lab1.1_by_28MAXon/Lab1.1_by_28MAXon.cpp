#include "pch.h"
#include <iostream>
#include <locale.h>
#include "Complex.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	komplex komplex_number_one;
	komplex komplex_number_two;
	char oper;
	cout << " Общий вид комплексного числа:\n z = x + y * i\n";
	cout << " Введите первое комплексное число (сначала действительную часть, а затем мнимую):\n";
	cin >> komplex_number_one.x >> komplex_number_one.y;
	cout << " Введите второе комплексное число (сначала действительную часть, а затем мнимую):\n";
	cin >> komplex_number_two.x >> komplex_number_two.y;
	cout << " Вид первого комплексного числа: z1 = " << komplex_number_one.x << " + ( " << komplex_number_one.y << ") * i\n";
	cout << " Вид второго комплексного числа: z2 = " << komplex_number_two.x << " + ( " << komplex_number_two.y << ") * i\n";
	cout << "\t\t\t\t\t\tКАЛЬКУЛЯТОР\n Выберите действие из нижеприведённого списка. Нажмите знак, который соответствует выбранному действию.\n + сложение\n - вычитание\n * умножение\n / деление\n";
	cin >> oper;
	switch (oper)
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