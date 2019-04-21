#pragma once
#include <string>
using namespace std;
class Human
{
protected:
	string surname;
	string name;
	string midname;
	int age;
public:
	Human() {}
	Human(string s_n, string n, string m_n, int a);
	~Human() {}
	virtual void print() = 0;

};

