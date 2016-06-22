#include <iostream>
using namespace std;

int main() //check if the triangle is right angled
{
	int s1, s2, s3; // sides of a triangle
    cout << "Enter Length for Side 1:";
	cin >> s1;
	cout << "Enter Length for Side 2:";
	cin >> s2;
    cout << "Enter Length for Side 3:";
	cin >> s3;
	
	bool c; //flag to signal the triangle is right angled
	
	if (s1*s1 == s2*s2 + s3*s3)//Pythagorian theorem
	{
		c = 1;
	}
	else if (s2*s2 == s3*s3 + s1*s1)
	{
		c = 1;
	}
	else if (s3*s3 == s1*s1 + s2*s2)
	{
		c = 1;
	}
	else
	{
		c = 0;
	}
	
	if (c)
	{
	    cout << "The given triangle is a right angled triangle.";
	}
	else
	{
		cout << "The given triangle is not a right angled triangle.";
	}
	
    return 0;
}
