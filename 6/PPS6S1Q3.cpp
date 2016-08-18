/*
We want to "sort" an array of positive integers in increasing order by looking only at the least significant two digits of each element (in decimal representation). Thus, if the unsorted array (of 4 elements) is A[0] = 109, A[1] = 307, A[2] = 215, A[3] = 500, then the sorted (in increasing order) array should be A[0] = 500, A[1] = 307, A[2] = 109, A[3] = 215.

A sorting function that accomplishes the above task is said to be "stable" if the relative order of every pair of elements in A whose last two digits (in decimal representation) are the same is preserved by the sorting function. Thus, if the unsorted array (of 4 elements) is A[0] = 201, A[1] = 101, A[2] = 300, A[4] = 400, and if the sorting function returns the sorted array A[0] = 400, A[1] = 300, A[2] = 101, A[4] = 201, then the function is not stable. This is because both 201 and 300 appeared before 101 and 400, respectively, in the unsorted array, and their last two digits were the same. Yet, the sorting function reversed their relative order (101 before 201 and 400 before 300) in the sorted array. A stable sorting program would return the following sorted array for the same input: A[0] = 300, A[1] = 400, A[2] = 201, A[1] = 101.

A student has written the following code fragment to sort an array A of integers as described above. Assume that when the function "mergeSort" is called from "main", its parameters are as follows: "A" is an array of "n" positive integers (where "n" is a positive integer <= 100), the value of "start" is 0, and the value of "end" is "n". The elements in the array A are indexed as A[0] through A[n-1].


Which of the following are true of the above function "mergeSort"?

 It is stable  
 It is not stable  
 It sorts the array A in increasing order considering the last two digits of elements  
 It sorts the array A in decreasing order considering the last two digits of elements
*/

#define ARRAY_SIZE(array) (sizeof((array))/sizeof((array[0])))//to determine number of array elements



#include <iostream>
using namespace std;

void mergeSortedSubarrays(int A[], int start, int mid, int end)
{
  int i, j, index = start;
  int B[100];

  for (i = start, j = mid; ((i < mid) || (j < end)); ) {
      if ((i < mid) && (j < end)) {
        if ((A[j] % 100) <= (A[i] % 100)) { B[index++] = A[j++]; }
        else {B[index++] = A[i++];}
      }
      else if (i < mid) {B[index++] = A[i++]; }
      else {B[index++] = A[j++];}
  }

  for (i = start; i < end; i++) { A[i] = B[i]; }
  return;
}

void mergeSort(int A[], int start, int end)
{
  int mid;

  if (end == start + 1) { return; }
  else { 
    mid = (start + end)/2;
    mergeSort(A, start, mid);
    mergeSort(A, mid, end);
    mergeSortedSubarrays(A, start, mid, end);
    return;
  }
}

int main() {
    int a[] = {150, 220, 110, 130, 120, 180, 160, 160, 140, 500};
	int n = ARRAY_SIZE(a);
	/*for (int i = 0; i < n; i++)// automated test for every value in array
	{
		
		cout<<binarySearch(a, 0, n - 1, a[i])<<endl;// start count from 0, so the last element has n - 1 number
	}*/
	mergeSort(a, 0, n); //it shoul be n - 1 here, but the excercise creators have weird notation of start and end values
	
	for (int i = 0; i < n; i++)// printing output
	{
		
		cout << a[i] << endl;// start count from 0, so the last element has n - 1 number
	}
    return 0;
}
