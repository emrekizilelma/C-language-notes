#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#define PI 3.14


double circle_area(uint16_t radius) {
    return PI * (radius * radius);
}

double circle_perimeter(uint16_t radius) {
    return 2 * PI * radius;
}


int main(void) {
    uint16_t radius = 0;

    printf("Radius: ");
    scanf("%hu", &radius);
    
    printf("Perimeter of circle: %.2f\n", circle_perimeter(radius));
    printf("Area of the circle: %.2f\n", circle_area(radius));

    return EXIT_SUCCESS;
}