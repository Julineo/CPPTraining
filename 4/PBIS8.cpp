/*
Write a C++ program to accept three numbers, 'a', 'n', and 'd' from the user, and print the arithmetic sequence: 
{ a, a + d, a + 2d, ..., a + nd }. Sample input/output statements are given below:
   Enter a: 5
   Enter d: 2
   Enter n: 4
   Substituting value of 'a', 'd', and 'n' in the sequence {a, a+d, a+2d, ..., a+nd}
   = {5, 5 + 2, 5 + 2*2, 5 + 3*2, 5 + 4*2}
   = {5, 7, 9, 11, 13}
*/
#include <iostream>
using namespace std;
int main()
{	
	int a, d, n;
	cout << "Enter a: ";
	cin >> a;
	cout << "Enter d: ";
	cin >> d;
	cout << "Enter n: ";
	cin >> n;
	
	//first line
	cout << "Substituting value of 'a', 'd', and 'n' in the sequence {a, a+d, a+2d, ..., a+nd}" << endl;
	
	//second line
	cout << "= {" << a;
	for (int i = 1; i <= n; i++)
	{
		cout << ", " << a << " + " << i << "*" << d;
	}
	cout << "}" << endl;

	//third line
	cout << "= {" << a;
	for (int i = 1; i <= n; i++)
	{
		cout << ", " << a + i * d;
	}
	cout << "}" << endl;
}