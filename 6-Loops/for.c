#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(void) {
    int num = 0;

    printf("Pozitif bir değer girin: ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++) {
        for(int j = 0; j < i; j++) {     
            printf("*");
        }
        printf("\n");
    }

    return EXIT_SUCCESS;
}
