#include <iostream>
using namespace std;

int main() //check which years are leap years
{
	int year; // year variable
    cout << "Enter year:";
	cin >> year;
	
	if (((year % 4) == 0)/*The year can be evenly divided by 4*/ && (((year % 100) != 0)  || ((year % 400) == 0)))//If the year can be evenly divided by 100, it is NOT a leap year, unless The year is also evenly divisible by 400. Then it is a leap year.
	{ 
		cout << "The year entered is a leap year";
	}
	else
	{
		cout << "The year entered is not a leap year";
	}
    return 0;
}
