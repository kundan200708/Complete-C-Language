// Wap to take a user input and tell whether it is palindrome or not ?
#include <stdio.h>

int main() {
    int n, original, digit, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

palindrome:
    if (n > 0) {
        digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
        goto palindrome;
    }

    if (original == rev)
        printf("Palindrome Number");
    else
        printf("Not a Palindrome Number");

    return 0;
}