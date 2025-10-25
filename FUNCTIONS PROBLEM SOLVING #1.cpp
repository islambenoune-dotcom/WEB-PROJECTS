// this is how to write a program using functions to calculate rectangle area through diagonal and side area 

#include <iostream>
#include <cmath> 
#include <string>
using namespace std;
float myrectangle(float A , float B )
{


    return A * sqrt(pow(B, 2) - pow(A, 2));
}
int main()
{
    cout << myrectangle(5, 40) << endl;
}

