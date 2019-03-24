#include "pch.h"
#include <iostream>
#include <string>
#include <locale.h>
#include "Complex.h"
using namespace std;
double control()
{
	setlocale(LC_ALL, "Russian");
	string t;
start:
	int znak = 0, null = 0;
	getline(cin, t);
	if (t.length() == 0)
	{
		cout << "������! �� �� ����� �� ������ �������! ��������� ���� ��� ���:\n";
		goto start;
	}
	for (int i = 0; i < t.length(); i++)
	{
		if (i == 0)
		{
			if (t[0] == '0' && t.length() > 1)
			{
				if (t[0] == '0' && t[1] != '.')
				{
					cout << "������! � ������ ����� �� ����� ������ 0! ��������� ���� ��� ���:\n";
					goto start;
				}
				else if (t[0] != '0')
				{
					cout << "������! ����� ������ �����, � �� ����� ��������! ��������� ���� ��� ���:\n";
					goto start;
				}
				null++;
			}
			if ((t[0] < 48 || t[0] > 57) && t[0] != '-')
			{
				cout << "������! � ������ ����� �� ����� ������ 0! ��������� ���� ��� ���:\n";
				goto start;
			}
		}
		else if (t[t.length() - 1] == '.')
		{
			cout << "������! ����� ������ �����, � �� ����� ��������! ��������� ���� ��� ���:\n";
			goto start;
		}
		else if (t[i - 1] == '-' && t[i] == '.')
		{
			cout << "������! ����� ������ �����, � �� ����� ��������! ��������� ���� ��� ���:\n";
			goto start;
		}
		else if (t[i - 1] == '-' && t[i] == '0' && t[i + 1] != '.')
		{
			cout << "������! ����� ������ �����, � �� ����� ��������! ��������� ���� ��� ���:\n";
			goto start;
		}
		else if (t[i] == '.')
		{
			t[i] = ',';
			if (znak > 0)
			{
				cout << "������! ����� ������ �����, � �� ����� ��������! ��������� ���� ��� ���:\n";
				goto start;
			}
			znak++;
		}
		else if ((t[i] < 48 || t[i] > 57) && t[i] != '.')
		{
			cout << "������! ����� ������ �����, � �� ����� ��������! ��������� ���� ��� ���:\n";
			goto start;
		}
		else if (t[i] == '0')
		{
			null++;
		}
	}
	if (t[0] == '-' && znak == 1)
	{
		if (t.length() - 2 == null)
		{
			cout << "������! ������������ ���� �����! ��������� ���� ��� ���:\n";
			goto start;
		}
	}
	else if (znak == 1)
	{
		if (t.length() - 1 == null)
		{
			cout << "������! ������������ ���� �����! ��������� ���� ��� ���:\n";
			goto start;
		}
	}
	double number = stod(t);
	return number;
}

bool verification(int o)
{
	if (o == 0 || o > 1)
	{
		return false;
	}
	else
	{
		return true;
	}
}

void sum(komplex komplex_number_1, komplex komplex_number_2)
{
	if (komplex_number_1.y >=0)
	{
		if (komplex_number_2.y >= 0)
		{
			cout << "\t\t\t\t\t�����\n z1 + z2 = ( " << komplex_number_1.x << " + " << komplex_number_1.y << " * i) + ( " << komplex_number_2.x << " + " << komplex_number_2.y << " * i) = " << (komplex_number_1.x + komplex_number_2.x) << " + " << (komplex_number_1.y + komplex_number_2.y) << " * i\n";
		}
		else
		{
			if (komplex_number_1.y + komplex_number_2.y >= 0)
			{
				cout << "\t\t\t\t\t�����\n z1 + z2 = ( " << komplex_number_1.x << " + " << komplex_number_1.y << " * i) + ( " << komplex_number_2.x << " + ( " << komplex_number_2.y << ") * i) = " << (komplex_number_1.x + komplex_number_2.x) << " + " << (komplex_number_1.y + komplex_number_2.y) << " * i\n";
			}
			else
			{
				cout << "\t\t\t\t\t�����\n z1 + z2 = ( " << komplex_number_1.x << " + " << komplex_number_1.y << " * i) + ( " << komplex_number_2.x << " + ( " << komplex_number_2.y << ") * i) = " << (komplex_number_1.x + komplex_number_2.x) << " + ( " << (komplex_number_1.y + komplex_number_2.y) << ") * i\n";
			}
		}
	}
	else
	{
		if (komplex_number_2.y >= 0)
		{
			if (komplex_number_1.y + komplex_number_2.y >= 0)
			{
				cout << "\t\t\t\t\t�����\n z1 + z2 = ( " << komplex_number_1.x << " + ( " << komplex_number_1.y << ") * i) + ( " << komplex_number_2.x << " + " << komplex_number_2.y << " * i) = " << (komplex_number_1.x + komplex_number_2.x) << " + " << (komplex_number_1.y + komplex_number_2.y) << " * i\n";
			}
			else
			{
				cout << "\t\t\t\t\t�����\n z1 + z2 = ( " << komplex_number_1.x << " + ( " << komplex_number_1.y << ") * i) + ( " << komplex_number_2.x << " + " << komplex_number_2.y << " * i) = " << (komplex_number_1.x + komplex_number_2.x) << " + ( " << (komplex_number_1.y + komplex_number_2.y) << ") * i\n";
			}
		}
		else
		{
			cout << "\t\t\t\t\t�����\n z1 + z2 = ( " << komplex_number_1.x << " + ( " << komplex_number_1.y << ") * i) + ( " << komplex_number_2.x << " + ( " << komplex_number_2.y << ") * i) = " << (komplex_number_1.x + komplex_number_2.x) << " + ( " << (komplex_number_1.y + komplex_number_2.y) << ") * i\n";
		}
	}

}

void sub(komplex komplex_number_1, komplex komplex_number_2)
{
	if (komplex_number_1.y >= 0)
	{
		if (komplex_number_2.y >= 0)
		{
			if (komplex_number_1.y - komplex_number_2.y >= 0)
			{
				cout << "\t\t\t\t\t�����\n z1 - z2 = ( " << komplex_number_1.x << " + " << komplex_number_1.y << " * i) - ( " << komplex_number_2.x << " + " << komplex_number_2.y << " * i) = " << (komplex_number_1.x - komplex_number_2.x) << " + " << (komplex_number_1.y - komplex_number_2.y) << " * i\n";
			}
			else
			{
				cout << "\t\t\t\t\t�����\n z1 - z2 = ( " << komplex_number_1.x << " + " << komplex_number_1.y << " * i) - ( " << komplex_number_2.x << " + " << komplex_number_2.y << " * i) = " << (komplex_number_1.x - komplex_number_2.x) << " + ( " << (komplex_number_1.y - komplex_number_2.y) << ") * i\n";
			}
		}
		else
		{
			cout << "\t\t\t\t\t�����\n z1 - z2 = ( " << komplex_number_1.x << " + " << komplex_number_1.y << " * i) - ( " << komplex_number_2.x << " + ( " << komplex_number_2.y << ") * i) = " << (komplex_number_1.x - komplex_number_2.x) << " + " << (komplex_number_1.y - komplex_number_2.y) << " * i\n";
		}
	}
	else
	{
		if (komplex_number_2.y >= 0)
		{
			cout << "\t\t\t\t\t�����\n z1 - z2 = ( " << komplex_number_1.x << " + ( " << komplex_number_1.y << ") * i) - ( " << komplex_number_2.x << " + " << komplex_number_2.y << " * i) = " << (komplex_number_1.x - komplex_number_2.x) << " + ( " << (komplex_number_1.y - komplex_number_2.y) << ") * i\n";
		}
		else
		{
			if (komplex_number_1.y - komplex_number_2.y >= 0)
			{
				cout << "\t\t\t\t\t�����\n z1 - z2 = ( " << komplex_number_1.x << " + ( " << komplex_number_1.y << ") * i) - ( " << komplex_number_2.x << " + ( " << komplex_number_2.y << ") * i) = " << (komplex_number_1.x - komplex_number_2.x) << " + " << (komplex_number_1.y - komplex_number_2.y) << " * i\n";
			}
			else
			{
				cout << "\t\t\t\t\t�����\n z1 - z2 = ( " << komplex_number_1.x << " + ( " << komplex_number_1.y << ") * i) - ( " << komplex_number_2.x << " + ( " << komplex_number_2.y << ") * i) = " << (komplex_number_1.x - komplex_number_2.x) << " + ( " << (komplex_number_1.y - komplex_number_2.y) << ") * i\n";
			}
		}
	}
}

void mul(komplex komplex_number_1, komplex komplex_number_2)
{
	cout << "\t\t\t\t\t�����\n z1 * z2 = ( " << komplex_number_1.x << " + ";
	if (komplex_number_1.y >= 0)
	{
		cout << komplex_number_1.y << " * i) * ( " << komplex_number_2.x << " + ";
	}
	else
	{
		cout << "( " << komplex_number_1.y << ") * i) * ( " << komplex_number_2.x << " + ";
	}
	if (komplex_number_2.y >= 0)
	{
		cout << komplex_number_2.y << " * i) = " << (komplex_number_1.x * komplex_number_2.x - komplex_number_1.y * komplex_number_2.y) << " + ";
	}
	else
	{
		cout << "( " << komplex_number_2.y << ") * i) = " << (komplex_number_1.x * komplex_number_2.x - komplex_number_1.y * komplex_number_2.y) << " + ";
	}
	if (komplex_number_1.x * komplex_number_2.y + komplex_number_2.x * komplex_number_1.y >= 0)
	{
		cout << (komplex_number_1.x * komplex_number_2.y + komplex_number_2.x * komplex_number_1.y) << " * i\n";
	}
	else
	{
		cout << "( " << (komplex_number_1.x * komplex_number_2.y + komplex_number_2.x * komplex_number_1.y) << ") * i\n";
	}
}

void div(komplex komplex_number_1, komplex komplex_number_2)
{
	cout << "\t\t\t\t\t�����\n z1 / z2 = ( " << komplex_number_1.x << " + ";
	if (komplex_number_1.y >= 0)
	{
		cout << komplex_number_1.y << " * i) / ( " << komplex_number_2.x << " + ";
	}
	else
	{
		cout << "( " << komplex_number_1.y << ") * i) / ( " << komplex_number_2.x << " + ";
	}
	if (komplex_number_2.y >= 0)
	{
		cout << komplex_number_2.y << " * i) = " << float(komplex_number_1.x * komplex_number_2.x + komplex_number_1.y * komplex_number_2.y) / (komplex_number_2.x  * komplex_number_2.x + komplex_number_2.y * komplex_number_2.y) << " + ";
	}
	else
	{
		cout << "( " << komplex_number_2.y << ") * i) = " << float(komplex_number_1.x * komplex_number_2.x + komplex_number_1.y * komplex_number_2.y) / (komplex_number_2.x  * komplex_number_2.x + komplex_number_2.y * komplex_number_2.y) << " + ";
	}
	if (float(komplex_number_2.x * komplex_number_1.y - komplex_number_1.x * komplex_number_2.y) / (komplex_number_2.x  * komplex_number_2.x + komplex_number_2.y * komplex_number_2.y) >= 0)
	{
		cout << float(komplex_number_2.x * komplex_number_1.y - komplex_number_1.x * komplex_number_2.y) / (komplex_number_2.x  * komplex_number_2.x + komplex_number_2.y * komplex_number_2.y) << " * i\n";
	}
	else
	{
		cout << "( " << float(komplex_number_2.x * komplex_number_1.y - komplex_number_1.x * komplex_number_2.y) / (komplex_number_2.x  * komplex_number_2.x + komplex_number_2.y * komplex_number_2.y) << ") * i\n";
	}
}