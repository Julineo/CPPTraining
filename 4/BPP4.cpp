#include <iostream>
using namespace std;

int main()
{
	int a, b;
    cout << "Enter a:" << endl;
	cin >> a;
	cout << "Enter b:" << endl;
	cin >> b;

	cout << "(" << a << " + " << b << ")^2" << endl;
	cout << "= " << a << "^2 + 2*" << a << "*" << b << " + " << b << "^2" << endl;
	cout << a*a << " + " << 2*a*b << " + " << b*b << endl;
	cout << a*a + 2*a*b + b*b << endl;
	
    return 0;
}
