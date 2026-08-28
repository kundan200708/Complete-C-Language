/*
Indirect Recursion:-
                   -->When one function calls another function and the second function calls the first function again, it is called indirect recursion.
                   Function A
                       ↓
                   Function B
                       ↓
                   Function A
                       ↓
                   Function B
                       ↓
                      ...

*/

// Indirect Recursion Example

#include <stdio.h>

void fun1(int);
void fun2(int);

void fun1(int n)
{
    if (n <= 0)
    {
        return;
    }

    printf("Function 1 = %d\n", n);

    fun2(n - 1);
}

void fun2(int n)
{
    if (n <= 0)
    {
        return;
    }

    printf("Function 2 = %d\n", n);

    fun1(n - 1);
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    fun1(n);

    return 0;
}
