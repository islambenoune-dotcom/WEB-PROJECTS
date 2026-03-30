#include <cmath>
#include <iostream>
using namespace std;
enum enoperationtype
{
	add = '+', devide = '/', multiply = '*', minus = '-' 
};
float readnumber(string message)
{
	float number = 0;
	cout << message << endl;
	cin >> number;
	return number;
}
enoperationtype readoptype()
{
	char ot = '+';
	cout << "please enter an operation type + - * ";
	cin >> ot;
	return (enoperationtype)ot;
}
float calculate(float number1, float number2,  enoperationtype OpType)
{

	switch (OpType)
	{
	case enoperationtype::add:
	
			return number1 + number2;
	case enoperationtype::minus:
		return number1 - number2;
	case enoperationtype::multiply:
		return number1 * number2;
	case enoperationtype::devide:
		return number1 / number2;
	default:
		return number1 + number2;
	}


}
int main()
{

	float number1 = readnumber("please enter the first number?");
	float number2 = readnumber("please enter the second number?");
	enoperationtype OpType = readoptype();
	cout << endl << "Result = " << calculate(number1, number2, OpType) << endl;







}

