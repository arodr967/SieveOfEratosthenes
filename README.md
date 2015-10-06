# SieveOfEratosthenes #
Program in C.

_"The Sieve of Eratosthenes is a simple, ancient algorithm for finding all prime numbers up to a specified integer."_

-------------

- Generate a table of prime numbers for integers not to exceed 10000. Output format in columns, right-aligned. Implement the Sieve of Eratosthenes algorithm to isolate the prime numbers.

- As specified in the assignment specifications, "Must use arrays and may use pointers", I used array and chose not to use pointers.

- This program includes seperate source code files for the main, primeSieve, and printPrime functions, as well as the user-defined header file.

__Input__: Accept user input for the upper limit of the prime search (2-10000). Validate user input. 


__Output__: Generate a table of prime numbers for integers not to exceed 10000. Output format in columns, right-aligned.


### How to compile and link files for execution: ###


If running the program in __Linux__ or __Windows__, please use the following to compile:

gcc SieveOfEratosthenes_A2_main.c SieveOfEratosthenes_A2_primeSieve.c SieveOfEratosthenes_A2_printPrime.c SieveOfEratosthenes_A2.h -lm

__NOTE__: Must use -lm, because of _< math.h >_


If running the program in __OS X__, please use the following to compile:

gcc SieveOfEratosthenes_A2_main.c SieveOfEratosthenes_A2_primeSieve.c SieveOfEratosthenes_A2_printPrime.c SieveOfEratosthenes_A2.h

__WARNING__: When running the main function as type void, the compiler complains and insist that it should be type int.



_References_: 

http://stackoverflow.com/questions/8548909/smart-way-to-format-tables-on-stdout-in-c-c
http://stackoverflow.com/questions/757627/how-do-i-align-a-number-like-this-in-c
http://alvinalexander.com/programming/printf-format-cheat-sheet
http://stackoverflow.com/questions/7109964/creating-your-own-header-file-in-c
https://en.wikipedia.org/wiki/Sieve_of_Eratosthenes
https://www.youtube.com/watch?v=V08g_lkKj6Q
