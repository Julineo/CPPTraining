#include <iostream>
using namespace std;

int main() //check if a vovel
{
	int l,h;
    cout << "Enter length of the rectangle j:" << endl;
	cin >> l;
    cout << "Enter height of the rectangle i:" << endl;
	cin >> h;

	for (int i = 1; i <= h; i++)
	{
		for (int j = 1; j <= l; j++)
		{
			if ((j == 1)  && (j < l))
			{
				cout << "*";
			}
			else if (j == l)
			{
				cout << "*" << endl;
			}
			else if ((i == 1) || (i == h))
			{
				cout << "*";
			}
			else if (( i != 1) && (i < h))
			{
				cout << " ";
			}
		}
	}
    return 0;
}
