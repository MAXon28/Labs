#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	string email;
	cout << "¬ведите электронную почту: ";
	bool isTrue = false;
	int count = 0;
	while (isTrue != true)
	{
		if (count != 0)
		{
			cout << "Ёлектронна€ почта введена неверно! ѕопробуйте ещЄ раз: ";
		}
		cin >> email;
		for (int i = 0; i < email.length(); i++)
		{
			if (email[i] == '-' && email[i - 1] == '-')
			{
				break;
				isTrue = false;
			}
			if (i + 1 == email.length())
			{
				isTrue = true;
			}
		}
		count++;
	}
    cout << "Ёлектронна€ почта введена верно!";
}