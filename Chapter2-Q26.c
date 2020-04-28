/*2.26 (Multiples) Write a program that reads in two integers and determines and prints if the first
is a multiple of the second. [Hint: Use the remainder operator.]
*/
#include <stdio.h>
int main()
{ // function main begin execution
	int num1, num2 ;
	printf( "Enter two integer :\n" ); // input two integers
	scanf("%d%d",&num1, &num2); // read that integers
	if (num1 % num2 == 0){  // control statement 
		printf( "%d is multiple of %d ",num1, num2 ); 
	} // end if 
	if ( num1 % num2 != 0 ){ // control statement
		printf( "%d is not multiple of %d", num1, num2 );
	}
} // end of function main
