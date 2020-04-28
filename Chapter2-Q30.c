/* 2.30 (Separating Digits in an Integer) Write a program that inputs one five-digit number, separates
the number into its individual digits and prints the digits separated from one another by three
spaces each. [Hint: Use combinations of integer division and the remainder operation.] For example,
if the user types in 42139, the program should print
*/
#include <stdio.h>
int main ()
//funtion main begins execution
{
	int number, five, four, three, two, one ; 
	printf( "Enter a five digit number:\n" ); // ask the number
	scanf ( "%d", &number );		// read number
	five = number/10000 ;			
	four = (number % 10000) / 1000 ;
	three =((number % 10000) % 1000) /100;
	two = (((number % 10000) % 1000) % 100)/10 ;
	one = (((number % 10000) % 1000) % 100) % 10 ; 
	printf ("%d   %d   %d    %d    %d",five, four, three, two, one);
}  // function main ends

