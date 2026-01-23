
#include <iostream>
using namespace std;
int readage()
{
	int age;
	cout << "please enter your age " << endl;
	cin >> age;
	return age;
}
bool checkage(int number,int from, int to)
{
	return (number >= from && number <= to);

}
void printresult(int age)
{
	if (checkage(age ,18, 45))
		cout << age << " is valid age \n";
	else
		cout << age << " is invalid age\n";


}
int main()
{
	printresult(readage());
	return 0;
}
