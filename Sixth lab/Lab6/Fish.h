#pragma once
#include <iostream>
#include "Alive.h"
using namespace std;

class Fish : public Alive
{
public:
	void set_type_fish();
	void get_type_fish();
};
