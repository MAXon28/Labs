#include <iostream>
#include "Student.h"
#include "Headmen.h"
#include "Alive.h"
#include "Animal.h"
#include "Fish.h"
#include "Bird.h"
#include "Dog.h"
#include "Cat.h"
#include "Windows.h"


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// Студент
	Student Maxim;
	cin >> Maxim;
	cout << " Данные о студенте:" << endl << Maxim;

	// Староста
	Headmen Arina;
	Arina.check_of_the_group();
	Arina.write_your_data();
	Arina.get_information_for_group();

	// Природа
	Alive penguin;
	penguin.set_type_alive();
	penguin.get_type_alive();

	// Животное
	Animal animal;
	animal.set_type_animal();
	animal.get_type_animal();

	// Рыба
	Fish fish;
	fish.set_type_fish();
	fish.get_type_fish();

	// Птица
	Bird bird;
	bird.set_type_bird();
	bird.get_type_bird();

	// Собака
	Dog Lucas;
	cout << " Введите породу собаки: ";
	Lucas.set_breed_dog();
	cout << " Порода собаки: ";
	Lucas.get_breed_dog();

	// Кот
	Cat Varka;
	cout << " Введите породу кошки: ";
	Varka.set_breed_cat();
	cout << " Порода кошки: ";
	Varka.get_breed_cat();
}