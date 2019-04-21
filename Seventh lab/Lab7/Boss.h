#pragma once
#include "Human.h"
class Boss :
	public Human
{
private:
	int number_of_workers;
public:
	Boss() {}
	Boss(string s_n, string n, string m_n, int a, int n_o_w);
	~Boss() {}
	virtual void print() override;
};

