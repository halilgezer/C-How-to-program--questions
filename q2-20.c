/* (Diameter, Circumference and Area of a Circle) Write a program that reads in the radius
of a circle and prints the circle’s diameter, circumference and area. Use the constant value 3.14159
for ð. Perform each of these calculations inside the printf statement(s) and use the conversion specifier
%f. [Note: In this chapter, we have discussed only integer constants and variables. In Chapter 3
we’ll discuss floating-point numbers, i.e., values that can have decimal points.] 
*/
#include <stdio.h>
///Bir hata var anlamadým..

int main ()
//Beginning of the main function
{
	int radius, diameter;
	float circum, area , pi;
	pi = 3.14159 ;
	printf( "Enter the value of radius: \n" );
	scanf( "%d", &radius );  // read to radius 
	printf( "Diameter is: %d \n",diameter = radius * 2 );
	printf( "Circumferance is :%d \n",circum = diameter * pi );
	printf ( "Area of the circle is: %d \n", /*area = */pi * radius * radius );
}
