/*3.45 (Sides of a Right Triangle) Write a program that reads three nonzero integers and determines
and prints if they could be the sides of a right triangle.
*/ 
#include <stdio.h>
int main ()
{ // function main begins execute
	int size1, size2, size3 ;
	printf ( "Enter 3 integers : \n") ;
	scanf ("%d%d%d",&size1, &size2, &size3 );
//	printf ("Integers are %d \n%d\n%d", size1, size2, size3);
	if ( size1*size1 +size2*size2 == size3*size3) 
		printf ("These could be represent a right triangle ") ;
	if ( size3*size3 +size2*size2 == size1*size1) 
		printf ("These could be represent a right triangle ") ;
	if ( size1*size1 +size3*size3 == size2*size2) 
		printf ("These could be represent a right triangle ") ;
	
} // function main ends 

