/* #endif */
/*
    This directive is used to terminate a conditional
    preprocessor block started by #if, #ifdef, or #ifndef.

    e.g : -
        #if VALUE > 10
            printf("Greater than 10");
        #endif
*/
#include <stdio.h>

#define VALUE 15

int main() {

    #if VALUE > 10
        printf("VALUE is greater than 10\n");
    #endif

    return 0;
}