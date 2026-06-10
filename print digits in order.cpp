#include <iostream>
#include <string>
using namespace std;
int readpostivenumber(string message)
{
    int number = 0;
    do
    {
        cout << message;
        cin >> number;

    } while (number <= 0);
    return number;

}
int reversenumber(int number)
{
    int number2 = 0;
    int remainder = 0;

    while (number > 0)
    {
        remainder = number % 10;
        number = number / 10;
        number2 = number2 * 10 + remainder;

    }


    return number2;

}
void printdigits(int number)
{
    int remainder = 0;
    while (number > 0)
    {
        remainder = number % 10;
        number = number / 10;
        cout << remainder << endl;


    }

}
int main()
{
    printdigits(reversenumber(readpostivenumber("please enter a positive number")));
}

