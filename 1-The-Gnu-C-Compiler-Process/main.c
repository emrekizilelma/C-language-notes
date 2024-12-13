/*

Date: December 13 2024

A very simple program for understanding compiling process
in C programming language with Gnu C Compiler.

*/

//#include <stdlib.h> for EXIT_SUCCESS

#include <stdio.h> // Standard I/O library for C. Like printf, scanf functions etc.

int main(void) // Basically entry point of C program. When its compiling,  that's where starting to compiling.
               // There is a should be a main function in any C projects.
{
    printf("Hello World!\n"); // Calling a function called printf which writes string to stdin.

    return 0;   // main function is int type so it's must be returning any value. E
                //return EXIT_SUCCESS; also works.
}
