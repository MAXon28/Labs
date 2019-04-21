#pragma once
#include <iostream>
using namespace std;

class Auto
{
private:
	string brand;
	string owner_name;
public:
	Auto() {}
	~Auto() {}
	void set_info_for_car();
	friend ostream& operator<<(ostream& out, Auto& car);
};

