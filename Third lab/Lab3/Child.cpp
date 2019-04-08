#include "pch.h" 
#include "Child.h"
#include <string>
#include <iostream> 
using namespace std;

void Child::set_information()
{
	cout << " Имя: ";
	cin >> name;
	cout << " Фамилия: ";
	cin >> surname;
	cout << " Возраст: ";
	cin >> age;
}

void Child::get_information()
{
	cout << " Имя: " << name << endl;
	cout << " Фамилия: " << surname << endl;
	cout << " Возраст: " << age << endl;
}