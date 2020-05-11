/*
3.44 (Sides of a Triangle) Write a program that reads three nonzero float values and determines
and prints if they could represent the sides of a triangle.*/ 
 

#include <stdio.h>
int main ()
{
	printf ( "I will want you 3 float and then \n" ) ;
	printf( "I will say If ıt can be represent of a triagle or not\n" );
	float size1 ,size2, size3 ; 
	printf ("Enter 3 size:  \n" );
	scanf("%f%f%f", &size1, &size2, &size3);
//	printf ( "Size 1 is %f\nsize 2is %f\nsize 3 is %f ",side1, side2, side3 );
	// begining side 1
	if ( size2 >= size3 ){ // if beginning
		if ( size2 + size3 > size1 && size1> size2 - size3 )
			printf ( "It could represent the sides of a triangle") ;
	}
			
	else if  ( size3 > size2 ){
		if ( size2 + size3 > size1 && size1> size3 - size2 )
			printf ( "It could represent the sides of a triangle") ;
	}
	else 
		printf ( "It couldn't represent any triangle. " ) ; 
		
	return 0 ;
} // end function main 
