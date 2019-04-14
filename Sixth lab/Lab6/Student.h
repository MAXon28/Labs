#pragma once
#include <iostream>
#include <string>
using namespace std;

class Student
{
protected:
	string name;
	string surname;
	int age;
	int level_in_Univercity;
	string group;
	int academic_perfomance[5]; // Успеваемость студента. Всего 5 экзаменов.
	string academic_subject[5]; // Предметы студента. Всегоа 5 предметов.*/
public:
	Student();

	
	friend istream& operator>>(istream& in, Student& student);
	friend ostream& operator<<(ostream& out, Student& student);

};
