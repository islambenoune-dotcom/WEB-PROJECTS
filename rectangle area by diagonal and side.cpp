#include <string>
#include <iostream>
#include <cmath>
using namespace std;
void readnumbers(float& A, float& B)
{
	cout << "please enter a number";
	cin >> A;
	cout << "please enter a number";
	cin >> B;
}
float calculaterectanglearea(float A, float B)
{
	float area = A * sqrt(pow(B, 2)) - pow(A, 2);
	return area;
}
void printresult(float area)
{

	cout << " rectangle area is " << area << endl;
}
using namespace std;
int main()
{
  
	float A, B;
	readnumbers(A, B);
	printresult(calculaterectanglearea( A,  B));
	
	







}

