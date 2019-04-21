#include <iostream>
#include "Human.h"
#include "Boss.h"
#include "Student.h"
#include "Windows.h"
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Boss BigBoss("Боссов", "Биг", "Боссович", 55, 100);
	Human* man = &BigBoss;
	man->print();
	Student Anton("Ткачев", "Антон", "Михайлович", 18, false);
	man = &Anton;
	man->print();
}