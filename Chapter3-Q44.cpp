/*
3.44 (Sides of a Triangle) Write a program that reads three nonzero float values and determines
and prints if they could represent the sides of a triangle.*/ 
// I think ý need to use functions.
// this solve  is not right 

#include <stdio.h>
int main ()
{
	printf ( "I will want you 3 float and then \n" ) ;
	printf( "I will say If ýt can be represent of a triagle or not\n" );
	float size1 ,size2, size3 ; 
	printf ("Enter 3 size:  \n" );
	scanf("%f%f%f", &size1, &size2, &size3);
//	printf ( "Size 1 is %f\nsize 2is %f\nsize 3 is %f ",side1, side2, side3 );
	// begining side 1
	if ( size2 >= size3 ){ // if beginning
		if ( size2 + size3 > size1 && size1> size2 - size3 )
			printf ( "It could represent the sides of a triangle") ;
		if ( size1 >= size3 ){ // if beginning
		if (size1+size3 > size2 && size2 > size1-size3)
			printf ( "It could represent the sides of a triangle") ;
	} // end if 
	else { // else begins
		if (size1+size3 > size2 && size2 > size3-size1)
			printf ( "It could represent the sides of a triangle") ;
	//	printf ("size2 > size3");
	} // end if 
}	else { // else begins
		if (size2+size3 > size1 && size1 > size3-size2)
			printf ( "It could represent the sides of a triangle") ;
	} // end else
	// for side 2 
	if ( size1 >= size3 ){ // if beginning
		if (size1+size3 > size2 && size2 > size1-size3)
			printf ( "It could represent the sides of a triangle") ;
	} // end if 
	else { // else begins
		if (size1+size3 > size2 && size2 > size3-size1)
			printf ( "It could represent the sides of a triangle") ;
	} // end else
	// for side 3
	if ( size1 >= size2 ){ // if beginning
		if (size1+size2 > size3 && size3 > size1-size2)
			printf ( "It could represent the sides of a triangle") ;
	} // end if 
	else { // else begins
		if (size1+size2 > size3 && size3 > size2-size1)
			printf ( "It could represent the sides of a triangle") ;
	} // end else
	return 0 ;
} // end function main 

