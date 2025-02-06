#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <ctype.h>

#define BUFFER 100

int main(int argc, char* argv[]) {
    const char data[BUFFER];

    char* number = "256";
    int _number_ = atoi(number);
    float _f_number_ = atof(number);

    printf("%d\n\n", _number_);
    printf("%f\n\n", _f_number_);


    printf("Enter a string: ");
    fgets(data, sizeof(data), stdin);

    printf("You entered: %s\n", data);

    for(int i = 0; i < BUFFER; i++) {
        if (data[i] == '\0') { break; }

        if (isdigit(data[i]) == 1) {
            printf("%c", data[i]);
        }
    }

    return EXIT_SUCCESS;
}