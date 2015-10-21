/*
 File name: SieveOfEratosthenes_A2.h
 User-defined header file.
 */

#ifndef SieveOfEratosthenes_A2_h
#define SieveOfEratosthenes_A2_h

#include <stdio.h>
#include <math.h>

//Constants:
#define LIMIT 10000
#define MIN 2
#define COLUMN 8
#define NOT_PRIME 0 //false

//Prototype:
void primeSieve(int userInput);
void printPrime(int rangeList[], int userInput);

#endif /* SieveOfEratosthenes_A2_h */
