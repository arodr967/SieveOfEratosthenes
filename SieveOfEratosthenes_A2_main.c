/*
 File name: SieveOfEratosthenes_A2_main.c
 
 Disclaimer: I hereby certify that this collective work is my own
 and none of it is the work of any other person or entity.
 
 Created by Alicia Rodriguez.
 Panther ID: 5162522
 Due date: 10/06/15 @ 6:25PM
 
 Description:
 The Main function file which prompts the user to choose a number from 2
 through 10,000 and checks if the input is valid; otherwise, repeat. If
 input is valid, then it will call the primeSearch function, which will
 search for the prime numbers between that range and then print them.
 
 */

#include "SieveOfEratosthenes_A2.h"

/* Main function which validates user input. */
int main()
{
    int userInput;
    char buffer;
    
    do { /* Ask the user at least once */
        printf("\n");
        printf("Please choose a number from 2 - 10000 for your upper limit: ");
        scanf("%d", &userInput);
        
        printf("\n");
        
        if (userInput >= MIN && userInput <= LIMIT)
        {
            printf("Your input is OK.\n");
            primeSieve(userInput);
        } else {
            printf("Your input is not OK. Please try again. \n");
            while((buffer = getchar()) != '\n' && buffer != EOF); /* To prevent an infinate loop */
        }
        
    } while (userInput < MIN || userInput > LIMIT);
    
    return 0;
}
