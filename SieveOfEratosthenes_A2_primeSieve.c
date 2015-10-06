/*
  File name: SieveOfEratosthenes_A2_primeSieve.c
*/

#include "SieveOfEratosthenes_A2.h"

/* The primeSieve function will search for the prime numbers between
   2 and userInput and set them as NOT_PRIME */
void primeSieve(int userInput)
{
    int fill, index, end, num, temp;
    
    int rangeList[userInput + 1];   /* Initialize an array of userInput + 1, because
                                     we need numbers 0 through userInput. */
    printf("\n\n");
    printf("Welcome!\n");
    printf("We are going to sieve for all of the prime numbers between 2 and %d!\n", userInput);
    
    
    /* Fill the array with numbers 2 through userInput */
    for (fill = 0; fill <= userInput; fill++)
    {
        rangeList[fill] = fill;
    }
    
    printf("\n\n");
    
    end = sqrt(userInput);    /* By taking the square root of the userInput,
                               that's when we will stop eliminating the multiples
                               of each number. Therefore, we don't have to go through
                               each element in the rangeList */
    printf("For sieving purposes, the approximate square root of %d is: %d\n", userInput, end);
    
    for(index = 2; index <= end; index++) /* Start at index 2 for the outer loop until
                                           the sqrt of userInput has been reached */
    {
        num = index;    /* set num to outer */
        temp = num;     /* and temp to num */
        
        while(temp <= userInput)    /* Continue until temp is greater than userInput */
        {
            temp += num; /* add num to itself and set it to temp, to get
                          the next number to set as isNotPrime or jump to */
            
            /* Check if the value is not already a prime and temp is less thn the userInput */
            if((rangeList[temp] != NOT_PRIME) && (temp <= userInput))
            {
                rangeList[temp] = NOT_PRIME;   /* Mark the value as not prime: 0 */
            }
        }
        
    }
    printf("\n");
    
    printPrime(rangeList, userInput); /* Call function to print the prime numbers */
}
