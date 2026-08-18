/*
For loop:-
        -->It is open condition or pre-determine condition test loop in which initialization ,condition and 
        updation are in same row seperated by semi colon(;).
        
        --> For loop executes faster than other loops because its latency value inside operating sysytem is 
        very less.

Note:- A loop variable if initialized once.

Syntax of For Loop:-  for(initialization; condition ; updation)
                    //    updation may be increment or decrement ;
                    {
                    
                    //    statement
                    // ------------ 
                    // piece of code 
                    
                    }

Here I am giving an example of simple for loop in which i am printing numbers from 1 to 10;
*/
#include <stdio.h>

int main()
{
    int i;

    for(i = 1; i <= 10; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}