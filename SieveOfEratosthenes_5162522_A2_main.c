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
    int i, index, end, insert, temp;
    
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
    printf("%s %d \n", "The square root is: ",end);
    
    
//    int *element;   /* A pointer, element: which points to an int.
//                     This pointer will be used to access and reference the elements
//                     in the array, rangeList */
//    
//    int primeList[userInput];   /* The array of size userInput, 
//                                 which will contain the prime numbers */
    
//    printf("\nNumbers in the rangeList when replacing multiples to 0: \n");
//    
//    for (j = 0; j <= userInput; j++)
//    {
//        element = &rangeList[j]; // element is pointing to the number 2
//        insert = *element;       // insert is now the number 2, insert = 2
//        
//        if (insert != 0)
//        {
//            primeList[j] = insert;
//            temp1 = rangeList[insert + j];
//            
//            if((insert + j) <= userInput)
//            {
//                rangeList[insert + j] = 0;
//            }
//        } else {
//            temp2 = rangeList[temp1];
//            rangeList[temp1] = 0;
//        }
//        
//        printf("%d ", rangeList[j]);
//    }
//    
//    printf("\n\n");
    
//    printf("\nPrime numbers list: ");
//    
//    for(j = 2; j < userInput; j++)
//    {
//        if (rangeList[userInput - 2] % j == 0)
//        {
//            rangeList[userInput] = 0;
//        } else {
//            primeList[j] = userInput;
//        }
//        
//        //printf("%d ", rangeList[j]);
//        printf("%d ", primeList[j]);
//    }
    
//    for (index = 0; index <= userInput; index++)
//    {
//        if(rangeList[userInput - 2] == 0)
//        {
//            userInput = userInput - 1;
//        }
//        
//        if (rangeList[userInput - 2] % rangeList[index] == 0)
//        {
//            //not a prime number
//            rangeList[userInput - 2] = 0;
//        } else {
//            //it is a prime number
//            primeList[index] = rangeList[userInput - 2];
//        }
//    }
//    NO!!!!!
    
    
    
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







