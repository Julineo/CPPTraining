/*
Write a C++ program to accept a positive number from the user and print its factorial. Sample input/output statements are given below:
   Enter a positive number: 5
   The factorial of 5 is 120
*/

#include <iostream>
using namespace std;

unsigned long long int fac(unsigned long long int n)//recursive factorial function. We use unsigned long long int as the largest type for factorial, cos it grows fast
{
	unsigned long long int res;
	if ((n == 1) || (n == 0))// zero or one gives one
	{
		res = 1;
	}
	else
	{
		res = fac(n - 1) * n;// recursively cal "fac" function itself
	}
	return res;
}

int main() //check if a vovel
{
	cout << "Enter a positive number: ";
	int number;
	cin >> number;
	
	cout << "The factorial of " << number << " is " << fac(number);
	
    return 0;
}
