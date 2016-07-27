/*
At first the value of 'slight' is 66 and 'someone' is 179.

Now the function 'lazy' is called with 3 parameters, i.e. 'slight', 'someone', and 'someone'.

Since the value of 'slight' is passed by value, the changes taken place in the function, do not affect the value of slight in the main. Hence, irrespective of the computations done in the function, the value printed by the statement cout << slight; is 66.
Since 'someone' is passed by reference, the compuations performed in the function will reflect in the main. 

Following computations are performed in the lazy function.
  gumboy = 179 + 179 = 358
  leaves = 358 + 179 = 537
    tree = 358 + 537 = 895

Since 'tree' is the alias for 'someone' in the main function, so the value of 'someone' is updated to 895
Thus, the ouptut of cout << someone; is 895
*/

#include <iostream>
using namespace std;

int fun(int *b, int n){
    int count=0;
    count = 6 - n;
    if(n<=0)
	{
       return 0;
	}
    else if(b[count]%3==0)
	{
       return b[count] + fun(b,n-1);
	}
    else
	{
       return b[count] - fun(b,n-1);
	}
}
int main() {
    int a[] ={12, 11, 10, 9, 8, 7};
    cout<<fun(a, 6)<<endl;
    return 0;
}
