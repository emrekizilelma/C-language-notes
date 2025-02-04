#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define SIZE 10

/*
There is a 4 step for compiling c program:

1) Preprocess  gcc -E program.c -> for after pre-process situation 
2) Compile     gcc -S program.c -> for assembly code
3) Assemble    gcc -c program.s -> for pbject file *.o
4) Link        gcc *.o -lm or gcc -o program_name_here *.o -lm     

Note: Look at that https://www.learnc.net/c-tutorial/c-compilation-model-and-processes/
*/

int main(int argc, char* argv[]) {
    uint8_t num1 = 0 , num2 = 255;

    printf("num1: %d num2: %d\n", num1, num2);

    return EXIT_SUCCESS;
}