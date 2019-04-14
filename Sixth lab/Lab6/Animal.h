#pragma once
#include <iostream>
#include "Alive.h"
using namespace std;

class Animal : public Alive
{
public:
	void set_type_animal();
	void get_type_animal();
};
