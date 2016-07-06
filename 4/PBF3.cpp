/*
A number is said to be perfect if it is equal to the sum of all numbers which are its factors (excluding itself). 
So, for example, 6 is a perfect number, because, it is the sum of its factors (1, 2, 3). 
Write a function 'checkPerfect()' with appropriate parameters to print the factors of the number and whether the number is perfect or not. 
Accept the number from the user in the 'main()' function.
*/

#include <iostream>
using namespace std;

void checkPerfect(int n)
{
	int sum = 0;
	cout << "Factors: ";
	for (int i = 1; i < n; i++)
	{	
		if ((n % i) == 0)
		{
			sum += i;//we keep adding the factors in this cumulative sum
			cout << i << " ";
		}
	}
	cout << endl;
	
	if (n == sum)
	{
		cout << "Perfect Number";
	}
	else
	{
		cout << "Not Perfect Number";
	}
}

int main() //
{
	cout << "Enter number: ";
	int number;
	cin >> number;
	
	checkPerfect(number);
	
    return 0;
}
