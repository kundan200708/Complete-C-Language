/* #elif */
/*
    This directive means "else if" in the C preprocessor.

    It is used after #if or #ifdef to check another condition
    if the previous condition is false.

    e.g : -
        #define VALUE 10

        #if VALUE > 20
            printf("Greater than 20");
        #elif VALUE > 5
            printf("Greater than 5");
        #else
            printf("5 or less");
        #endif
*/
#include <stdio.h>

#define VALUE 10

int main() {

    #if VALUE > 20
        printf("Greater than 20\n");
    #elif VALUE > 5
        printf("Greater than 5\n");
    #else
        printf("5 or less\n");
    #endif

    return 0;
}