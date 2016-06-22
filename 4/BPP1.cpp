#include <iostream>
using namespace std;

int main()
{
    int length;
	int width;
    cout << "Enter the length of the rectangle:" << endl;
	cin >> length;
	cout << "Enter the width of the rectangle:" << endl;
	cin >> width;
	
	int a = length * width;//area
	int p = 2*(length + width) ;//perimeter
	
	cout << "The area of rectangle is (l x w) = " << a << endl;
	cout << " The perimeter of rectangle is 2(l + w) = " << p << endl;

    return 0;
}
