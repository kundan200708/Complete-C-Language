// Wap to take two number as user input and find greatest commom divisor between them?

// gcd is also known as hcf.

#include <stdio.h>

int main() {
    int a, b, i = 1, gcd = 1;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

gcd:
    if (i <= a && i <= b) {
        if (a % i == 0 && b % i == 0)
            gcd = i;

        i++;
        goto gcd;
    }

    printf("GCD = %d", gcd);

    return 0;
}