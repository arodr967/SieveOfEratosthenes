/*
 File name: SieveOfEratosthenes_5162522_A2_main.c
 
 Disclaimer: I hereby certify that this collective work is my own and none of it is the work of any other person or entity.
 Created by Alicia Rodriguez on 9/24/15.
 Panther ID: 5162522
 
 Description:
 The Main function file
*/

#include "SieveOfEratosthenes_5162522_A2.h"
#include <stdio.h>
#include <math.h>

//Constants:
#define LIMIT 10000

//Prototype:
void primeSearch(int userInput);

/* Must set the return value to void 
   The compiler on MacBook, does not like the main type to be void */
int main()
{
    int userInput;
    
    do {
        
        printf("Please choose a number from 2 - 10000 for your upper limit: ");
        scanf("%d", &userInput);
        
        printf("\n");
        
        printf("%s %d \n", "This is your input: ", userInput);
        
        if (userInput >= 2 && userInput <= 10000)
        {
            printf("Your input is OK.\n");
            primeSearch(userInput);
            
        } else {
            printf("Your input is not OK. Please try again. \n");
        }
        
    } while (userInput < 2 || userInput > 10000);
}


/* The primeSearch function will search for the prime numbers between
   2 and userInput */
void primeSearch(int userInput)
{
    printf("Welcome!\n");
    printf("%s %d \n", "We are going to search for all of the prime numbers between 2 and", userInput);
    
    int rangeList[userInput - 1];   /* Initialize an array of userInput - 1.
                                     Ex) If the userInput is 10, then the array needs to have
                                     9 available spots for numbers 2 - 10. Must exclude
                                     numbers 0 and 1 because they are not prime. */
    
    printf("\nNumbers in array: \n");
    // Fill the array with numbers 2 through userInput and print
    for(int i = 2; i <= userInput; i++)
    {
        rangeList[i] = i;
        printf("%d ", rangeList[i]);
    }
    
    printf("\n\n");
}







