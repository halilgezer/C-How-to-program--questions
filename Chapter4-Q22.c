/* 
Author is : Ibrahim Halil GEZER
4.22 (Average Grade) Modify the program of Fig. 4.7 so that it calculates the average grade for
the class.
*/
#include <stdio.h>

int main (void)
{
	int grade; /* one grade */
	int acount = 0 ; /* number of As */
 	int bcount = 0; /* number of Bs */
 	int ccount = 0; /* number of Cs */
 	int dcount = 0; /* number of Ds */
	int fcount = 0; /* number of Fs */
	int total = 0 ;
	
	printf( "Enter the letter grades.\n" );
	printf( "Enter the EOF character to end input.\n" );
	
	while ( (grade = getchar ()) != EOF) {
		switch (grade)  {
			case 'A' :
			case 'a' :
				acount++ ;
				total +=5;
				break ;
		
		case 'B' :
		case 'b' :
			bcount++ ;
			total +=4;
			break ;
		
		case 'C' :
		case 'c' :
			ccount++ ;
			total +=3;
			break ;
			
		case 'D' :
		case 'd' :
			dcount++ ;
			total +=2;
			break ;	
		
		case 'F' :
		case 'f' :
			fcount++ ;
			total +=1;
			break ;	
			
		case '\n':
		case '\t':
		case ' ':
			break;	
		
		default :
			printf ( "Incorrect letter grade. \n" );
			printf ( "Enter new letter " );
			break ;
	
		} // end switch 
		} // end while 
		int count = acount + bcount + ccount + dcount +fcount ;
		printf( "\nTotals for each letter grade are:\n" );
 		printf( "A: %d\n", acount ); /* display number of A grades */
 		printf( "B: %d\n", bcount ); /* display number of B grades */
 		printf( "C: %d\n", ccount ); /* display number of C grades */
 		printf( "D: %d\n", dcount ); /* display number of D grades */
 		printf( "F: %d\n", fcount ); /* display number of F grades */
 		printf ("Overall of class is : %.2f", (float) (total / count ) ) ;
		
		
	return 0 ;
} // end function main 
