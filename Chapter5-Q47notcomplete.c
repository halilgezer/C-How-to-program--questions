/* 

5.47 (Craps Game Modification) Modify the craps program of Fig. 5.10 to allow wagering.
Package as a function the portion of the program that runs one game of craps. Initialize variable
bankBalance to 1000 dollars. Prompt the player to enter a wager. Use a while loop to check that
wager is less than or equal to bankBalance, and if not, prompt the user to reenter wager until a valid
wager is entered. After a correct wager is entered, run one game of craps. If the player wins, increase
bankBalance by wager and print the new bankBalance. If the player loses, decrease bankBalance by
wager, print the new bankBalance, check if bankBalance has become zero, and if so print the message,
"Sorry. You busted!" As the game progresses, print various messages to create some “chatter”
such as, "Oh, you're going for broke, huh?" or "Aw cmon, take a chance!" or "You're up big. Now's
the time to cash in your chips!"
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int bankBalance = 1000;
int bet;

int placeBet( void );
int rollDice( void );
int getRandomNum( int, int );
void printRandomComment( void );


int main()
{
    int gameStatus, sum, myPoint;
    int choice;
    
    srand(time( NULL ));
        
    int continuePlaying = 1;
    
    while(continuePlaying > 0)
    {
        placeBet(); 
        
        gameStatus = 0;
        sum = rollDice();
        
        switch(sum) 
        {
            case 7: case 11:
                gameStatus = 1;
                break;
            case 2: case 3: case 12:
                gameStatus = 2;
                break;
            default:
                gameStatus = 0;
                myPoint = sum;
                printf("Point is %d\n", myPoint );
                break;
        }
        
        while(gameStatus == 0)
        {
            sum = rollDice();
            
            if(sum == myPoint)
                gameStatus = 1;
            else if(sum == 7)
                gameStatus = 2; 
        }
        
        if(gameStatus == 1) {
            printf("Player wins\n");
            bankBalance += (bet * 2);
        } 
        else
            printf("Player loses\n");
        
        if(bankBalance > 0)
        {
            printf("\nDo you want to continue write '1' Enter your choice: ");
            scanf("%d", &choice);
        
            if( choice != 1 ) {
                continuePlaying = 0;
            }
        } else {
            printf("\n\"Sorry. Game Over!\"\n");
            continuePlaying = 0;
        }
    }
    return 0;
}


int wageBet( void )
{
    int valid=1, getBet=1;
    
    printf("Your current bank balance is $%d\n\n", bankBalance);
    
    if(bankBalance > 0)
    {
        while( getBet ) 
        {
        	int bet ;
            printf("How much do you want to bet?: ");
            scanf("%d", &bet);
            if( bet > 0 && bankBalance - bet > 0 ) {
                bankBalance -= bet;
                getBet = 0;
            } else {
                printf( "\nInvalid value entered  ! Your account has $%d \n", bankBalance);
                
            }
        }
        if(getRandomNum (1,2) == 2 )
            printRandomComment();
    }
    
    return valid;
}

int rollDice( void )
{
    int die1, die2, worksum;
    
    die1 = getRandomNum(1, 6);
    die2 = getRandomNum(1, 6);
    worksum = die1 + die2;
    printf("Player rolled %d + %d = %d\n", die1, die2, worksum );
    
    return worksum;
}


int getRandomNum(int min, int max)
{
    int res = min + rand()%max;
    return res;
}


void printRandomComment()
{
    int comment = getRandomNum ( 1, 6 ) ;
    
    switch(comment)
    {
        case 1:
            printf("\n\"Oh, you're going for broke, huh?\"\n\n");
            break;
        case 2:
            printf("\n\"Aw cmon, take a chance.\"\n\n");
            break;
        case 3:
            printf("\n\"Are you shikkun?\"\n\n");
            break;
        case 4:
            printf("\n\"Last of the big betters, I don't think.\"\n\n");
            break;
        case 5:
            printf("\n\"You probably should have just cashed in your chips.\"\n\n");
            break;
        case 6:
            printf("\n\"Now that's better.\"\n\n");
            break;
        default:
            break;  
    }   
}


