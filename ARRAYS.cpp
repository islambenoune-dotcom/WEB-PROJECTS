#include <string>
#include <iostream>
using namespace std;
int main()
{
    int X[5] = { 22,55,67,45 };
    cout << X[0] << endl;//will print 22
    cout << X[1] << endl;//will print 55
    cout << X[2] << endl;//will print 67
    cout << X[3] << endl;//will print 45
    //you can also do  Arithmetic operations like this
    cout << X[0] + X[3] << endl;
    cout << X[2] - X[0] << endl;
    cout << X[2] / X[3] << endl;
    //you can also calculate the grades and do the avg
    int S[3];
    cout << "please enter the grade number 1" << endl;
    cin >> S[0];
    cout << "please enter the grade number 2" << endl;
    cin >> S[1];
    cout << "please enter the grade number 3" << endl;
    cin >> S[2];
    cout<<"the averge is " << (S[0] + S[1] + S[2]) / 3 << endl;
}

