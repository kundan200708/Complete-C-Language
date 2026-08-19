// Wap to take user input a number and  find reverse of a number ?
#include <stdio.h>

int main() {
    int n, digit, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

reverse:
    if (n > 0) {
        digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
        goto reverse;
    }

    printf("Reverse = %d", rev);

    return 0;
}