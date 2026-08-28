/*
Recursion:-
          --> A function called by itself is called recursive function and that technique is called recursion.

          -->An recursion a function call perform in function body so , the function repeatedly execute their code 
          for finite time like loop.

          --> Recursive technique execute faster than looping techinque so, it is very useful for implementing various
          algorihtms of data structure.

          -->A recursive function must have a base condition, otherwise it will keep calling itself forever.

Example of recursion is given below:-
*/
#include <stdio.h>

int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }

    return n * factorial(n - 1);
}

int main()
{
    int n, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    result = factorial(n);

    printf("Factorial  of entered number is = %d", result);

    return 0;
}
