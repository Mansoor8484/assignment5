#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    //values for int data type
    printf("min and max values of int:\n");
    printf("Min: %d\n", INT_MIN);
    printf("Max: %d\n", INT_MAX);
    //values for long data type
    printf("\nmin and max of long:\n");
    printf("Min: %d\n", LONG_MIN);
    printf("Min: %d\n", LONG_MAX);
    //values for float data type
    printf("\nmin and max of float:\n");
    printf("Min: %d\n", FLT_MIN);
    printf("Min: %d\n", FLT_MAX);
    //values for double data type
    printf("\nmin and max of double:\n");
    printf("Min: %d\n", DBL_MIN);
    printf("Min: %d\n", DBL_MAX);

    return 0;
}