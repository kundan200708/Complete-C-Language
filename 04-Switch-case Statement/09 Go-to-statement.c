/*
Goto Statement:-
            -----> It is unconditional jump statement that directly transfers control at specific label .
            -----> Goto statement is use to read or write data directly from any part of program.

Note:- (1) One goto statement can have only one label.
       (2) Some compiler does not support goto Statement because some time hardware generates error.

Synatx for goto Statement:-
       goto label;

         ...

         label:
         statement;
            */
           #include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n < 0)
        goto negative;

    printf("Number is positive");

    return 0;

negative:
    printf("Number is negative");

    return 0;
}