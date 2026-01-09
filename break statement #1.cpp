// break statement #1.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
using namespace std;
int main()
{
	int arr[10]{ 10,20,30,40,50,60,70,80,90,100, };
	int searchfor = 20;
	for (int i = 0; i <= 10; i++)
	{
		cout << i + 1 << endl;
		if (searchfor == arr[i])
		{

			cout << endl << searchfor << "found at position" << i << endl;
			break;
		}
			



	}


}

