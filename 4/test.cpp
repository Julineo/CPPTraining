#include <iostream>
using namespace std;

int jack(int n, int i) 
{
    if(i <= 10)  
	{
	     cout << "i: ";
		 cout << i << endl;
		 cout << "n: ";
		 cout << n << endl;
         n = n*i;
    }

}


int main() 
{
   int n;
   cout << "Enter a number " << endl;
   cin >> n;
   cout << jack(n,11) << endl;
   return 0;
}