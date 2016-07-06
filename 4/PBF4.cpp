/*
Write a function isPrime() to determine whether the number is prime or not.  
It should return either 'true' or 'false'. 
The number should be accepted from the user in the 'main()' function. 
*/

#include <iostream>
using namespace std;

bool isPrime(int n) //It should return either 'true' or 'false', so we declare it as bool type
{
	
	if (n == 1) 
	{
		return false;//return false right away, 1 is not prime
	}
	
	bool firstDiviser = false;
	bool secondDiviser = false;
	for (int i = n; i >= 2; i--) //looking for divisers
	{ 
		if ((n % i) == 0)
		{
			if (firstDiviser)
				{
					secondDiviser = true;// make secondDiviser true only if firstDiviser is true.
					break; // no need to check further
				}
			firstDiviser  = true; 
		}
	}
	return (firstDiviser & ! secondDiviser);
}

int main() //
{
	cout << "Enter number: ";
	int number;
	cin >> number;
	
	cout << "Is prime? " << isPrime(number); //output true 1 or false 0
	
    return 0;
}
