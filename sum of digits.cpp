#include <string>
#include <iostream>
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
int sumofdigits(int number)
{
    int sum = 0;
    int remainder = 0;

    while (number > 0)
    {
        remainder = number % 10;
        number = number / 10;
        sum = sum + remainder;



    }
    return sum;



}
int main()
{

    cout << "\nsum of digits  =  "
        << sumofdigits(readpositivenumber("please enter a positive number"))
     << "\n";

    return 0;

}

