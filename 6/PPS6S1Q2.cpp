//Correct binary search

#define ARRAY_SIZE(array) (sizeof((array))/sizeof((array[0])))//to determine number of array elements

#include <iostream>
using namespace std;

int binarySearch(int A[], int start, int end, int srchElement) {
  if (end == start) { // Array A has only 1 element
    if (A[start] == srchElement) {
      return start;
    }
    else 
	{ 
		return -1; 
	}
  }
  int mid = (start + end)/2;
  if (A[mid] == srchElement) {
    return mid;
  }
  else {
    if (A[mid] < srchElement) {
      return binarySearch(A, mid+1, end, srchElement);
    }
    else {
      return binarySearch(A, start, mid-1, srchElement);
    }
  }
}

int main() {
    int a[] = {15, 22, 11, 13, 12, 18, 16, 6, 14, 5};
	//int a[] = {5, 6, 11, 12, 13, 14, 15, 16, 18, 22, 33};
	/*int n = ARRAY_SIZE(a);
	for (int i = 0; i < n; i++)// automated test for every value in array
	{
		
		cout<<binarySearch(a, 0, n - 1, a[i])<<endl;// start count from 0, so the last element has n - 1 number
	}*/
	cout<<binarySearch(a, 0, 9, 11)<<endl;
    return 0;
}
