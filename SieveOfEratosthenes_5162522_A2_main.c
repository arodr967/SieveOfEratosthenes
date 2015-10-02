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
    int i, outer, inner, end, num , temp;
    
    int rangeList[userInput + 1];   /* Initialize an array of userInput + 1, because
                                       we need numbers 0 through userInput. */
    
    printf("Welcome!\n");
    printf("%s %d \n", "We are going to search for all of the prime numbers between 2 and", userInput);
    
    printf("\nNumbers in the rangeList array: \n");
    // Fill the array with numbers 2 through userInput and print
    for (i = 0; i <= userInput; i++)
    {
        rangeList[i] = i;
        printf("%d ", rangeList[i]);
    }
    
    printf("\n\n");
    
    end = sqrt(userInput);    /* By taking the square root of the userInput,
                                 that's when we will stop eliminating the multiples
                                 of each number. Therefore, we don't have to go through
                                 each element in the rangeList */
    printf("%s %d \n", "The square root is: ", end);
    
    
    
    for(outer = 2; outer <= end; outer++)
    {
        num = outer;    // set num to outer
        temp = num;     // and temp to num
        
        while(temp <= userInput)
        {
            temp += num; //add num twice to get the next number to eliminate/go-to
            
            /* Check if the value is not already a prime and temp is less thn the userInput */
            if((rangeList[temp] != isNotPrime) && (temp <= userInput))
            {
                rangeList[temp] = isNotPrime;   /* Mark the value as not prime */
            }
        }
        
    }
    printf("\n");
    
    //Print again
    for (i = 2; i <= userInput; i++)
    {
        printf("%d ", rangeList[i]);
    }
    
    printf("\n\n");
}







