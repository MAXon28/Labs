#ifndef Complex_h
#define Complex_h
struct komplex {
	double x; // Действительная часть
	double y; // Мнимая часть
};
void sum(komplex komplex_number_1, komplex komplex_number_2);
void sub(komplex komplex_number_1, komplex komplex_number_2);
void mul(komplex komplex_number_1, komplex komplex_number_2);
void div(komplex komplex_number_1, komplex komplex_number_2);
#endif
