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
