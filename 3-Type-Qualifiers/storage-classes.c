#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "extern.h"

/*
    static
    auto
    register
    extern
*/

extern int sayi1, sayi2;    // Sharing same memory map, extern.h = storage-classes.c

void counter() {
    static int count = 0;

    count = count + 1;

    printf("%d\n", count);
}

int main(void) {
    printf("%d\n%d\n", num1, num2);

    register uint8_t reg_int = 10;  // register is basically holding variables value from CPU not MEMORY!
                                    // So printf("%d", *reg_ptr); will give error.

    printf("reg_int: %d\n", reg_int);

    counter();
    counter();

    while (1) {    // Funny joke
        counter();
    }


    auto int x = 10; // not necessary really its same with int x = 10;

    return EXIT_SUCCESS;
}