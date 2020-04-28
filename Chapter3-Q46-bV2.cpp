/*/*3.46 (Factorial) The factorial of a nonnegative integer n is written n! (pronounced “n factorial”)
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
	int number, num, facto ;
	float e = 0;
	number = 6 ;
	for (int j =1; j<=number; j++){
		e += 1/facto ;	
	//	facto = 1 ;
		for (int i=number; i>=1; i--) {
			facto *=i ;
		printf ("factorial is : %d\n", facto) ;	
		}	
	printf ("%d factorial is : %d",num ,facto) ;
}
	printf ("e is : %f", e);
	return 0 ;
} // function main ends
