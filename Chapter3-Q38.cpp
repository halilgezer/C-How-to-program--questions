/*3.38 Write a program that prints 100 asterisks, one at a time. After every tenth asterisk, your program
should print a newline character. [Hint: Count from 1 to 100. Use the remainder operator to
recognize each time the counter reaches a multiple of 10.]
*/
#include <stdio.h>
int main ()
{
	int number = 100;
	int i = 1;
	for (i; i<=number; i++){
		printf ("*");
		if (i %10 == 0) 
			printf("\n");
	}
}
