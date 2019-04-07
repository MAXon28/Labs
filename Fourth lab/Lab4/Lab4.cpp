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
	Child first_child;
	Child third_child ("Дмитрий", 4);
	Child fourth_child ("Антон", "Ткачев", 18);
	Child second_child = fourth_child;
	cout << " Данные о первом ребёнке:\n";
	first_child.get_information();
	cout << " Данные о втором ребёнке:\n";
	second_child.get_information();
	cout << " Данные о третьем ребёнке:\n";
	third_child.get_information();
	cout << " Данные о четвертом ребёнке:\n";
	fourth_child.get_information();
	cout << "\n\n\n";

	//Кафель 
	Tiles first_tile;
	Tiles second_tile("ПолТоп", 3.0, 4.0, 500.0);
	Tiles *third_tile = new Tiles ("КафельРу", 2.0, 4.0, 1228.0);
	Tiles fourth_tile(1000.0);
	cout << " Данные о первом кафеле:\n";
	first_tile.getData();
	cout << " Данные о втором кафеле:\n";
	second_tile.getData();
	cout << " Данные о третьем кафеле:\n";
	third_tile->getData();
	cout << " Данные о четвертом кафеле:\n";
	fourth_tile.getData();
	delete third_tile;
	cout << "\n\n\n";

	//Комплексное число 
	Complex first_z;
	Complex second_z(3.0, 4.0);
	Complex third_z = second_z;
	Complex fourth_z(1.0);
	cout << " Данные о первом комплексном числе:\n";
	first_z.getInform();
	cout << "\n Данные о втором комплексном числе:\n";
	second_z.getInform();
	cout << "\n Данные о третьем комплексном числе:\n";
	third_z.getInform();
	cout << "\n Данные о четвертом комплексном числе:\n";
	fourth_z.getInform();
	cout << "\n\n\n";

	//Вектор 
	Vector coordinates_first;
	Vector coordinates_second(1.0, 5.0, 1.0); 
	Vector coordinates_third(4.0);
	Vector coordinates_fourth = coordinates_third;	
	cout << " Координаты первого вектора: A";
	coordinates_first.get_vector();
	cout << "\n Координаты второго вектора: B";
	coordinates_second.get_vector();
	cout << "\n Координаты третьего вектора: C";
	coordinates_third.get_vector();
	cout << "\n Координаты четвертого вектора: D";
	coordinates_fourth.get_vector();
	cout << "\n\n";
}