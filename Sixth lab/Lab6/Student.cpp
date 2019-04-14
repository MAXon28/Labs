#include "Student.h"

Student::Student()
{
	name = "Нет данных";
	surname = "Нет данных";
	age = 0;
	level_in_Univercity = 0;
	group = "****";
}

istream& operator>>(istream& in, Student& student)
{
	cout << " Введите имя студента: ";
	in >> student.name;
	cout << " Введите фамилию студента: ";
	in >> student.surname;
	cout << " Введите возраст студента: ";
	in >> student.age;
	cout << " Введите курс студента: ";
	in >> student.level_in_Univercity;
	cout << " Введите название группы, в которой учится студент: ";
	in >> student.group;
	cout << " Сессия!" << endl;
	for (int i = 1; i <= 5; i++)
	{
		cout << " " << i << " экзамен!" << endl << " Введите название сдаваемого предмета: ";
		in >> student.academic_subject[i - 1];
		cout << " Введите оценку студента за этот предмет: ";
		in >> student.academic_perfomance[i - 1];
	}
	return in;
}

ostream& operator<<(ostream& out, Student& student)
{
	out << " Имя студента: " << student.name << endl << " Фамилия студента: " << student.surname << endl << " Возраст студента: " << student.age << endl << " Курс студента: " << student.level_in_Univercity << endl << " Название группы, в которой учится студент: " << student.group << endl;
	out << " Успеваемость студента на сессии: " << endl;
	for (int i = 1; i <= 5; i++)
	{
		out << " " << i << " предмет: " << student.academic_subject[i - 1] << endl;
		if (i < 5)
		{
			out << " Оценка: " << student.academic_perfomance[i - 1] << endl << endl;
		}
		else
		{
			out << " Оценка: " << student.academic_perfomance[i - 1] << endl;
		}
	}
	return out;
}