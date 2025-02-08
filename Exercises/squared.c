#include <stdio.h>

int main(void) {
    int input = 0, sum = 0;

    printf("Enter the number: ");
    scanf("%d", &input);

    for(int i = 0; i <= input; i++) {
        printf("num: %d result: %d\n", i, (i * i));
        sum = sum + (i * i);
    }

    printf("Sum: %d\n", sum);

    return 0;
}