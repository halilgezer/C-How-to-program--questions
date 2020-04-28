/*
3.47 (World Population Growth Calculator) Use the web to determine the current world population
and the annual world population growth rate. Write an application that inputs these values,
then displays the estimated world population after one, two, three, four and five years.
*/

#include <stdio.h>
int main ()
{	// function main begins execute
	float  rate ;
	 unsigned long int population,future ;
	printf ( "World poppulation in 2020 is : "); // ask population
	scanf ( "%lu",&population ); // read it
	printf ( "Population growth rate is :"); //ask rate
	scanf ( "%f", &rate); // read it 
	future = population * rate ; //calculate future
	
	for (int i =1; i<=5; i++){ // for begins 
		printf ("%d year later world population will be : %lu\n", i, future) ; 
		future *= rate ; //
		
} // for ends 

	return 0 ;
} // function main ends
