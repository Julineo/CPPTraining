/* Question:  You are required to write code that does the following:-

1. Find out the sum of the squares of the digits of the rpm
2. Multiply the number obtained in (1) by 323
3. Do a cyclic right shift of digits of the rpm i.e. 
    if Number is 1234, after cyclic right shift, the number will be 4123. 
    Thereafter, take the last two digits of the number obtained just now, and add it to the number obtained in point 2. Thus, obtaining a new rpm value.
4. Do these steps till the number of years are 10 or the harddisk has reached the maximum RPM

long long int rpm: Original value of RPM
int years: Store the number years that have elapsed
long long int finalRPM: Store the modified value of RPM i.e. the final of RPM */

/*
void solutionRPM(long long int rpm, int &years, long long int &finalRPM) {

    //Write your solution code below this line

}
*/
#include <iostream>
using namespace std;
int main()
{
    long long int rpm; int years; long long int finalRPM;
    rpm = 5524;
	int NextRPM = rpm;
	years = 1;
	

	
	while (years < 10)
	{
        //1.
		int A;
		int B;
		int sqdnumber = NextRPM;
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
		NextRPM = sqdNumber_result;
	    cout << sqdNumber_result << endl;
		
		//2.
		A = NextRPM * 323;
		
		//3.
		B = 1;//Cyclic right shift
	
	
	cout << years;
	years++;
	};
	
	
	cout << years << endl;
	cout << finalRPM << endl;
    return 0;
}