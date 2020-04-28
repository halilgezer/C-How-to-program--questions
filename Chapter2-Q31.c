/*2.31 (Table of Squares and Cubes) Using only the techniques you learned in this chapter, write
a program that calculates the squares and cubes of the numbers from 0 to 10 and uses tabs to print
the following table of values:
*/
#include <stdio.h>
int main()
{	
	int num = 0;
	printf( "number  square cube \n" );
	printf("%d\t %d\t %d\n",num, num*num, num*num*num);
	printf("%d\t %d\t %d\n",1, 1*1, 1*1*1) ;
	printf("%d\t %d\t %d\n",2, 2*2, 2*2*2) ;
	printf("%d\t %d\t %d\n",3, 3*3, 3*3*3) ;
	printf("%d\t %d\t %d\n",4, 4*4, 4*4*4) ;
	printf("%d\t %d\t %d\n",5, 5*5, 5*5*5) ;
	printf("%d\t %d\t %d\n",6, 6*6, 6*6*6) ;
	printf("%d\t %d\t %d\n",7, 7*7, 7*7*7) ;
	printf("%d\t %d\t %d\n",8, 8*8, 8*8*8) ;
	printf("%d\t %d\t %d\n",9, 9*9, 9*9*9) ;
	printf("%d\t %d\t %d\n",10, 10*10, 10*10*10) ;
}
