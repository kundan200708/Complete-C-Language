/* #if */
/*
    This directive is used to test a constant expression during
    preprocessing. If the expression evaluates to true (non-zero),
    the code inside the #if block is compiled. Otherwise, it is skipped.

    e.g : -
        #define VALUE 10

        #if VALUE > 5
            printf("VALUE is greater than 5");
        #endif
*/
#include <stdio.h>

#define VALUE 10

int main() {

    #if VALUE > 5
        printf("VALUE is greater than 5\n");
    #endif

    return 0;
}