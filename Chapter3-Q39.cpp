/*3.39 (Counting 7s) Write a program that reads an integer and determines and prints how many
digits in the integer are 7s.
*/
#include <stdio.h>
int main ()
{
	int number ;
	int count = 0 ;
	printf ( "Enter a number: " );
	scanf ("%d",&number);
	while (number != 0) {
		if(	number %10 ==7 )
			count ++ ;
		number /=10;
	}
	if (count ==1 )
		printf ("There is %d time 7s.", count);
	else if (count >1)
		printf ("There are %d times 7s.", count);
	else 
		printf ("There is no 7s.");
	return 0 ; 
}
