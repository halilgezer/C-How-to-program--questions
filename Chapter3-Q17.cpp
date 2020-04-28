/*3.17 (Gas Mileage) Drivers are concerned with the mileage obtained by their automobiles. One
driver has kept track of several tankfuls of gasoline by recording miles driven and gallons used for
each tankful. Develop a program that will input the miles driven and gallons used for each tankful.
The program should calculate and display the miles per gallon obtained for each tankful. After processing
all input information, the program should calculate and print the combined miles per gallon
obtained for all tankfuls. Here is a sample input/output dialog:
*/
#include <stdio.h>
int main() {
  int counter = 0 ;
  float gallons, miles, tankAverage, overallAverage, total;
  total = 0;
  while(true) { // while begins 
    printf( "Enter the gallons used, (-1 to end): " );
    scanf( "%f", &gallons );
    if ( gallons == -1 ) { // if begins 
      overallAverage = total / counter;				//
      printf( "The overall average miles/gallon was %f\n", overallAverage );
   //   printf ("count is %d",counter);
      return 0;
    } // end if
    printf( "Enter the miles driven: " );
    scanf( "%f", &miles );
    tankAverage = miles / gallons;						//
    printf( "The miles per gallon for this tank was %f\n", tankAverage );
    total += tankAverage;
    counter += 1;
  } //end while
  
 // printf ("count is %d",counter);
  return 0;
} // end main function 
