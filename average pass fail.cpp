#include <string>
#include <iostream>
using namespace std;
enum enpassfail{pass=1,fail=2};
void readmarks(int& mark1, int& mark2, int& mark3)
{
    cout << "please enter your mark" << endl;
    cin >> mark1;
    cout << "please enter your mark" << endl;
    cin >> mark2;
    cout << "please enter your mark" << endl;
    cin >> mark3;
}
int sumofnumbers(int mark1, int mark2, int mark3)
{

    return mark1 + mark2 + mark3;
}
float calculateaverage(int mark1, int mark2, int mark3)
{

    return (float)sumofnumbers( mark1,  mark2, mark3) / 3;

}
enpassfail checkavg(float avg)
{
    if (avg >= 50)
        return enpassfail::pass;
    else
        return enpassfail::fail;
}
void printresult(float avg)
{
    cout << " your average is " << avg << endl;
    if (checkavg(avg) == enpassfail::pass)
        cout << "you passed" << endl;
    else
        cout << "you failed" << endl;
}
int main()
{
    int mark1;
    int mark2;
    int mark3;
    readmarks(mark1, mark2, mark3);
    printresult(calculateaverage(mark1, mark2, mark3));





}

