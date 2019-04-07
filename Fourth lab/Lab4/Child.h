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
	Child();
	Child(string n, string s_n, int a);
	Child(const Child& children);
	Child(string n, int a);
	~Child(){}
	void get_information();
};
#endif