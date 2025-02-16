#include <stdio.h>

int main(void) {
    int var_1 = 10;
    int var_2 = 11;

    printf("Result: %d\n", var_1 > var_2);
    printf("Result: %d\n", var_1 < var_2);
    printf("Result: %d\n", var_1 >= var_2);
    printf("Result: %d\n", var_1 <= var_2);
    printf("Result: %d\n", var_1 == var_2);
    printf("Result: %d\n\n", var_1 != var_2);

    return 0;
}