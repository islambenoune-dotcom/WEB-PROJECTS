// countnue statement.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
using namespace std;
int main()
{
	int number=0;
	int sum = 0;
	for (int i = 1; i <= 5; i++)
	{
		cout << "enter a number";
		cin >> number;

		if (number > 50)
		{
			cout << "the number is greater than 50 " << endl;
				continue;
		}
		sum += number;
		cout << sum << endl;
	}





}

