#include <iostream>
#include "Student.h"

Student::Student(string s_n, string n, string m_n, int a, bool o_l)
{
	surname = s_n;
	name = n;
	midname = m_n;
	age = a;
	on_lesson = o_l;
}

void Student::print()
{
	cout << " Данные об ученике:" << endl << " Фамилия: " << surname << endl << " Имя: " << name << endl << " Отчество: " << midname << endl << " Возраст: " << age << endl << " Присутствует на занятии? ";
	if (on_lesson == true)
	{
		cout << "Да" << endl;
	}
	else
	{
		cout << "Нет" << endl;
	}
}
