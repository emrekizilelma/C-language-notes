#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(void) {
    float pi = 3.14;
    int cast_pi = (int) pi;

    printf("%.2f\n", pi);
    printf("%d\n", cast_pi);

    // (int) (float) (double) thats casting operator

    float a =  (float) 7 / 3;

    printf("%.2f\n", a);

    return EXIT_SUCCESS;
}