/*3.34 (Hollow Square of Asterisks) Modify the program you wrote in Exercise 3.33 so that it
prints a hollow square. For example, if your program reads a size of 5, it should print

*****
* *
* *
* *
*****
*/
#include<stdio.h>
int main (){  // function main begins execute
	int number ;
	int i ,j ;
	printf ( "what will the size of  your square : " ); //ask a number
	scanf ("%d", &number ) ; // read that number
	for (i=0; i<number; i++ ) { //  if begin
		printf ( "*" ); // print up side of square
	} // end if 
	printf("\n"); 
	for (j=1; j<=number-2; j++) { // outer for begin 
		printf("*"); // we must print * for left side of square
		for (i=1; i<=number-2; i++){ // inner for begins
			printf(" ") ; // and then we must print space number -2 times 
		} // inner for end
		printf ("*\n"); // go to new line 
		} // outer for end // do that number -2 times
		for (i=0; i<number; i++ ) { //  for begins
		printf ( "*" );
		} // end FOR 
//	printf("\n"); //after every colomn end start new line 	
	return 0 ;
} // funciton main ends
