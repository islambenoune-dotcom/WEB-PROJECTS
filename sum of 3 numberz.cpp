#include <string>
#include <iostream>
using namespace std;
void readnumbers(int &num1,int &num2,int &num3)
{
	cout << "please enter a number" << endl;
	cin >> num1;
	cout << "please enter a number" << endl;
	cin >> num2;
	cout << "please enter a number" << endl;
	cin >> num3;
}
int sumofnumbers(int num1,int num2,int num3)
{

	return num1 + num2 + num3;
}
void printresult(int total)
{
	cout << "the total of those 3 numbers is " << total << endl;

}
int main()
{
	int num1;
	int num2;
	int num3;
	readnumbers(num1, num2, num3);
	printresult(sumofnumbers(num1, num2, num3));
}

