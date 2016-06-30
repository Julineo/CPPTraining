/*
Rewrite the program written in 6 (A) using while loop
*/
#include <iostream>
using namespace std;
int main()
{	
	int i = 10;
	while (i <= 30)
	{
		cout << i << "     " << i*9/5+32 << endl;
		i++;
	}
}