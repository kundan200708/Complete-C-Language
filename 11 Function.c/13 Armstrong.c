/*Write a C program using a function to check whether the given number is an Armstrong number or not.
*/
#include <stdio.h>

void armstrong(int n)
{
    int original, rem, sum = 0;

    original = n;

    while (n != 0)
    {
        rem = n % 10;
        sum = sum + (rem * rem * rem);
        n = n / 10;
    }

    if (sum == original)
    {
        printf("%d is an Armstrong number", original);
    }
    else
    {
        printf("%d is not an Armstrong number", original);
    }
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    armstrong(n);

    return 0;
}
