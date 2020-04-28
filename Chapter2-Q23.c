/*  2.23 (Largest and Smallest Integers) Write a program that reads in five integers and then determines
and prints the largest and the smallest integers in the group. Use only the programming techniques
you have learned in this chapter.
*/

#include <stdio.h>
int main()
{
	int num1, num2, num3, num4, num5 ;
	printf( "Enter five value: \n" );  // ask five value
	scanf( "%d%d%d%d%d",&num1, &num2, &num3, &num4, &num5 );  // read five value
	if (num1> num2 && num1 > num3 && num1 >num4 && num1 > num5 )	{ // for first number comparing greater 
		printf( "Biggest number is %d\n",num1 );
	} //end if
	if (num2 > num1 && num2 > num3 && num2 > num4 && num2 > num5 )	{ // for second number comparing greater
		printf( "Biggest number is %d\n",num2 );
	} //end if
	if (num3 > num1 && num3 > num2 && num3 > num4 && num3 > num5 )	{ // for third number comparing greater
		printf( "Biggest number is %d\n",num3 );
	} //end if
	if (num4 > num1 && num4 > num2 && num4 > num3 && num4 > num5 )	{ // for fourth number comparing greater
		printf( "Biggest number is %d\n",num4 );
	} //end if
	if (num5 > num1 && num5 > num2 && num5 > num4 && num5 > num3 )	{ // for fiveth number comparing greater
		printf( "Biggest number is %d\n",num5 );
	} //end if
	if (num1 < num2 && num1 < num3 && num1 < num4 && num1 < num5 )	{ // for first number comparing smaller
		printf( "Smallest number is %d\n",num1 );
	} //end if
	if (num2 < num1 && num2 < num3 && num2 < num4 && num2 < num5 )	{ // for second number comparing smaller
		printf( "Smallest number is %d\n",num2 );
	} //end if
	if (num3 < num1 && num3 < num2 && num3 < num4 && num3 < num5 )	{ // for third number comparing smaller
		printf( "Smallest number is %d\n",num3 );
	} //end if
	if (num4 < num1 && num4 < num2 && num4 < num3 && num4 < num5 )	{ // for fourth number comparing smaller
		printf( "Smallest number is %d\n",num4 );
	} //end if
	if (num5 < num1 && num5 < num2 && num5 < num4 && num5 < num3 )	{ // for fiveth number comparing smaller
		printf( "Smallest number is %d\n",num5 );
	} //end if
} //end of main function x
