#include "Auto.h"

void Auto::set_info_for_car()
{
	cout << " Введите марку машины: ";
	cin >> brand;
	cout << " Введите имя владельца машины: ";
	cin >> owner_name;
}

ostream& operator<<(ostream& out, Auto& car)
{
	out << " Марка машины: " << car.brand << endl << " Имя владельца машины: " << car.owner_name << endl;
	return out;
}
