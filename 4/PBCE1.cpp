#include <iostream>
using namespace std;

int main()
{
	int n1, n2, temp;
    cout << "Enter value for Number 1:";
	cin >> n1;
	cout << "Enter value for Number 2:";
	cin >> n2;

	temp = n1;
	n1 = n2;
	n2 = temp;
	
	cout << "The modified values after swapping are:" << endl;
	cout << "Number 1:";
	cout << n1 << endl;
	cout << "Number 2:";
	cout << n2 << endl;
	
    return 0;
}
