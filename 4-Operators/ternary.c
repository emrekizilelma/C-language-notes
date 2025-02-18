#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int var = 0;

    printf("Enter the number: ");
    scanf("%d", &var);

    int result = var > 10 ? ++var : --var;

    printf("Result: %d\n", result);

    return EXIT_SUCCESS; 
}