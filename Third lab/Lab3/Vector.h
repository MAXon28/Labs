#pragma once
#ifndef VECTOR_H
#define VECTOR_H

class Vector
{
private:
	double x;
	double y;
	double z;
public:
	void set_vector();
	void get_vector();
	void modul();
	void sum(Vector v_1, Vector v_2);
	void sub(Vector v_1, Vector v_2);
};
#endif