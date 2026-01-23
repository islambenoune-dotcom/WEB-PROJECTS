#include <cmath>
#include <iostream>
float readcircumrefernce()
{
    float L;
    cout << "please enter a circumrefrence" << endl;
    cin >> L;
    return L;
}
float calculatecirclearea(float L)
{
    const float PI = 3.14;
    float AREA = pow(L, 2) / (4 * PI);
    return AREA;
}
void printresult(float AREA)
{
    cout << "your area is" << AREA << endl;
}
using namespace std;
int main()
{
    printresult(calculatecirclearea(readcircumrefernce()));
}

