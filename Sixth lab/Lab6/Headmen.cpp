#include "Headmen.h"

Headmen::Headmen()
{
	number_of_phone = 0;
	email = "Нет данных";
	for (int i = 0; i < 19; i++)
	{
		list_of_group[i] = "Нет данных";
	}
}

void Headmen::check_of_the_group()
{
	cout << " Проверка посещаемости всех студентов на паре" << endl;
	string check;
	for (int i = 0; i < 19; i++)
	{
		cout << " Присутствует ли " << i + 1 << " студент из группы? ";
		cin >> check;
		cout << endl;
		list_of_group[i] = check;
	}
	cout << " Список посещаемости на данной паре всей группы:" << endl << " ";
	for (int i = 0; i < 19; i++)
	{
		cout << i + 1 << " студент: " << list_of_group[i] << endl << " ";
	}
}

void Headmen::write_your_data()
{
	cout << "Напиши свои данные для связи с тобой!" << endl << " Номер телефона: ";
	cin >> number_of_phone;
	cout << " Почта: ";
	cin >> email;
}

void Headmen::get_information_for_group()
{
	cout << " Оповещение для группы" << endl;
}