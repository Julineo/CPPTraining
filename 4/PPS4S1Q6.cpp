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
         n = n*i + jack(n, i+1);
    }
     else 
         return 0; 
}

int jill(int n, int i) 
{
    if(i != 0) 
      n = jill(n, i-1) + n*i; 
    else 
        return n*i;
}

int main() 
{
   int n;
   cout << "Enter a number " << endl;
   cin >> n;
   cout << jack(n,1) << endl;
   cout << jill(n,10) << endl;
   return 0;
}