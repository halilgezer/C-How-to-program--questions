/*3.24 (Find the Largest Number) The process of finding the largest number (i.e., the maximum
of a group of numbers) is used frequently in computer applications. For example, a program that
determines the winner of a sales contest would input the number of units sold by each salesperson.
The salesperson who sold the most units wins the contest. Write a pseudocode program and then a
program that inputs a series of 10 numbers and determines and prints the largest of the numbers.
[Hint: Your program should use three variables as follows]:
counter: A counter to count to 10 (i.e., to keep track of how many numbers have
been input and to determine when all 10 numbers have been processed)
number: The current number input to the program
largest: The largest number found so far
*/
#include<stdio.h>
int main ()
{ // function main begins execute
	int count,number, largest ;
	printf ("Enter ten number and then I will give you largest.");
	printf ( "\nEnter a number : "); // ask first number
		scanf ("%d",&number); //read it
		largest = number ; // assignt it to largest  
	for (count = 1; count <= 9; count++){ // for begins loop 9 times 
		printf ( "\nEnter a number : ");
		scanf ("%d",&number);
		if (number > largest) { //if begin
			largest = number ; // if number > largest assign number to largest.
		} // end if 
		
	} // end for 
	printf ("The largest is %d", largest); 
	return 0 ;
} // end function main 
