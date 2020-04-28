/*3.46 (Factorial) The factorial of a nonnegative integer n is written n! (pronounced “n factorial”)
and is defined as follows:
n! = n · (n - 1) · (n - 2) · … · 1 (for values of n greater than or equal to 1)
and
n! = 1 (for n = 0).
For example, 5! = 5 · 4 · 3 · 2 · 1, which is 120.
a) Write a program that reads a nonnegative integer and computes and prints its factorial.
b) Write a program that estimates the value of the mathematical constant e by using the
formula:
e = 1+ 1/1!+1/2!+1/3! ...
*/

#include <stdio.h>
int main ()
{ // function main begins execute
	int a,i, number, num, facto ; 
	float e ; // dedfind e 
	printf ( "Enter a number : ");
	scanf ( "%d",&a) ;
	for (i = 1; i<= a ; i++) { // outer for begins
		e += (float) 1/facto ; // calculate e
		number = i ; 
		num = number ; // assign number to num
//	if (number ==1 || number == 0) { // if  begins //  assign 0! and 1! =1
		facto = 1 ;
		for (int j =number; j>=1; j--) { // inner for  begins 
			facto *=j ;	
		} //end inner for 
		printf ("%d factorial is : %d\n",num ,facto) ;
		printf ("e is : %f\n",e) ;
	} // end outer for 
//	printf ("e is : %f",e) ;
	return 0 ;
} // function main ends
