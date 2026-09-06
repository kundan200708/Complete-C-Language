/* #else */
/*
    This directive is used with #if, #ifdef, or #ifndef to specify
    an alternative block of code that will be compiled when the
    condition is false.

    e.g : -
        #define VALUE 5

        #if VALUE > 10
            printf("VALUE is greater than 10");
        #else
            printf("VALUE is less than or equal to 10");
        #endif
*/
#include <stdio.h>

#define VALUE 5

int main() {

    #if VALUE > 10
        printf("VALUE is greater  than 10\n");
    #else
        printf("VALUE is less than or equal to 10\n");
    #endif

    return 0;
}