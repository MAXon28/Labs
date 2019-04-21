#include <iostream>
#include "Boss.h"

Boss::Boss(string s_n, string n, string m_n, int a, int n_o_w)
{
	surname = s_n;
	name = n;
	midname = m_n;
	age = a;
	number_of_workers = n_o_w;
}

void Boss::print()
{
	cout << " Данные о боссе:" << endl << " Фамилия: " << surname << endl << " Имя: " << name << endl << " Отчество: " << midname << endl << " Возраст: " << age << endl << " Количество сотрудников: " << number_of_workers << endl << endl << endl;
}

