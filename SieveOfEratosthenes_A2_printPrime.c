//
//  SieveOfEratosthenes_A2_printPrime.c
//

#include "SieveOfEratosthenes_5162522_A2.h"


/* printPrime function which will print all of the prime numbers between 2 and userInput */
void printPrime(int rangeList[], int userInput)
{
    int print, count, column;
    int primeList[LIMIT];
    
    print = column = count = 0; /* Set all of the variables to 0 */
    
    printf("The list of prime numbers between 2 and %d: \n", userInput);
    
    for (; print <= userInput; print++)
    {
        if (rangeList[print] != NOT_PRIME && rangeList[print] != 1)
        {
            primeList[print] = print;	/* Copy the prime numbers into the primeList array */
            printf("%6d ", primeList[print]);
            
            count++;	/* Increment the count of prime numbers */
            column++;	/* Increment the columns to align the output */
            
            if (column == 8)	/* Start a new column when column is equal to 8 */
            {
                printf("\n");
                column = 0;
            }
        }
    }
    
    printf("\n\n");
    
    /* Print how many prime numbers there are */
    printf("There are %d prime numbers!\n", count);
    
    printf("\n\n");
}