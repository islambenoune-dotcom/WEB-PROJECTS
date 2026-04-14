
#include <iostream>
using namespace std;
void printtableheader()
{
 
    cout << "\n\n\t\t\t  multplication table from 1 to 10 \n\n";
    cout << "\t";
    for (int i = 1; i <= 10; i++)
    {

        cout << i << "\t";
    }
    cout << "\n ___________________________________________________________________________________\n";

}
string columsperator(int i)

{
    if (i < 10)
        return "  |";
    else
        return " |";

}
void printmultipicationtable()
{
    printtableheader();
    for (int i = 1; i <= 10; i++)
    {
        cout << "  " << i << columsperator(i) << "\t";
        for (int j = 1; j <= 10; j++)
        {
            cout << i * j << "\t";
        }
        cout << endl;
    }
    



}
int main()
{
    printmultipicationtable();
}
