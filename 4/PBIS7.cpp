/*
Write a C++ program that accepts a number as input from the user, reverses it and prints the original as well the reverse. Sample input/output statements are given below:
   Enter a number: 12345
   The reverse of 12345 is 54321
*/
#include <iostream>
using namespace std;
int main()
{	
	int number;
	cout << "Enter a number: ";
	cin >> number;
	
	int out_number = 0;
	int digit;
	
	while (number > 0)
	{
		digit = number % 10;
		//number = (number - digit)/10;
		number = number/10;
		/* Note that we have chosen int data type for the variable num so that on division by 10,
            the quotient shall be the one excluding the last digit and on modulus with 10,
            we will get the required last digit.*/
		out_number = out_number * 10 + digit;
	}
cout << "The reverse is: " << out_number;
}