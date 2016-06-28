/*
Write a C++ program to accept a positive number from the user and determine whether the number is a palindrome or not. A number is a palindrome, if the number remains the same after reversing its digits. Sample input/output statemens are given below:
   Sample 1:
      Enter a number: 12321
      The number entered is a palindrome.
   Sample 2:
      Enter a number: 123421
      The number entered is not a palindrome.
*/
#include <iostream>
using namespace std;
int main()
{
   unsigned long int orig;            // input number
   unsigned long int reversed = 0;      // reverse of original number
   unsigned long int n;             // copy of input number
   
   cout << "Enter a number: ";
   cin >> orig;
   
   // copy the input number
   n = orig;
   
   // construct the reverse of original number 
   while (n > 0)
   {
      reversed = reversed * 10 + n % 10;
      n /= 10;
   }
   
   // A number is a palindrome, if the number remains the same after reversing its digits
   if(orig == reversed)
   {
      cout << "The number entered is a palindrome" << endl;
   }
   else
   {
      cout << "The number entered is not a palindrome" << endl;
   }
   return 0;
}