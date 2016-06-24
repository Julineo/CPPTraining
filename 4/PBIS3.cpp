/*
Write a C++ program to print the following pattern.
   *
  ***
 *****
*******
*/

#include <iostream>
using namespace std;

int main()
{
	int n; // number of rows
    cout << "Enter n:" << endl;
	cin >> n;
	
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n-i; j++)
		{
			cout << " ";
		}
		for (int k = 1; k <= i; k++)
		{
			cout << "*";
		}
		for (int m = 1; m <= i - 1; m++)
		{
			cout << "*";
		}
		cout << endl;
	}
    return 0;
}
