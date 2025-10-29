#include <cmath>
#include <string>
#include <iostream>
using namespace std;
struct stinfo
{
    string firstname;
    string lastname;
    int age;
    int monthlysalary;
    int yearlysalary;
    string gender;

};
void readinfo(stinfo& info)
{
    cout << "******************************************************************\n";
    cout << "please enter your first name" << endl;
    cin >> info.firstname;
    cout << "please enter your lastname" << endl;
    cin >> info.lastname;
    cout << "please enter your age " << endl;
    cin >> info.age;
    cout << "please enter your monthly salary" << endl;
    cin >> info.monthlysalary;
    cout << "please enter your yearlysalary" << endl;
    cin >> info.yearlysalary;
    cout << "please enter your gender" << endl;
    cin >> info.gender;
    cout << "*********************************************************************\n";

}
void printinfo(stinfo info)
{
    cout << "*********************************************************************\n";
    cout << "your first name is " << info.firstname << endl;
    cout << "your last name is " << info.lastname << endl;
    cout << "your age is " << info.age << endl;
    cout << "your monthly salary is " << info.monthlysalary << endl;
    cout << "your yearly salary is " << info.yearlysalary << endl;
    cout << "your gender is " << info.gender << endl;
    cout << "*********************************************************************\n";

}
int main()
{
    
    stinfo person1info;
    readinfo(person1info);
    printinfo(person1info);

}

