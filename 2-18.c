/* 2- 18 (Comparing Integers) Write a program that asks the user to enter two integers, obtains the
numbers from the user, then prints the larger number followed by the words “is larger.” If the
numbers are equal, print the message “These numbers are equal.” Use only the single-selection
form of the if statement you learned in this chapter. 

*/
#include <stdio.h>
int main ()
{	// begining of the main function.
	int first_int ;
	int second_int ;
	printf("Enter the first value: \n"); //input first value
	scanf("%d", &first_int);
	printf("Enter the second value: \n");	//input second value
	scanf("%d", &second_int);
	if  ( first_int == second_int ) { 
		printf("These numbers are equal\n");
	} // end if
	if  ( first_int > second_int ) {
		printf("%d is greater than to %d \n", first_int, second_int );
	} // end if
	if  ( first_int < second_int ) {
		printf("%d is less than to %d \n", first_int, second_int);
	} // end if
	
}	// end of the main function.
