/*
Write a C++ program to accept 'n' positive numbers from the user and print the second highest number. Sample input and output statemens are given below:
   Enter n: 8
   Enter 8 positive numbers: 23 45 21 20 8 34 67 47
   From the 8 given numbers, the second highest number is 45
   
   Test case:    Enter 7 positive numbers: 23 45 21 20 8 34 67
*/

#include <iostream>
using namespace std;

int main() //check if a vovel
{
	int n;
    cout << "Enter n:" << endl;
	cin >> n;
	int temp, hn = 0, shn = 0;
	cout << "Enter " << n << " positive numbers:" << endl;
	
	for (int i = 1; i <= n; i++)
	{
		cin >> temp;
		if (temp > hn)
		{
			shn = hn;
			hn = temp;
		}
		else if (temp < hn && temp > shn)// if number between highest number and second highest number we update second highest number only
		{
			shn = temp;
		}
	}
	cout << "From the " << n << " given numbers, the second highest number is " << shn;
    return 0;
}
