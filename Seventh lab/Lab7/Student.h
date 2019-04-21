#pragma once
#include "Human.h"
class Student :
	public Human
{
private:
	bool on_lesson;
public:
	Student() {}
	Student(string s_n, string n, string m_n, int a, bool o_l);
	~Student() {}
	void print() override;
};

