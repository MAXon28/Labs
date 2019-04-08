#include "pch.h" 
#include "Tiles.h"
#include <string>
#include <iostream> 
using namespace std;

Tiles::Tiles()
{
	brand = "Нет данных";
	size_h = 0.0;
	size_w = 0.0;
	price = 0.0;
	cout << " Сработал пустой конструктор\n";
}

Tiles::Tiles(string b, double height, double width, double cost)
{
	brand = b;
	size_h = height;
	size_w = width;
	price = cost;
	cout << " Сработал конструктор с параметрами\n";
}

Tiles::Tiles(const Tiles& tile)
{
	brand = tile.brand;
	size_h = tile.size_h;
	size_w = tile.size_w;
	price = tile.price;
	cout << " Сработал конструктор копирования\n";
}

Tiles::Tiles(double cost) : price(cost)
{
	brand = "Нет данных";
	size_h = 0.0;
	size_w = 0.0;
	cout << " Сработал конструктор инициализации\n";
}

Tiles::~Tiles()
{
	cout << " Удаление кафеля бренда " << brand << endl;
}

void Tiles::getData()
{
	cout << " Бренд: " << brand << endl;
	cout << " Высота: " << size_h << endl;
	cout << " Ширина: " << size_w << endl;
	cout << " Цена: " << price << endl;
}