#include <iostream>
using namespace std;

int main()
{
    int a = 2;
    int b = 5;
    int expr_one, expr_two;

    expr_one = 5*a - 2*b;  
    expr_two = (4*a + 8*b) % (b-1); 

    while(expr_one = expr_two) {
        expr_one += 5;
        expr_two--;
		cout << expr_one << endl;
    }

    return 0;
}
