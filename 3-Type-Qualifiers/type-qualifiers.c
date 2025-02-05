#include <stdio.h>
#include <stdatomic.h>

_Atomic int counter = 0; // C11 it's more related to threads

int main(int argc, char* argv[]) {
    const float pi = 3.14;

    printf("pi = %.2f\n\n", pi);

    // pi = 0 -> error: assignment of read-only variable ‘pi

    volatile int x; // Basically it's says compiler that "just don't optimize this code" It's important in embedded.


    // It's allow to optimizing the pointers. Memory mapping. Reverse of volatile.

    int num1 = 5, num2 = 10;

    int* restrict ptr1 = &num1;
    int* restrict ptr2 = &num2;

    printf("num1 = %d num2 = %d\n", num1, num2);

    *ptr1 = *ptr1 + 2;
    *ptr2 = *ptr2 + 2;
    *ptr1 = *ptr1 + 10;

    /*
    Equal to -> 
    it's after optimized 
        *ptr1 = *ptr1 + 12;
        *ptr2 = *ptr2 + 2;

    */

    printf("num1 = %d num2 = %d\n\n", num1, num2);

    return 0;
}