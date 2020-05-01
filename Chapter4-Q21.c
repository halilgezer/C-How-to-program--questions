/*
4.21 Rewrite the program of Fig. 4.2 so that the initialization of the variable counter is done in
the definition rather than in the for statement.

*/ 
#include <stdio.h>
 int main (void)
 {
int counter = 1;
    
    for( ; counter <= 10; counter++)
        printf("%d\n", counter );

    return 0;
}

