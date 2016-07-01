/*
Write a C++ program to accept three numbers, 'a', 'r', and 'n' from the user, and print the arithmetic sequence: 
{ a, ar, ar2, ..., arn }. Sample input/output statements are given below:
   Enter a: 5
   Enter r: 2
   Enter n: 4
   Substituting value of 'a', 'r', and 'n' in the sequence {a, ar^1, ar^2, ..., ar^n}
   = {5, 5*2^1, 5*2^2, 5*2^3, 5*2^4 }
   = {5, 10, 20, 40, 80}
*/
#include <iostream>
using namespace std;
int main()
{	
	int a, r, n, powered = 1;
	cout << "Enter a: ";
	cin >> a;
	cout << "Enter r: ";
	cin >> r;
	cout << "Enter n: ";
	cin >> n;
	
	//first line
	cout << "Substituting value of 'a', 'r', and 'n' in the sequence {a, ar^1, ar^2, ..., ar^n}" << endl;
	
	//second line
	cout << "= {" << a;
	for (int i = 1; i <= n; i++)
	{
		cout << ", " << a << "*" << r << "^" << i;
	}
	cout << "}" << endl;

	//third line
	cout << "= {" << a;
	for (int i = 1; i <= n; i++)
	{
		powered = powered * r;
		cout << ", " << a * powered;
	}
	cout << "}" << endl;
}