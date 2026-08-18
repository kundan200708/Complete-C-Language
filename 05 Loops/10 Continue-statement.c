/*
Continue:-
        --> It is used to continue execution of loop i.e when a loop continue statemet is encountered ,
        compiler transfers the control next iteration of loop.

        -->The continue statement is used inside a loop to skip the remaining statements of the current
         iteration and move to the next iteration.

(*)Syntax:-
           continue;
Here i am simple example of finding factorial of a num that contains continue statement.
*/
#include <stdio.h>

int main()
{
    int fact = 1, i = 1;

    while (1)
    {
        fact = fact * i;
        i++;

        if (i < 10)
        {
            continue;
        }

        printf("%d", i);
        break;
    }

    return 0;
}