/*
Write a C++ program that prints a conversion table from Centigrade to Fahrenheit, from 10oC to 30oC using for loop. The output should be similar to the one given below.
Centigrade   Fahrenheit
    10          50
    11          51.8
    ..          ..
    ..          ..
    29          84.2
    30          86
*/
#include <iostream>
using namespace std;
int main()
{
	for (int i = 10; i <= 30; i++)
	{
		cout << i << "     " << i*9/5+32 << endl;
	}
}