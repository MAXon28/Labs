#include "pch.h"
#include <iostream>
#include "Complex.h"
using namespace std;
void sum(komplex komplex_number_1, komplex komplex_number_2)
{
	cout << "\t\t\t\t\t我屡襖n z1 + z2 = ( " << komplex_number_1.x << " + ( " << komplex_number_1.y << ") * i) + ( " << komplex_number_2.x << " + ( " << komplex_number_2.y << ") * i) = " << (komplex_number_1.x + komplex_number_2.x) << " + ( " << (komplex_number_1.y + komplex_number_2.y) << ") * i\n";
}
void sub(komplex komplex_number_1, komplex komplex_number_2)
{
	cout << "\t\t\t\t\t我屡襖n z1 - z2 = ( " << komplex_number_1.x << " + ( " << komplex_number_1.y << ") * i) - ( " << komplex_number_2.x << " + ( " << komplex_number_2.y << ") * i) = " << (komplex_number_1.x - komplex_number_2.x) << " + ( " << (komplex_number_1.y - komplex_number_2.y) << ") * i\n";
}
void mul(komplex komplex_number_1, komplex komplex_number_2)
{
	cout << "\t\t\t\t\t我屡襖n z1 * z2 = ( " << komplex_number_1.x << " + ( " << komplex_number_1.y << ") * i) * ( " << komplex_number_2.x << " + ( " << komplex_number_2.y << ") * i) = " << (komplex_number_1.x * komplex_number_2.x - komplex_number_1.y * komplex_number_2.y) << " + ( " << (komplex_number_1.x * komplex_number_2.y + komplex_number_2.x * komplex_number_1.y) << ") * i\n";
}
void div(komplex komplex_number_1, komplex komplex_number_2)
{
	cout << "\t\t\t\t\t我屡襖n z1 / z2 = ( " << komplex_number_1.x << " + ( " << komplex_number_1.y << ") * i) / ( " << komplex_number_2.x << " + ( " << komplex_number_2.y << ") * i) = " << float(komplex_number_1.x * komplex_number_2.x + komplex_number_1.y * komplex_number_2.y) / (komplex_number_2.x  * komplex_number_2.x + komplex_number_2.y * komplex_number_2.y) << " + ( " << float(komplex_number_2.x * komplex_number_1.y - komplex_number_1.x * komplex_number_2.y) / (komplex_number_2.x  * komplex_number_2.x + komplex_number_2.y * komplex_number_2.y) << ") * i\n";
}