/*3.33 (Square of Asterisks) Write a program that reads in the side of a square and then prints that
square out of asterisks. Your program should work for squares of all side sizes between 1 and 20. For
example, if your program reads a size of 4, it should print
****
****
****
*/ 

#include<stdio.h>
int main (){  // function main begins execute
	int number ;
	int i ,j ;
	printf ( "Enter a number : " ); //ask a number
	scanf ("%d", &number ) ; // read that number
	for (i=0; i<number; i++ ) { // outer if begin
		for (j=0; j<number; j++) { // inner if begin 
			printf("*"); // print  number times *
		} // inner if end
	printf("\n"); //after every colomn end start new line 

	}
	return 0 ;
} // funciton main ends
