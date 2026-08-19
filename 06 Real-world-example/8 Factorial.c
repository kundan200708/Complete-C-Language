// Wap to take an user input and find factorial of that number ?
#include <stdio.h>

int main() {
    int n, fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

factorial:
    if (n > 0) {
        fact = fact * n;
        n--;
        goto factorial;
    }

    printf("Factorial = %d", fact);

    return 0;
}