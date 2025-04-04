#include <stdio.h>

int main(int argc, char* argv[]) {
/*

    Basic Data Types are:

    1.) char
    2.) int
    3.) float
    4.) double
    5.) void

    Derivative of data types are: 

    * array
    * string
    * enum
    * pointer
    * struct
    
    */

   /*

   1.) Char
    It's designed for holding character variables. It's 1 byte. 
    Char data type is actually also integer data type because
    every character in operating systems, representing integer value. 
    
    for example: 65 for A 97 for a

    see: ASCII
*/
    char letter1 = 'A';
    char letter2 = 97;

    printf("letter1: %c ASCII: %d\n", letter1, letter1);
    printf("letter2: %c ASCII: %d\n", letter2, letter2);

/*
    2.) Int
     It's for integer values. Holding minimum 2 byte (16 bit).
     using in printf as a %d or %i    
*/
     int x = 123456;
     printf("\nx: %d\n", x);
     

/*
    3.) Float
     Holding point integers like 3.14 float has 6 precision.
     holding minimum 4 byte which 32 bit format specifier is %f
     for 5 precision %.5f
*/

    float pi = 3.14159265358979323846;
    float num = 2.71;

    printf("\npi: %.2f\n", pi);
    printf("pi: %.10f\n", pi);

    printf("num: %f\n", num);
    printf("num: %.15f\n\n", num);

/*
    4) Double
     It's has 10 precision minimum 8 byte which 64 bit.

*/

    double double_pi = 3.14159265358979323846;

    printf("double_pi: %f\n", double_pi);
    printf("double_pi: %.10f\n", double_pi);
    printf("double_pi: %.15f\n\n", double_pi);

// void used in functions and pointers in generally

    printf("%d\n", sizeof(char));
    printf("%d\n", sizeof(int));
    printf("%d\n", sizeof(float));
    printf("%d\n", sizeof(double));
    printf("%d\n", sizeof(size_t));
    printf("%d\n", sizeof(long long int));
    
    return 0;
}