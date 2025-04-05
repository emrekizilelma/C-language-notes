#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int array[] = {10, 2, 4, 77, 88, 99, 45, 22, 26, 55, 84};
    int out = 0;

    printf("Enter the num that you looking in the array: ");
    scanf("%d",&out);

    int length = sizeof(array) / sizeof(array[0]);
    int i = 0, flag = 0;
    while(i < length) {
        if(out == array[i]) {
            flag = 1;
            break;
        }
        i++;
    }

    if(flag) {
        printf("Found %d in array[%d] of array\n", out, i);
    }

    else {
        printf("Not found!\n");
    }

    return EXIT_SUCCESS;
}