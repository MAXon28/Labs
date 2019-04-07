#include "pch.h" 
#include <iostream> 
#include <string>
#include "Child.h"
#include "Tiles.h"
#include "Complex.h"
#include "Vector.h"
#include "Windows.h"
using namespace std;


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//Дети 
	Child first_child, second_child;
	cout << " Ввод данных о первом ребёнке:\n";
	first_child.set_information();
	cout << " Ввод данных о втором ребёнке:\n";
	second_child.set_information();
	cout << "\n\n";
	cout << " Данные о первом ребёнке:\n";
	first_child.get_information();
	cout << " Данные о втором ребёнке:\n";
	second_child.get_information();
	cout << "\n\n\n";

	//Кафель 
	Tiles first_tile, second_tile;
	cout << " Ввод данных о первом кафеле:\n Бренд: ";
	cin >> first_tile.brand;
	cout << " Высота: ";
	cin >> first_tile.size_h;
	cout << " Ширина: ";
	cin >> first_tile.size_w;
	cout << " Цена: ";
	cin >> first_tile.price;
	cout << " Ввод данных о втором кафеле:\n Бренд: ";
	cin >> second_tile.brand;
	cout << " Высота: ";
	cin >> second_tile.size_h;
	cout << " Ширина: ";
	cin >> second_tile.size_w;
	cout << " Цена: ";
	cin >> second_tile.price;
	cout << "\n\n";
	cout << " Данные о первом кафеле:\n";
	first_tile.getData();
	cout << " Данные о втором кафеле:\n";
	second_tile.getData();
	cout << "\n\n\n";

	//Комплексное число 
	Complex digit;
	digit.setInform();
	cout << "\n\n";
	digit.getInform();
	cout << "\n\n\n";

	//Вектор 
	Vector coordinates_first, coordinates_second, sum_vectors, sub_vectors;
	cout << " Ввод координат первого вектора:" << endl;
	coordinates_first.set_vector();
	cout << " Ввод координат второго вектора:" << endl;
	coordinates_second.set_vector();
	cout << "\n\n";
	cout << " Координаты первого вектора: A";
	coordinates_first.get_vector();
	cout << " Координаты второго вектора: B";
	coordinates_second.get_vector();
	cout << "\n\n";
	cout << " Модуль первого вектора: A = ";
	coordinates_first.modul();
	cout << "\n";
	cout << " Модуль первого вектора: B = ";
	coordinates_second.modul();
	cout << "\n\n";
	cout << " Сумма векторов: A + B (";
	sum_vectors.sum(coordinates_first, coordinates_second);
	cout << "\n";
	cout << " Вычитание векторов: A - B (";
	sum_vectors.sub(coordinates_first, coordinates_second);

	system("pause");
}