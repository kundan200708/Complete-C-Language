// WAP to print Fibonacci series like 0, 1, 1, 2, 3, 5, 8, 13......?

#include <stdio.h>

void fibo(int n, int a, int b)
{
    int s;

    if (n <= 0)
    {
        return;
    }

    printf("%d ", a);

    s = a + b;
    a = b;
    b = s;

    fibo(n - 1, a, b);
}

int main()
{
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    fibo(n, 0, 1);

    return 0;
}
