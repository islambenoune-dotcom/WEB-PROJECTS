#include <cmath>
#include <iostream>
#include <string>
using namespace std;
void readgradedata(int x[3])
{
	cout << "please enter the grade number 1" << endl;
	cin >> x[0];
	cout << "please enter the grade number 2" << endl;
	cin >> x[1];
	cout << "please enter the grade number 3" << endl;
	cin >> x[2];
}
void printgradedata(int x[3])
{
	cout << "the grade number 1 is " << x[0] << endl;
	cout << "the grade number 2 is" << x[1] << endl;
	cout << "the grade number 3 is " << x[2] << endl;
}
void calclategradeaverage(int x[3]) {

	cout << "the average of those 3 grades is " << endl;
	cout << (x[0] + x[1] + x[2]) / 3 << endl;

}
int main()
{
	int x[3];
	readgradedata(x);
	printgradedata(x);
	calclategradeaverage(x);

}


