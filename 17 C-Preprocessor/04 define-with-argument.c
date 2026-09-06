/*
define with argument:-
                     -->A #define with arguments is called a function-like macro.

                     --> It allows us to pass values to a macro.

                     -->The arguments are replaced by the corresponding values during preprocessing.

(*) Syntax:-
             #define MACRO_NAME(argument) expression

             e.g : #define sqr(x) ((x) * (x))

*/
#include <stdio.h>
#define sqr(x)  ((x) * (x))

void main(){
    int y = 5;
    printf("Value of sqrt is = %d\n", sqr(y));
}

/*
    How macro substitution will be carried out?
    
    r = sqr(a) + sqr(30); --> r = a * a + 30 * 30;


    The macro definition should have been written as : 
        #define sqr(x) (x) (x)
        r = (a+b) * (a + b);
*/