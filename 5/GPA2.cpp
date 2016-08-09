#define ARRAY_SIZE(array) (sizeof((array))/sizeof((array[0])))//to determine number of array elements: sizeof(array) returns array size in bytes. sizeof(array[0]) returns size of single element in array. To get number of elements in array you must divide arrays's size by size of single element.

#include <iostream>
using namespace std;

/* Question          : count number of students scoring X marks in GQ and store it in 'sum_gq'
   int numOfStudents : Integer number containing the total number of students
   int gq[]          : Integer array containing the GQ marks of all students
   int sum_gq[]      : Integer array to be computed  */
void getTotalGQ(int numOfStudents, int gq[], int sum_gq[]) {
    // Write your solution code below this line

	for(int i = 0; i < numOfStudents; i++)
	{	
		sum_gq[gq[i]] = sum_gq[gq[i]] + 1;
	}
}

/* Question          : Count number of students scoring Y marks in GPA and store it in 'sum_gpa'
   int numOfStudents : Integer number containing the total number of students
   float gpa[]       : Array of type float containing the GPA marks of all students
   int sum_gpa[]     : Integer array to be computed */
void getTotalGPA(int numOfStudents, float gpa[], int sum_gpa[]) {
    // Write your solution code below this line

	for(int i = 0; i < numOfStudents; i++)
	{	
	/*
		0 - 0
		0.3 - 1
		0.6 - 2
		1 - 3
	*/

		if (gpa[i] == 0)
		{
			sum_gpa[0] = sum_gpa[0] + 1;
			continue;
		}
		if (gpa[i] == 0.3f)
		{
			sum_gpa[1] = sum_gpa[1] + 1;
			continue;
		}
		if (gpa[i] == 0.6f)
		{
			sum_gpa[2] = sum_gpa[2] + 1;
			continue;
		}
		if (gpa[i] == 1)
		{
			sum_gpa[3] = sum_gpa[3] + 1;
			continue;
		}
	}
}

/* Question          : Count number of students scoring X marks in GQ, Y marks in GPA, total, and result, in 'count[][]'
   int numOfStudents : Integer number containing the total number of students
   int gq[]          : Integer array containing the GQ marks of all students
   float gpa[]       : Array of type float, containing the GPA marks of all students
   int count[][]     : Integer array to be computed */
void getTotalCount(int numOfStudents, int gq[], float gpa[], int count[][5]) {
    // Write your solution code below this line

	for(int i = 0; i < numOfStudents; i++)
	{	
		if (gpa[i] == 0)
		{
			count[gq[i]][0] = count[gq[i]][0] + 1;
			count[gq[i]][4] = count[gq[i]][4] + 1;//total
			count[11][0] = count[11][0] + 1;//total
			count[11][4] = count[11][4] + 1;//grand total
			continue;
		}
		if (gpa[i] == 0.3f)
		{
			count[gq[i]][1] = count[gq[i]][1] + 1;
			count[gq[i]][4] = count[gq[i]][4] + 1;
			count[11][1] = count[11][1] + 1;
			count[11][4] = count[11][4] + 1;
			continue;
		}
		if (gpa[i] == 0.6f)
		{
			count[gq[i]][2] = count[gq[i]][2] + 1;
			count[gq[i]][4] = count[gq[i]][4] + 1;
			count[11][2] = count[11][2] + 1;
			count[11][4] = count[11][4] + 1;
			continue;
		}
		if (gpa[i] == 1)
		{
			count[gq[i]][3] = count[gq[i]][3] + 1;
			count[gq[i]][4] = count[gq[i]][4] + 1;
			count[11][3] = count[11][3] + 1;
			count[11][4] = count[11][4] + 1;
			continue;
		}
	}
}

int main() {

int gq[] =
{
7,
10,
10,
7,
4,
8,
0,
5,
2,
0,
7,
9,
8,
9,
0,
3,
0,
0,
9,
10,
0,
0,
2,
9,
9,
2,
4,
3,
10,
2,
2,
3,
3,
4,
3,
2,
10,
10,
8,
5,
6,
4,
6,
2,
6,
6,
10,
10,
4,
10,
0,
0,
10,
8,
};

float gpa[] = 
{
0,
1,
1,
0,
0.3,
0.3,
0.3,
0.3,
1,
1,
1,
0.3,
0.3,
0.3,
0.3,
0.3,
0,
0,
0.3,
0.3,
0.3,
1,
1,
1,
1,
1,
0,
0,
0.6,
0.6,
0.6,
0.6,
0.6,
0.6,
0.6,
0.6,
0,
0,
0.6,
0.6,
0,
0.6,
0,
0.6,
0,
0.6,
0,
0,
0,
0.6,
0.6,
0.6,
1,
0
};

	//cout << ARRAY_SIZE(gq) << endl;//Checking the size of array
	//cout << ARRAY_SIZE(gpa) << endl;

	int count[12][5] = {};//puts zeros into array
	int sum_gq[11] = {0,0,0,0,0,0,0,0,0,0};
	int sum_gpa[4] = {0,0,0,0};
	

	
	getTotalGQ(54, gq, sum_gq);
	getTotalGPA(54, gpa, sum_gpa);
	
	cout << count[11][4];
	
	getTotalCount(54, gq, gpa, count);
	
	cout << count[11][4];

}
