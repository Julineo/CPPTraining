#include <iostream>
using namespace std;

int main() //check if a vovel
{
	char c;
    cout << "Enter a character:";
	cin >> c;
	
    switch(c)
	{
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U':
		cout << "Printing 1 since it is a vowel" << endl;
		break;
	default:
		cout << "Printing 0 since it is a vowel" << endl;
	}
    return 0;
}
