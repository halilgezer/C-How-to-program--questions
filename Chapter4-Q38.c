/*
Author is : Ibrahim Halil GEZER
4.38 (World Population Growth) World population has grown considerably over the centuries.
Continued growth could eventually challenge the limits of breathable air, drinkable water, arable
cropland and other limited resources. There is evidence that growth has been slowing in recent years
and that world population could peak some time this century, then start to decline.
For this exercise, research world population growth issues online. Be sure to investigate various
viewpoints. Get estimates for the current world population and its growth rate (the percentage by
which it’s likely to increase this year). Write a program that calculates world population growth
each year for the next 75 years, using the simplifying assumption that the current growth rate will stay
constant. Print the results in a table. The first column should display the year from year 1 to year
75. The second column should display the anticipated world population at the end of that year.
The third column should display the numerical increase in the world population that would occur
that year. Using your results, determine the year in which the population would be double what it
is today, if this year’s growth rate were to persist.
*/

#include <stdio.h>
int main ()
{	// function main begins execute
	float  rate ;
	unsigned long long int population,future ;
	int i ;
	printf ( "World poppulation in 2020 is : 7.783.273.760 \n"); 
	population = 7783273760 ;
	printf ( "Population growth rate is : 1.05 \n"); 
	rate = 1.05 ;
	future = population * rate ; //calculate future
	printf ("\n%5s %25s\n", "Year","World Population") ;
	
	for (i =1; i<=75; i++){ // for begins 
		printf ("%3d : %20llu\n", i, future) ; 
		future *= rate ; //
		
} // for ends 

	return 0 ;
} // function main ends

