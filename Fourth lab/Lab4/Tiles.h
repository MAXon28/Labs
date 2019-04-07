#pragma once
#ifndef TILES_H
#define TILES_H
#include <iostream> 
using namespace std;

class Tiles
{
public:
	string brand;
	double size_h;
	double size_w;
	double price;
	Tiles();
	Tiles(string b, double height, double width, double cost);
	Tiles(const Tiles& tile);
	Tiles(double cost);
	~Tiles();
	void getData();
};
#endif
