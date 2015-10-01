/*
 File name: SieveOfEratosthenes_5162522_A2_main.c
 
 Disclaimer: I hereby certify that this collective work is my own
             and none of it is the work of any other person or entity.
 
 Created by Alicia Rodriguez on 9/24/15.
 Panther ID: 5162522
 
 Description:
 The Main function file which prompts the user to choose a number from 2
 through 10,000 and checks if the input was valid; otherwise, repeat. If
 input is valid, then it will call the primeSearch function.
 
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
        
        if (userInput >= 2 && userInput <= LIMIT)
        {
            printf("Your input is OK.\n");
            primeSearch(userInput);
            
        } else {
            printf("Your input is not OK. Please try again. \n");
        }
        
    } while (userInput < 2 || userInput > LIMIT);
}


/*      ** REMEMBER THIS FUNCTION MUST BE IN A SEPARATE FILE **
   The primeSearch function will search for the prime numbers between
   2 and userInput */
void primeSearch(int userInput)
{
    int i, j, insert, temp1, temp2;
    
    printf("Welcome!\n");
    printf("%s %d \n", "We are going to search for all of the prime numbers between 2 and", userInput);
    
    int rangeList[userInput - 1];   /* Initialize an array of userInput - 1.
                                     Ex) If the userInput is 10, then the array needs to have
                                     9 available spots for numbers 2 - 10. Must exclude
                                     numbers 0 and 1 because they are not prime. */
    
    printf("\nNumbers in the rangeList array: \n");
    // Fill the array with numbers 2 through userInput and print
    for (i = 2; i <= userInput; i++)
    {
        rangeList[i] = i;
        printf("%d ", rangeList[i]);
    }
    
    printf("\n\n");
    
    int *element;   /* A pointer, element: which points to an int.
                     This pointer will be used to access and reference the elements
                     in the array, rangeList */
    
    int primeList[LIMIT];   /* The array which will contain the prime numbers */
    
    printf("\nNumbers in the rangeList when replacing multiples to 0: \n");
    
    for (j = 0; j <= userInput; j++)
    {
        element = &rangeList[j]; // element is pointing to the number 2
        insert = *element;       // insert is now the number 2, insert = 2
        
        if (insert != 0)
        {
            primeList[j] = insert;
            temp1 = rangeList[insert + j];
            
            if((insert + j) <= userInput)
            {
                rangeList[insert + j] = 0;
            }
        } else {
            temp2 = rangeList[temp1];
            rangeList[temp1] = 0;
        }
        
        printf("%d ", rangeList[j]);
    }
    
    printf("\n\n");
    
    
}

// Replace all numbers which are multiples of x to number 0.
// Put x to a primeList array, which is the array that holds all of the prime numbers
// from 2 through userInput.

// 1. Go to first element of array and put it in the primeList array.
// 2. Get the next multiple of that number and replace it with number 0.
// 3. Repeat, and get the second element of the array.
    // If second element of the array is 0
    // then go to the third element in the array
    // otherwise, put the number in the primeList
    // and get the next multiple of that number and replace it with number 0.







