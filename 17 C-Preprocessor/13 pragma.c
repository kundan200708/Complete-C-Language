/* #pragma */
/*
    This directive is used to give special instructions
    to the compiler.

    It is compiler-specific (not fully standard).
*/
#include <stdio.h>

#pragma message("Compiling this program")

int main() {
    printf("Hello World\n");
    return 0;
}