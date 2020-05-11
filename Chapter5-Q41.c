/*
5.41 (Distance Between Points) Write function distance that calculates the distance between
two points (x1, y1) and (x2, y2). All numbers and return values should be of type double.
*/

#include <stdio.h>
#include <math.h>

double distance ( double x1 , double x2 , double y1, double y2 ) ;

int main ( void ) {
	
	printf ( "Distance to A ( 6 , 5 ) and B ( 9 , 1 )  is %.2f " ,distance (6,5,9,1) ) ; 
	return 0 ;
	
}

double distance ( double x1 , double x2 , double y1, double y2 ) {
	double result ;
	result =  pow ( x1 - y1 , 2) +  pow ( x2 - y2 , 2)  ;
	
	return sqrt ( result ) ; 
	
}
 
