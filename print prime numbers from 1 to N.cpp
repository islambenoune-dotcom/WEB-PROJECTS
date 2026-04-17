#include <iostream>
#include <string>
using namespace std;
enum enprimennotprime { prime = 1, notprime = 2 };
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
enprimennotprime checkprime(int number)
{
    int m = round(number / 2);
    for (int counter = 2; counter <= m; counter++)
    {
        if (number % counter == 0)
            return enprimennotprime::notprime;
    }
    return enprimennotprime::prime;
}
void printprimenumbers(int number)
{
    cout << "\n";
    cout << "prime numbers from " <<  1 << "  to " <<  number ;
    cout << "ARE :" << endl;
    for (int i = 1; i <= number; i++)
    {

        if (checkprime(i) == enprimennotprime::prime)
        {

            cout << i << endl;

        }

    }


}

int main()
{
    printprimenumbers(readpositivenumber("please enter a positive number"));
}
