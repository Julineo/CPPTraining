/*
Write a C++ program to accept a positive number 'n' from the user and print first 'n' prime numbers. Sample input/output statements are given below:
   Enter a number: 7
   First 7 prime numbers are:
   2
   3
   5
   7
   11
   13
   17
*/
#include <iostream>
using namespace std;
int main()
{
   unsigned int n;            //input number of primes to find, not very effective algorithm O(n log(n)) complexity, we use it just for cpp practice
   int forPause;
   
   cout << "Enter a number: ";
   cin >> n;
   cout << "First " << n << " prime numbers are:" << endl;
   
   int i = 0; //number of primes found
   int f = 0; //number of factors

	for (int j = 2; true; j++)
	{
		f = 0; //set number of factors to zero
		for (int k = j; k > 1; k--)
		{
			if ((j % k) == 0)
			{
				f++;
				if (f > 1)
					break; //we don't need to check further if there are more than one factor
			}
		}
		if (f == 1) //only one factor, the number is prime
		{
			cout << j << endl;
			i++;
		}
		if (i >= n)
		{
			break;
		}
	}
}