/*3.42 (Diameter, Circumference and Area of a Cirle) Write a program that reads the radius of a
circle (as a float value) and computes and prints the diameter, the circumference and the area. Use
the value 3.14159 for pi.
*/
#include <stdio.h>
int main ()
{
	float radius ;
	float pi = 3.14159 ;
	printf ("Enter the radius of a circle:  ");
	scanf ("%f",&radius);
	printf ("Diameter is : %f\n",radius*2);
	printf ("Circumference is : %f\n", 2*pi*radius);
	printf ("Area is : %f", pi*radius*radius);
}
