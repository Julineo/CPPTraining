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
	
	for (int i = 1; i <= n; i++)// go through all rows
	{
		for (int j = 1; j <= n-i; j++) // n-i spaces
		{
			cout << " ";
		}
		for (int k = 1; k <= i; k++)// i stars on the left side, including the center colum
		{
			cout << "*";
		}
		for (int m = 1; m <= i - 1; m++) // i-1 stars on the right side, after center column
		{
			cout << "*";
		}
		cout << endl; // add endl at the end of every row
	}
    return 0;
}
