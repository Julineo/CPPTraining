/*
Problem Definition: Consider the marks of midsem and endsem of CS101 students are stored in a 2D array, 'studentmarks[ ][ ]' in the main program (not shown). The array has certain number of rows and exactly 2 columns. The number of rows indicates the number of students and every row of an array stores the marks of midsem and endsem of a student. The value in the first column (column 0) of the row represents the midsem_marks for the student, and the value in the second column (column 1) of the same row represents the endsem_marks for the same student. This is depicted in the table given below:
'studentmarks' Array
Column 0 (midsem_marks)	Column 1 (endsem_marks)
90 	30
60 	20
... 	...

Both midsem and endsem are conducted for 100 marks each.

Each student's total marks will be calculated using the formula given below.

Root Mean Square marks (RMS)= (0.5* ( (midsem_marks)2 + (endsem_marks)2 ) )0.5

We first define an operator for comparing two specified rows of a single array (note that the two rows indicates marks of two different students).

The following rules define the outcome of comparing row X with row Y of array:

(a) If RMS of row X is greater than RMS of row Y, then row X will be considered greater than row Y.
(b) If RMS of row X is lesser than RMS of row Y, then row X will be considered lesser than row Y.
(c) If RMS of row X is equal to RMS of row Y, then the row having higher endsem_marks will be considered greater than other row.
(d) If RMS of row X is equal to RMS of row Y, and if endsem_marks are also equal for both row X and row Y,  then both the rows will be considered equal.
*/

#define ARRAY_SIZE(array) (sizeof((array))/sizeof((array[0])))//to determine number of array elements



#include <iostream>
#include <cmath>
using namespace std;

/* Question           : Compute the RMS of 2 rows return -1, 0, or 1
float marksarray[][2] : Contains the midsem_marks and endsem_marks of 'N' students 
int index1            : Denotes the the row number(index) of the student. 
int index2            : Denotes the the row number(index) of the student.  */
int comparator(float marksarray[][2],int index1, int index2) 
{
    //Write your code below this line to calculate RMS, compare them, and return either -1, 0, or 1  
	int a1, a2;
	a1 = pow(0.5*(pow(marksarray[index1][0], 2.0)+pow(marksarray[index1][1], 2.0)),0.5);
	a2 = pow(0.5*(pow(marksarray[index2][0], 2.0)+pow(marksarray[index2][1], 2.0)),0.5);
	
	if (a1 > a2)
	{
		return -1;
	}
	if (a1 < a2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}



/* Question       : Sort the array as described in the question(previous tab) on edX
float array[ ][2] : Denotes midsem and endsem marks of a given number of students. 
int numElements   : Total number of students */

int selectionSort2(float array[][2], int numElements) 
{
    //Write your code below this line to find out and return the breakpoint. Sort the upper part of array (if required)
    // Hint: Use the comparator function

	int break_point = numElements + 1;
	
	for (int i = numElements; i >= 0; i--)
	{
		if (comparator(array, i,  break_point) == -1)
		{	
			break_point = -1;
		}
	}
	
	//Selection sort:
	for (int i = 0; i < numElements; i++)
	{
		int iMin = i;//assume the min is the first element
		float temp0, temp1;//for swapping
		
		for (int j = i+1; j < numElements; j++)
		{
			if (comparator(array, iMin,  j) == -1)
			{
				iMin = j;
			}
		}
		
		if (iMin != i)//swap array elements
		{
			temp0 = array[iMin][0];
			temp1 = array[iMin][1];
			array[iMin][0] = array[i][0];
			array[iMin][1] = array[i][1];
			array[i][0] = temp0;
			array[i][1] = temp1;				
		}
	}
	
    return break_point;
}



/* Question            : Merge the array as described in the question(previous tab) on edX and return non duplicate rows
float sortedarray[][2] : Containing the sorted elements (based on the sorting done in the function 'selectionSort2'). 
float mergedarray[][2] : After this function executes, this should contain the merged array.
int break_point        : Denoting the point i.e. the row number as explained earlier.
int numElements        : Number of rows in both the arrays (sortedarray and mergedarray). */
int merge(float sortedarray[][2], float mergedarray[][2], int break_point, int numElements) 
{
    // Write your code below this line to merge non-duplicate array rows of Part A and Part B
    // Return the number of non-duplicate rows detected in the entire array after merging 

    
}



int main() 
{
    //float marksarray[][2] = {{90,30}, {60,20}, {30,40}, {60,20}, {10,90}, {0,100}, {60,60}, {50,10}, {10, 90}, {0, 100}};
	float marksarray[][2] = {{90,30}, {60,20}, {30,40}, {60,20}, {10,90}, {0,100}};
	int n = ARRAY_SIZE(marksarray);


	//cout << comparator(marksarray,8,9) << endl;//1
	cout << selectionSort2(marksarray, n) << endl;
	
    return 0;
}
