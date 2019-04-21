#include <iostream>
#include <vector>
#include <list>
#include <iterator>
#include <queue>
#include "Students.h"
#include "Complex.h"
#include "Auto.h"
#include "Windows.h"
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// Студенты
	int numbers;
	vector <Students> students;
	cout << " Введите количество студентов, о которых нужно составить данные: ";
	Students student;
	cin >> numbers;
	for (int i = 0; i < numbers; i++)
	{
		cout << " Ввод данных о " << i + 1 << " студенте: " << endl;
		cin >> student;
		students.push_back(student);
	}

	cout << endl;
	for (int i = 0; i < numbers; i++)
	{
		cout << " Данные о " << i + 1 << " студенте: " << endl << students[i];
	}
	cout << endl << endl << endl;

	// Комплексное число
	list <Complex> complex;
	Complex one_complex;
	int numbers_of_complex;
	cout << " Введите количество комлпексных чисел: ";
	cin >> numbers_of_complex;
	for (int i = 0; i < numbers_of_complex; i++)
	{
		cout << " Ввод данных о z" << i + 1 << ":" << endl << " Введите действительную часть: ";
		one_complex.set_x();
		cout << " Введите мнимую часть: ";
		one_complex.set_y();
		complex.push_back(one_complex);
	}

	cout << endl;
	list <Complex>::iterator output;
	int count = 1;
	for (output = complex.begin(); output != complex.end(); output++)
	{
		cout << " z" << count << " = " << *output;
		count++;
	}
	cout << endl << endl << endl;
	
	// Авто
	queue <Auto> cars;
	Auto car;
	string answer;
	cout << " Приехала на автомойку машина? ";
	cin >> answer;
	do
	{
		if (answer == "Да")
		{
			car.set_info_for_car();
			cars.push(car);

			if (cars.size() == 1)
			{
				cout << " УВЕДОМЛЕНИЕ!" << endl << " В очереди стоит " << cars.size() << " машина" << endl;
			}

			if (cars.size() > 1 && cars.size() < 5)
			{
				cout << " УВЕДОМЛЕНИЕ!" << endl << " В очереди стоят " << cars.size() << " машины" << endl;
			}

			if (cars.size() > 5)
			{
				cout << " УВЕДОМЛЕНИЕ!" << endl << " В очереди стоят " << cars.size() << " машин" << endl;
			}

			if (cars.size() >= 3)
			{
				cout << " Поторапливайтесь!" << endl;
			}
			cout << " Приехала на автомойку ещё одна машина? ";
			cin >> answer;
		}
	} while (answer == "Да");

	cout << endl;
	int count_cars = 1;
	while (!cars.empty())
	{
		cout << " Обслужена " << count_cars << " машина из очереди!" << endl << " Данные об этой машине: " << endl << cars.front() << endl;
		cars.pop();
		count_cars++;
	}
}