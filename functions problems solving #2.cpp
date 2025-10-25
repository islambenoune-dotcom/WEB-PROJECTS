// this is how to write a problem to calculate circle area using functions
#include <iostream>
#include <cmath>
using namespace std;
float mycircle(float P, float A)
{


    return P * pow(A, 2);
}
int main()
{
    cout << mycircle(3.14, 5) << endl;
}

