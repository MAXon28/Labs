#include "pch.h" 
#include "Tiles.h"
#include <string>
#include <iostream> 
using namespace std;

void Tiles::getData()
{
	cout << " Бренд: " << brand << endl;
	cout << " Высота: " << size_h << endl;
	cout << " Ширина: " << size_w << endl;
	cout << " Цена: " << price << endl;
}