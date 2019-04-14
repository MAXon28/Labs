#pragma once
#include <iostream>
#include "Alive.h"
using namespace std;

class Bird : public Alive
{
public:
	void set_type_bird();
	void get_type_bird();
};