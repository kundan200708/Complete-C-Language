/* #undef */
/*
    This directive is used to undefine a macro that was previously defined
    using #define. After undefining, the macro name can no longer be used
    unless it is defined again.
(*)Syntax:-
          #undef MACRO_NAME

    e.g : -
        #define PI 3.142
        #undef PI
*/
#include <stdio.h>

#define PI 3.142

int main() {

    float r = 3.5;
    float area = PI * r * r;

    printf("Area of circle : %f\n", area);

    #undef PI

    return 0;
}