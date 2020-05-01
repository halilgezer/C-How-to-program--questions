/*
Author is : Ibrahim Halil GEZER
4.19 (Calculating Sales) An online retailer sells five different products whose retail prices are
shown in the following table:
Product 		Retail price
number 			
1 				$ 2.98
2 				$ 4.50
3 				$ 9.98
4 				$ 4.49
5 				$ 6.87 
Write a program that reads a series of pairs of numbers as follows:
a) Product number
b) Quantity sold for one day
Your program should use a switch statement to help determine the retail price for each product.
Your program should calculate and display the total retail value of all products sold last week.
*/

#include <stdio.h>
#include<stdbool.h>

int main () 
{
	int product1 =0 , product2 =0 , product3 =0 , product4 =0 , product5 =0 ;
	int sales1 =0, sales2 =0, sales3 =0, sales4 =0, sales5 =0 ;
	int i ,number ; 
	printf( "Enter product number: 1 to 5 \n" )	;
	printf ( "Enter the EOF character to end \n" );
	//scanf ("%d", &number);
	 
	while (( number = getchar()) != EOF ) { // while begins 
		
	switch ( number )  {
		case '1'  :
		//	produc1++ ;
			printf ( "How many product 1  you sell ? " ) ;
			scanf ("%d",&i);
			sales1 += i ;
			printf( "\nEnter product number: 1 to 5 \n" )	;
			break ;
		
		
		case '2' :
		//	product2++ ;
			printf ( "How many product 2  you sell ? " ) ;
			scanf ("%d",&i);
			sales2 += i ;
			i =0 ;
			printf( "\nEnter product number: 1 to 5 \n" )	;
			break ;
			
		case '3' :
		//	product1++ ;
			printf ( "How many product 3  you sell ? " ) ;
			scanf ("%d",&i);
			sales3 += i ;
			i =0 ;
			printf( "\nEnter product number: 1 to 5 \n" )	;	
			break ;
			
		case '4':
		//	produc1++ ;
			printf ( "How many product 4  you sell ? " ) ;
			scanf ("%d",&i);
			sales4 += i ;
			i =0 ;
			printf( "\nEnter product number: 1 to 5 \n" )	;	
			break ;
		
		case '5' :
		//	produc1++ ;
			printf ( "How many product 5  you sell ? " ) ;
			scanf ("%d",&i);
			sales5 += i ;
			i =0 ;
			printf( "\nEnter product number: 1 to 5 \n" )	;	
			break ;
		
		case '\n' :
		case ' ' : 
		case '\t' :
			break ;
		
		default :
			printf ("Incorrect ýnput entered !\n");
			printf ("Enter new number: \n" ) ;
			break ;
	} // end swicth case
	} // end while 
	
	printf ( "Total sales of product 1 is %d and total retail value is $%.2f\n",sales1, (float)sales1*2.98 ) ;
	printf ( "Total sales of product 2 is %d and total retail value is $%.2f\n",sales2, (float)sales2*4.50 ) ;
	printf ( "Total sales of product 3 is %d and total retail value is $%.2f\n",sales3, (float)sales3*9.98) ;
	printf ( "Total sales of product 4 is %d and total retail value is $%.2f\n",sales4, (float)sales4*4.49 ) ;
	printf ( "Total sales of product 5 is %d and total retail value is $%.2f\n",sales5, (float)sales5*6.87 ) ;
	
	
	return 0 ;
} // end function main 












