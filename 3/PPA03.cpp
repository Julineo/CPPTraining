/*
A number is called a happy number, if you repeat the process, 
of squaring the sum of the digits, till the value 1 is obtained.
The number to be determined whether it is happy or not:
Happy:
Number	Computation	Result	Cycle / Iteration
19	9^2 + 1^2					82	1
82	2^2 + 8^2					68	2
68	8^2 + 6^2					100	3
100	0^2 + 0^2 + 1^2				1	4
Stop computing further, as the Result obtained is 1. Hence, the number '19', is a happy number.

Not Happy:
Number	Computation	Result	Cycle
3	3^2 								9	1
9	9^2 								81	2
81	1^2 + 8^2					65	3
65	5^2 + 6^2					61	4
61	1^2 + 6^2					37	5
37	7^2 + 3^2					58	6
58	8^2 + 5^2					89	7
89	9^2 + 8^2					145	8
145	5^2 + 4^2 + 1^2			42	9
42	2^2 + 4^2					20	10
Stop computing further, as we are allowed to compute for 10 cycles only.
*/
#include <iostream>
using namespace std;
int main()
{
    int number; int finalNumber; int cycle_no;
    int number_intern = number; //number is gona be external variable we can't change, so we copy it's value to inner variable	
	number_intern = 3;
	
	for (int i = 1; i < 11; i++)
	{
	
        int sqdnumber = number_intern;
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
	    number_intern = sqdNumber_result;
		if ((number_intern == 1) || (i == 10))
		{
		    finalNumber = number_intern;
			cycle_no = i;
			break;
		}
	}
	cout << finalNumber << endl;
	cout << cycle_no << endl;
    return 0;
}