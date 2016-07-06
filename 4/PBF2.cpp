/*
Calculate nCr. Take inputs from user and check for base conditions like r <= n and r>=0.
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

int main() //nCr
{
	cout << "Enter n: ";
	int n;
	cin >> n;
	
	cout << "Enter r: ";
	int r;
	cin >> r;
	
	if ( r <= n and r >= 0) 
	{
		cout << "The nCr is " << fac(n)/(fac(r)*fac(n-r));
	}
	else
	{
		cout << "Wrong n and r";
	}
	
    return 0;
}
