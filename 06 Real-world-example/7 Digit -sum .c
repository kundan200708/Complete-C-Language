// Wap to take a user input and find their digit sum?

#include <stdio.h>

int main() {
    int n, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

sum:
    if (n > 0) {
        digit = n % 10;
        sum = sum + digit;
        n = n / 10;
        goto sum;
    }

    printf("Sum of digits = %d", sum);

    return 0;
}