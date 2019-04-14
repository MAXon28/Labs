#pragma once
#include <iostream>
#include "Animal.h"
#include <string>
using namespace std;

class Cat : public Animal
{
private:
	string breed_cat;
public:
	void set_breed_cat();
	void get_breed_cat();
};