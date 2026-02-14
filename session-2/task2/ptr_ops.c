





/*
 * Use the address and dereferencing operators on variables and pointers 
 * Display value and addres data via the variable and then via the pointer
 */

#include <stdio.h>

int main( void ) {

    float value = 4.15;
    float *pointervalue;
    pointervalue = &value;
    int new = (int) value;
    printf("%d\n",new);
    printf("The value of the value is %f\n",value);
    printf("The address of the value is %p\n",&value);
    printf("The value of the pointer is %p\n",pointervalue);
    printf("The derefrence of the pointer is %f\n",*pointervalue);
    
    return 0;
}

