/*
Author is : Ibrahim Halil GEZER
4.26 (Calculating the Value of pi) Calculate the value of pi from the infinite series

pi = 4/1 -4/3 +4/5 -4/7 +4/9- 4/11+ ...
Print a table that shows the value of ð approximated by one term of this series, by two terms, by
three terms, and so on. How many terms of this series do you have to use before you first get 3.14?
3.141? 3.1415? 3.14159?
*/
#include <stdio.h>

int main (void)
{
	int  step;
	double pi,i ;
	pi = 0 ;
	step = 0 ;
	
	for  ( i=1; i<1001; i+=2) {
		if ( step%2 != 0 ) 
			pi -= 4/i;
		else 
			pi += 4/i ; 
		step ++ ; 
		if ( (int )i % 51 == 0) // ý don't want  to see pi all steps. 
		printf ("pi is : %f\n", pi) ; 
	}
		
	return 0 ;
} // end function main 
