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

int concatenate (int x, int y) {
    int pow = 10;
    while (y >= pow)
        pow *= 10;
    return x * pow + y;        
}

int main()
{
    long long int rpm; int years; long long int finalRPM;
    rpm = 7024;
	int NextRPM = rpm;
	int MaxRPM = 8 * rpm;
	cout << "MaxRPM:" << endl;
	cout << MaxRPM <<endl;
	years = 1;
	

	
	while (years <= 10)
	{
        //1. SSD

		int sqdnumber = NextRPM;
	    int sqdNumber_result;
	    int rest_of_digits = sqdnumber;
	    int digit = rest_of_digits % 10;  //getting the last digit
	    sqdNumber_result = digit * digit; //first square
        while (rest_of_digits != 0)
        {
            rest_of_digits = (rest_of_digits - digit)/10;  //getting last digits one by one in the loop
		    digit = rest_of_digits % 10;
	    	sqdNumber_result = sqdNumber_result + digit * digit;  //summing squares = SSD
        }
		int SSD = sqdNumber_result;
	    //cout << sqdNumber_result << endl;
		
		//2. SSD * 323
		int A = SSD * 323;
		
		//3. Cyclic Right Shift
		int lastDigit = NextRPM % 10;  //getting the last digit
		int otherDigits = (NextRPM - lastDigit)/10; //rest of the digits
		int B = concatenate(lastDigit, otherDigits); //concatenation
		
		//4/ A + last 2 digits of B
		int RightLastDigit = B % 10;  //getting the last rigt digit
		int RightOtherDigits = (B - RightLastDigit)/10; //rest of the digits
		int LeftLastDigit = RightOtherDigits % 10;  //getting the last left digit
		NextRPM = A + concatenate(LeftLastDigit, RightLastDigit);
		
		cout << "NextRPM:" << endl;
		cout << NextRPM << endl;
		
		if ((NextRPM >= MaxRPM) || (years == 10))
		{
		break;
		}
		//cout << NextRPM << endl;
		years++;
	};

			
	cout << "years:";
	cout << years << endl;
	finalRPM = NextRPM;
	cout << finalRPM << endl;
    return 0;
}