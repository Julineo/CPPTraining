#include <iostream>
using namespace std;

int main()
{
    float number;
	float fract;
	int decim;
    cout << "Enter a floating point number:" << endl;
	cin >> number;
	decim = (int) number; //getting decimal part of the number
	fract = number - decim; //getting fractional part of the number
	
	cout << "Fractional part of the number " << number << " is " << fract<< endl;

    return 0;
}
