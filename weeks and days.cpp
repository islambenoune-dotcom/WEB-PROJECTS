#include <cmath>
#include <iostream>
#include <string>
using namespace std;
float readpositivenumber(string message)
{
	float number = 0;
	do
	{
		cout << message << endl;
		cin >> number;
	} while (number <= 0);
	return number;
}
float hourstodays(float numberofhours)
{
	return (float)numberofhours / 24;
}
float hourstoweeks(float numberofhours)
{

	return (float)numberofhours / (24*7);
}
float daystoweek(float numberofdays)
{

	return (float)numberofdays / 7;

}
int main()
{
	float numberofhours = readpositivenumber("Please Enter Number Of Hours?");
	float numberofdays = hourstodays(numberofhours);
	float numberofweeks = daystoweek(numberofdays);

	cout << endl;



	cout << "Total Hours = " << numberofhours << endl;
	cout << "Total Days = " << numberofdays << endl;
	cout << "Total Weeks = " << hourstoweeks(numberofhours) << endl;



	return 0;







}