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

/* Must set the return value to void 
   The compiler on MacBook, does not like the main type to be void */
int main()
{
    int userInput;
    
    printf("Please choose a number from 2 - 10000 for your upper limit: \n");
    scanf("%d", &userInput);
    
    printf("%s %d \n", "This is your input: ", userInput);
}
