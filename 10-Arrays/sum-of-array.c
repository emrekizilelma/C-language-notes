#include <stdio.h>

#define BUFFER 5

int main(void) {
    int array[BUFFER] = {};
    int length = sizeof(array) / sizeof(array[0]); // -> 5
    
    int i = 0;
    while(i < length) {
        printf("array[%d] = ", i);
        scanf("%d",&array[i]);
        i++;
    }


    int j = 0;
    for(j = 0; j < length; j++) {
        printf("array[%d] = %d\n", j, array[j]);
    }
    int sum = 0, k = 0;
    for(k = 0; k < length; k++) {
        sum = sum + array[k];
    }

    printf("Sum: %d\n", sum);

    return sum; // check out the echo $? :)

    return 0;
}