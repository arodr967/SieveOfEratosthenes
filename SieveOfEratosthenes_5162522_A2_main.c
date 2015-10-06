/*
 File name: SieveOfEratosthenes_5162522_A2_main.c
 
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

#include "SieveOfEratosthenes_5162522_A2.h"

/* Must set the return value to void 
   The compiler on MacBook, does not like the main type to be void */
void main()
{
    int userInput;
    
    do { /* Ask the user at least once */
        printf("\n");
        printf("Please choose a number from 2 - 10000 for your upper limit: ");
        scanf("%d", &userInput);
        
        printf("\n");
        
        printf("%s %d \n", "This is your input: ", userInput);
        
        if (userInput >= 2 && userInput <= LIMIT)
        {
            printf("Your input is OK.\n");
            primeSieve(userInput);
        } else {
            printf("Your input is not OK. Please try again. \n");
        }
        
    } while (userInput < 2 || userInput > LIMIT);
}


/*      ** REMEMBER FUNCTIONS MUST BE IN A SEPARATE FILE **
   The primeSearch function will search for the prime numbers between
   2 and userInput */
void primeSieve(int userInput)
{
    int fill, index, end, num, temp;
    
    int rangeList[userInput + 1];   /* Initialize an array of userInput + 1, because
                                       we need numbers 0 through userInput. */
    printf("\n\n");
    printf("Welcome!\n");
    printf("We are going to sieve for all of the prime numbers between 2 and %d!\n", userInput);
    
    //printf("\nNumbers in the rangeList array: \n");
    
    // Fill the array with numbers 2 through userInput and print
    for (fill = 0; fill <= userInput; fill++)
    {
        rangeList[fill] = fill;
        //printf("%d ", rangeList[fill]); 
		/* To print the array, but not going to because it could fill up the whole screen*/
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
        num = index;    // set num to outer
        temp = num;     // and temp to num
        
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
