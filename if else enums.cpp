#include <cmath>
#include <iostream>
using namespace std;
enum encountrychoice{algeria = 1, moroco = 2, tunisia = 3};
int main()
{
    cout << "please enter your country\n";
    cout << " (1) algeria\n";
    cout << " (2) moroco\n";
    cout << " (3) tunisia\n";
    int c;
    encountrychoice country;
    cin >> c;
    country = (encountrychoice)c;
    if (country == encountrychoice::algeria)
    {
        cout << "your country is algeria\n";
    }
    else if (country == encountrychoice::moroco)
    {
        cout << "your country is moroco\n";

    }
    else if (country == encountrychoice::tunisia)
    {
        cout << "your country is tunisia";
    };






}

