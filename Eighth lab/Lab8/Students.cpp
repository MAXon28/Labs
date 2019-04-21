#include "Students.h"

Students::Students()
{
	surname = "Отсутсвтует";
	name = "Отсутсвтует";
	midname = "Отсутсвтует";
	course = 0;
}

istream& operator>>(istream& in, Students& student)
{
	cout << " Введите фамилию студента: ";
	in >> student.surname;
	cout << " Введитя имя студента: ";
	in >> student.name;
	cout << " Введите отчество студента: ";
	in >> student.midname;
	cout << " Введите курс обучения студента: ";
	in >> student.course;
	return in;
}

ostream& operator<<(ostream& out, Students& student)
{
	out << " Фамилия студента: " << student.surname << endl << " Имя студента: " << student.name << endl << " Отчество студента: " << student.midname << endl << " Курс обучения студента: " << student.course << endl;
	return out;
}
