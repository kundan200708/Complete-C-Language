/* #error */
/*
    This directive is used to generate a compile-time error message.
    When the preprocessor encounters #error, compilation stops immediately.

    It is commonly used to enforce conditions or prevent incorrect builds.

    e.g : -
        #define VERSION 1

        #if VERSION < 2
            #error "Version is too old, upgrade required"
        #endif
*/
#include <stdio.h>

#define VERSION 2

int main() {

    #if VERSION < 2
        #error "Version is too old, upgrade required"
    #endif

    printf("Program running...\n");

    return 0;
}