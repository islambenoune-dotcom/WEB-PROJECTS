

#include <iostream>
using namespace std;
#include <string>
int main()
{
	string FullName;
	string MyString = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	cout << "my string length is :" << MyString.length() << endl;
	cout << MyString[2] << endl;//will print C

	string s1 = "10", s2 = "20";
	string s3 = s1 + s2;// will print 1020
	cout << s3 << endl;

	int sum;
	sum = stoi(s1) + stoi(s2);// will print 30
	cout << sum << endl;
	//this is how to read space in string 
	getline(cin, FullName);
	cout << FullName << endl;
}

