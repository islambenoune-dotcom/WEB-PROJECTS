#include <cmath>
#include <string>
#include <iostream>
using namespace std;
struct person1info
{
    string firstname;
    string lastname;
    int age;
    string phone;


};
void readinfo(person1info &info)
{
    cout << "please enter your fist name " << endl;
    cin >> info.firstname;
    cout << "please enter your last name " << endl;
    cin >> info.lastname;
    cout << "please enter your age " << endl;
    cin >> info.age;
    cout << "please enter your phone number" << endl;
    cin >> info.phone;


}
void printinfo(person1info info)
{

    cout << "***************************\n";
    cout << "your first name is " << info.firstname << endl;
    cout << " your lastname is " << info.lastname << endl;
    cout << "your age is " << info.age << endl;
    cout << " your ohone number is " << info.phone << endl;





}
int main()
{
    person1info strinfo;
    readinfo( strinfo);
    printinfo(strinfo);
    //you can also add person2 information without repeat the same code you can only type

    person1info strinfo2;
    readinfo(strinfo2);
    printinfo(strinfo2);






}

