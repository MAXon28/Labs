#pragma once
#ifndef CHILD_H
#define CHILD_H
#include <iostream> 
using namespace std;

class Child
{
private:
	string name;
	string surname;
	int age;
public:
	void set_information();
	void get_information();
};
#endif