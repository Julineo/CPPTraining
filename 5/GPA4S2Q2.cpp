/*
If you look closely, the program computes the sum of numbers present in the array, and its average. The swapping of numbers in the array does not affect this computation. Thus, in this program, even if the first for loop is ignored i.e. not computed/considered, even then, the program will compute the sum of 'n' numbers (present in the array) and its average correctly.
*/

#include <iostream>
using namespace std;


int main() {
	int old, could, leaves = 0, saint = 9, sense = 150; 
	int fortune[9] = {367, 65, 265, 106, 147, 215, 418, 304, 7};
	  
	for ( could = 0; could < saint; could++ ) { 
		if(fortune[could] < sense){ 
			int old = fortune[leaves]; 
			fortune[leaves] = fortune[could]; 
			fortune[could] = old; 
			leaves++; 
		} 
	}
	  
	int someone = 0; 
	for (could = 0; could < saint; could++ ) { 
		someone = someone + fortune[could]; 
	}
		
	cout << someone << endl; 
	cout << someone / saint; 
}
