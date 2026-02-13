
/*
 * Use the sizeof() operator to examine memory use 
 * of primitive types char,int,float
 */

#include <stdio.h>

int main( void ) {

    char testChar;
    int testInt;
    float testFloat;

    printf("Char size is %ld bytes\n",sizeof(testChar)); //%ld is long integer, since %d is integer
    printf("Int size is %ld bytes\n",sizeof(testInt));
    printf("Float size is %ld bytes\n",sizeof(testFloat));

    return 0;
}
