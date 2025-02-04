#include <stdio.h>

int main(int argc, char argv[]) {
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
     printf("x: %d\n", x);
     
     return 0;

/*
    3.) Float
*/
}