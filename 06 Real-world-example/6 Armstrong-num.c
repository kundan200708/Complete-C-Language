// Wap to take an user input and tell that inputed number is armstrong number or not ?

#include <stdio.h>

int main() {
    int n, original, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

armstrong:
    if (n > 0) {
        digit = n % 10;
        sum = sum + digit * digit * digit;
        n = n / 10;
        goto armstrong;
    }

    if (original == sum)
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");

    return 0;
}