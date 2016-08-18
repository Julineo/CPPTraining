/*
Given a sorted array 'A' of integers, we have seen how to use binary search, to efficiently search for the presence/absence of a single integer in the array. In this question, we are given two integers and a sorted array, and we want to find out, if one of the two integers is present in the array, or if both are absent from the array. We are simply interested in a boolean answer: "true" if one of the integers is present in the array, and "false" otherwise. Of course, this problem can be solved by invoking binary search twice, once for each integer. However, a student wants to adapt the binary search function, we have studied, to solve this problem. She has come up with the following C++ code fragment, in which some parts are missing.

Assume that when "binSearchForTwo" is called from "main", the parameters are as follows: an array 'A' of 'n' integers sorted in increasing order (where 'n' is a positive integer), the value of 'start' is 0, the value of 'end' is 'n', and the values of 'el1' and 'el2' are the two integers, we want to search, in the array 'A'. You may also assume that, 'el1 <= el2' when 'binSearchForTwo' is called from 'main' function.

Indicate which of the following options for the missing conditions would give a correct program for searching for two elements in a sorted (in increasing order) array. Note that we are not concerned about efficiency of "binSearchForTwo", but are only about the correctness of the function "binSearchForTwo". Thus, it is possible to optimize the function above to make it run a bit faster, but that is not the point of this question.

Cond1: ((A[start] == el1) || (A[end-1] == el2)) 
Cond2: (el1 < A[mid]), 
Cond3: (el2 > A[mid]) 

Cond1: ((A[mid] == el1) || (A[mid] == el2))     
Cond2: (el2 < A[mid]) 
Cond3: (el1 > A[mid]) 

Cond1: ((A[start] == el1) || (A[end-1] == el2)) 
Cond2: (el1 < A[start]) 
Cond3: (el2 > A[end-1]) 

Cond1: ((A[mid] == el1) || (A[mid] == el2))     
Cond2: (el2 > A[mid]) 
Cond3: (el1 < A[mid]) 
*/

#define ARRAY_SIZE(array) (sizeof((array))/sizeof((array[0])))//to determine number of array elements



#include <iostream>
using namespace std;

bool binSearchForTwo(int A[], int start, int end, int el1, int el2)
{
  // Assume A is sorted in increasing order, and el1 <= el2
  int mid = (start + end)/2;

  if (   ((A[start] == el1) || (A[end-1] == el2))   ) {return true;}//Cond1
  else if (end == start+1) {return false;}
  else 
  {
    if (   (el1 < A[start])   ) //Cond2
	{ 
      return binSearchForTwo(A, start, mid, el1, el2);
	  cout << "bang2";
    }
    else if (   (el2 > A[end-1])   ) //Cond3
	{
      return binSearchForTwo(A, mid, end, el1, el2); 
	  cout << "bang3";
    }
    else 
	{ 
      if (binSearchForTwo(A, start, mid, el1, el1)) 
	  {
        return true;
      }
      else 
	  {
        return binSearchForTwo(A, mid, end, el2, el2);
      }
    }
  }
}

int main() {
    int a[] = {100, 110, 120, 130, 140, 180, 190, 200, 240, 500};
	int n = ARRAY_SIZE(a);

	cout << binSearchForTwo(a, 0, n, 180, 200) << endl;
	cout << binSearchForTwo(a, 0, n, 180, 1000) << endl;
	cout << binSearchForTwo(a, 0, n, 1020, 190) << endl;
	cout << binSearchForTwo(a, 0, n, 1020, 1000) << endl;
	

    return 0;
}
