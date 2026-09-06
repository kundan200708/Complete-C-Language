/* #ifdef */
/*
#ifdef means "if defined".
It checks whether a particular macro has been defined.
If the macro is defined, the code between #ifdef and #endif is compiled.
It is a preprocessor directive.


    This directive is used to check whether a macro is defined or not.
    If the macro is defined, the code inside the #ifdef block is compiled.
    Otherwise, the code is skipped.

(*) Syntax:-
           #ifdef MACRO_NAME
            // code
           #endif


    e.g : -
        #define PI 3.142

        #ifdef PI
            printf("PI is defined");
        #endif
*/
#include <stdio.h>

#define PI 3.142

int main()
{

#ifdef PI
    printf("PI is defined\n");
#endif

    return 0;
}