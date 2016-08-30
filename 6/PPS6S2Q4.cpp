/*
A student wishes to search for a given integer in a sorted (in increasing order) array 'A' of integers. (S)he has written the following C++ function to achieve this goal. Assume that when the function is called from 'main', the input parameters passed are: an array 'A' of N (> 0) integers sorted in increasing order, two indices 'start' and 'end', that are set to the values 0 and N, respectively, and the integer 'el' to be searched in the array 'A'.

The student expects the function to return 'true' if 'el' is present in the array 'A', and to return 'false' otherwise.

Which of the following option is true, if 'mySearch(A, 0, N, el)' is called from 'main'? Your answer should not assume any specific array 'A' or any specific searched element 'el'. You may only assume that 'A' contains 'N' (> 0) integers sorted in increasing order.

 'mySearch will necessarily return either 'true' or 'false' to 'main'  
 'mySearch' may not return 'true' even if 'el' is present in 'A'  
 'mySearch' will necessarily return 'false' if 'el' is not present in 'A'  
 'mySearch' may not return 'false' if 'el' is not present in 'A'  
 None of the choices
*/

#define ARRAY_SIZE(array) (sizeof((array))/sizeof((array[0])))//to determine number of array elements



#include <iostream>
using namespace std;

bool mySearch(int A[], int start, int end, int el)
{
  // Search A[start] through A[end-1] for el

  int mid = (start + end)/2;  

  if (el < A[mid]) 
		{return mySearch(A, start, mid, el);}
  else if (el > A[mid]) 
		{return mySearch(A, mid+1, end, el);}
  else {// A[mid] == el
		return true;
  }

  return false;
} 

int main() {
    int a[] = {100, 110, 120, 130, 140, 180, 190, 200, 240, 500};
	int n = ARRAY_SIZE(a);

	cout << mySearch(a, 0, n, 100) << endl;
	cout << mySearch(a, 0, n, 140) << endl;
	cout << mySearch(a, 0, n, 180) << endl;
	cout << mySearch(a, 0, n, 500) << endl;
	
	cout << mySearch(a, 0, n, 10) << endl;
	cout << mySearch(a, 0, n, 1000) << endl;
    return 0;
}
