#pragma once
#include <iostream>
#include "Animal.h"
#include <string>
using namespace std;

class Dog : public Animal
{
private:
	string breed_dog;
public:
	void set_breed_dog();
	void get_breed_dog();
};
