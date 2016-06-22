#include <iostream>
using namespace std;

int main()
{
    char c;
	int asciiVal;
    cout << "Enter a character:" << endl;
	cin >> c;
	asciiVal = (int) c; //explicit type conversions are always better, you can avoid "surprises" in the future
	
	cout << "The ASCII value of character " << c << " is " << asciiVal<< endl;

    return 0;
}
