/*
3.41 (Multiples of 2 with an Infinite Loop) Write a program that keeps printing the multiples of
the integer 2, namely 2, 4, 8, 16, 32, 64, and so on. Your loop should not terminate (i.e., you should
create an infinite loop). What happens when you run this program?
*/

#include <stdio.h>
int main ()
{
	int i =0;
	while (true) {
		printf ("%i   ",i);
		i+=2 ;
		if (i%20 == 0) 
			printf ("\n");
	}
}
