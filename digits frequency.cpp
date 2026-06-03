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
int frequencyofdigits(short digittocheck , int number)
{
    int freqcount = 0;
    int remainder = 0;
    while (number > 0)
    {
        remainder = number % 10;
        number = number / 10;

        if (digittocheck == remainder)
        {
            freqcount++;

        }



    }

    return freqcount;


}
int main()
{
    int number = readpositivenumber("please enter a positive number");
    short digittocheck = readpositivenumber("please enter a digit to check");
    cout << "\n digit  " <<  digittocheck << "frequency is "
        << frequencyofdigits(digittocheck, number) << "times \n";



    return 0;


}

