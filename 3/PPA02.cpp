/*
Find the sum of squares of individual digits of a number 'sqdnumber' and store the sum in variable 'sqdNumber_result'. 
E.g. if the number is 234, the sum is computed as (2^2 + 3^2 + 4^2 = 4 + 9 + 16 = 29)
*/
#include <iostream>
using namespace std;
int main()
{
    int sqdnumber = 11105;
	int sqdNumber_result;
	int rest_of_digits = sqdnumber;
	int digit = rest_of_digits % 10;  //getting the last digit
	sqdNumber_result = digit * digit; //first square
    while (rest_of_digits != 0)
    {
        rest_of_digits = (rest_of_digits - digit)/10;  //getting last digits one by one in the loop
		digit = rest_of_digits % 10;
		sqdNumber_result = sqdNumber_result + digit * digit;  //summing squares
     }
	cout << sqdNumber_result;
    return 0;
}