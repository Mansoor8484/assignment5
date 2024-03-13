#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    //values for int data type
    printf("\nmin and max values of int:\n");
    printf("Min: %d\n", INT_MIN);
    printf("Max: %d\n", INT_MAX);
    printf("Overflow min: %d", INT_MIN -1);
    printf("\nOverflow max: %d", INT_MAX + 1);


    //values for long data type
    printf("\n\nmin and max of long:\n");
    printf("Min: %ld\n", LONG_MIN);
    printf("Max: %ld\n", LONG_MAX);
    printf("Overflow min: %ld", LONG_MIN - 1);
    printf("\nOverflow min: %ld", LONG_MAX + 1); 

    
    //values for float data type
    printf("\n\nmin and max of float:\n");
    printf("Min: %f\n", FLT_MIN);
    printf("Max: %f\n", FLT_MAX);
    printf("Overflow min: %f", FLT_MIN - 1);
    printf("\nOverflow min: %f", FLT_MAX + 1); 


    //values for double data type
    printf("\n\nmin and max of double:\n");
    printf("Min: %lf\n", DBL_MIN);
    printf("Max: %lf\n", DBL_MAX);
    printf("Overflow min: %lf", DBL_MIN - 1);
    printf("\nOverflow min: %lf", DBL_MAX + 1); 
    

    return 0;
}