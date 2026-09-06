/*
#define:-
        --> #define is a preprocessor directive used to define macros or symbolic constants.

        -->It is processed before compilation.

        -->It does not require a semicolon (;).

        --> The defined value is substituted wherever the macro appears.
(*)Syntax:-

            #define NAME value

Here is simple example based on define preprocessor given below:-
*/


#include <stdio.h>
#define PI 3.142

int main(){

    float r = 3.5;
    float area = PI * r * r;
    
    printf("Area of circle : %f",area);

    return 0;
}