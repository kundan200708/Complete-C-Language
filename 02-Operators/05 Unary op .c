/*
Unary operator:-> 
               --> It is used to perform operation on single operand it increases or decreases the valur by 1.
               -->The word unary means  one.
              
                           UNARY OPERATOR
                                 |
        -----------------------------------------------------------------
        |                                                               |
     Increment  (++)                                                  Decrement  (--)
     ->Increases vlaue by1                                          -->Decreases value by 1
            |                                                              |
    ----------------------                                       ----------------------------
    |                    |                                       |                          |
 pre(++a)               post (a++)                              pre(--a)                 post (a--)
 increment             increment                              Decrement                      Decrement


1. Pre-Increment (++value):-
                        --->The value is increased first when at time of compilization, and then it is used.
*/
#include <stdio.h>

int main()
{
    // Here we are implementing that pre increment.
    int age = 20;

    printf("Age = %d\n", ++age);// here its output will be 21.

    return 0;
}
/*
2. Post-Increment (value++):-
                          ---> Increment will effective when compiler moves at next line .

*/
#include <stdio.h>

int main()
{
    int age = 20;

    printf("Age = %d\n", age++);// Here the value of age is 20

    printf("New Age = %d\n", age);// here the vlaue of age is 21.

    return 0;
}

/*
Pre Decrement and Post Decrement :-

*/
#include <stdio.h>

int main()
{
    int temperature = 30;

    // Pre-decrement
    printf("Pre-decrement: %d\n", --temperature);

    // Reset temperature
    temperature = 30;

    // Post-decrement
    printf("Post-decrement: %d\n", temperature--);

    printf("After post-decrement: %d\n", temperature);

    return 0;
}