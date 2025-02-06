#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

uint8_t to_upper(char c) {
    return c - 32;
}

int main(int argc, char* argv[]) {
    printf("%c", to_upper('c'));

    return EXIT_SUCCESS;
}