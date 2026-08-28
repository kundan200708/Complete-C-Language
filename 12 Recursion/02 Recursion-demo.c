#include <stdio.h>

// Recursive Function
int rec(int n)
{
    // Base Case
    if (n == 5)
    {
        return n;
    }

    // If number is less than 5
    else if (n < 5)
    {
        n++;
        return rec(n);
    }

    // If number is greater than 5
    else
    {
        n--;
        return rec(n);
    }
}

int main()
{
    /*
        Recursive Function

        A recursive function is a function that calls itself
        again and again until the base condition becomes true.

        The function must have a base case to stop recursion.
    */

    int n, result;

    printf("Enter the number: ");
    scanf("%d", &n);

    result = rec(n);

    printf("Result = %d", result);

    return 0;
}
