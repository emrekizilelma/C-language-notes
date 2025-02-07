#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(int argc, char* argv[]) {
    int input, sum = 0;

    printf("Enter the number: ");
    scanf("%d", &input);

    for (int i = 0; i <= input; i++) {
        sum = sum + i;
    }

    printf("%d\n", sum);

    return EXIT_SUCCESS;
}