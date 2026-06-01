#include <iostream>
#include <string>
using namespace std;
int readpositivenumber(string message)
{
    int number = 0;
    do
    {
        cout << message << endl;
        cin >> number;
    } while (number <= 0);


        return number;
}
int printnumbersinreverse(int number)
{
    int remainder = 0;
    int number2 = 0;
    while (number > 0)
    {
        remainder = number % 10;
        number = number / 10;
        number2 = number2 * 10 + remainder;

    }
    return number2;
}
int main()
{
 
    cout << "\n reversed is = \n"
        << printnumbersinreverse(readpositivenumber("please enter a positive number "))
            << "\n";


}

