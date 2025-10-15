

#include <iostream>
#include <string>
using namespace std;
int main()
{
	int num1 = 11;
	double num2 = 18.99;
	string st1, st2;
	num1 = num2; // implicit conversion from double to int
	num1 = int(num2);
	cout << num1 << endl;

	string  str = "145.87";
	int numint = stoi(str); // string to integer
	double numdouble = stod(str); // string to double
	float numfloat = stof(str);// string to float
	cout << numint << endl;
	cout << numdouble << endl;
	cout << numfloat << endl;
	//converting number to string
	st1 = to_string(num1);
	st2 = to_string(num2);
	cout << st1 << endl;
	cout << st2 << endl;
}


