#include <iostream>
using namespace std;

int main()
{
	int n, temp;
    cout << "Enter a Number:";
	cin >> n;

    switch(n)
	{
		case 1: cout << "iPad" << endl;
			break;
		case 2: cout << "Nokia" << endl;
			break;
		case 3: cout << "Samsung" << endl;
			break;
		default: cout << "Aakash" << endl;
	}	
	
    return 0;
}
