/*
Author is : Ibrahim Halil GEZER
5.15 (Hypotenuse Calculations) Define a function called hypotenuse that calculates the length
of the hypotenuse of a right triangle when the other two sides are given. Use this function in a program
to determine the length of the hypotenuse for each of the following triangles. The function
should take two arguments of type double and return the hypotenuse as a double. Test your program
with the side values specified in Fig. 5.18.
*/
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

double hypotenuse (double a, double b ) ; // function prototype

double a, b ;

int main ( void ) 
{
	 hypotenuse ( a, b )  ;
		
} // end function main 

double hypotenuse (double a, double b ) { //defind function 

	printf ( "Enter the 1. side you want to determine the right triangle : " ) ;
	scanf ( "%lf" , &a );
	printf ( "Enter the 2. side you want to determine the right triangle : " ) ;
	scanf ( "%lf", &b );
	double x = pow ( a, 2 ) + pow ( b, 2 ) ;
	printf ( "Hypotenuse is : %f\n\n", sqrt (x)  ) ;
	
	printf ( "Do you want to calculate again ?  \n" );
	
	int again ; 
	printf ( "If you want write: 1 \n" );
	scanf ("%d", &again) ;	
	if  ( again == 1 ) 
			hypotenuse  ( a,  b ) ;
	
	else 
		return 0 ;
}
