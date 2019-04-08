#include "pch.h" 
#include "Child.h"
#include <string>
#include <iostream> 
using namespace std;

Child::Child()
{
	name = "Нет данных";
	surname = "Нет данных";
	age = 0;
	cout << " Сработал пустой конструктор\n";
}

Child::Child(string n, string s_n, int a)
{
	name = n;
	surname = s_n;
	age = a;
	cout << " Сработал конструктор с параметрами\n";
}

Child::Child(const Child& children)
{
	name = children.name;
	surname = children.surname;
	age = children.age;
	cout << " Сработал конструктор копирования\n";
}

Child::Child(string n, int a) : name(n), age(a)
{
	surname = "Нет данных";
	cout << " Сработал конструктор инициализации\n";
}

void Child::get_information()
{
	cout << " Имя: " << name << endl;
	cout << " Фамилия: " << surname << endl;
	cout << " Возраст: " << age << endl;
}