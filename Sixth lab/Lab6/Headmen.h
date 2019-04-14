#pragma once
#include "Student.h"

class Headmen : public Student
{
private:
	long long int number_of_phone;
	string email;
	string list_of_group[19]; // Всего 19 человек в группе
public:
	Headmen();

	void check_of_the_group();
	void write_your_data();
	void get_information_for_group();
	
};