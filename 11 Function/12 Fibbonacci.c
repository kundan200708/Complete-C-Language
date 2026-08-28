// Wap to print all fibonacci series inputed from user in the term 
#include <stdio.h>

void fibonacci(int n)
{
    int a = 0, b = 1, c, i;

    printf("Fibonacci series: ");

    for (i = 0; i < n; i++)
    {
        printf("%d ", a);

        c = a + b;
        a = b;
        b = c;
    }
}

int main()
{
    int n;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    fibonacci(n);

    return 0;
}
