/*3.27 (Find the Two Largest Numbers) Using an approach similar to Exercise 3.24, find the two
largest values of the 10 numbers. [Note: You may input each number only once.]
*/

#include <stdio.h>
int main ()
{ // function main begins execute
	int i, largest, larger, number ;
	printf ("Enter a number: ");
	scanf ("%d", &number);
//	printf ("Number is : %d",number);
	largest = number ;
	larger = number ;
	for (i=1 ; i<=9; i++) {//for begins
		printf ("Enter a number ");
		scanf ("%d", &number); 
		if (number > largest  ) // if begins 
			largest = number ;
		else if  (number >larger)
			larger = number ;
	
	//	return 0 ;
	} // for end 
	printf ("The largest number is %d\n", largest );
	printf ("The second larg number is %d\n", larger );
	
//	return 0 ;
} // function main ends
