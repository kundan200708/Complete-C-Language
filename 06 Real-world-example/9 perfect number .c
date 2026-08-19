// Wap to take an user input and tell it is a perfect number or not ?


// Perfect number:- A number is perfect if the sum of its proper divisors equals the number.
#include <stdio.h>

int main() {
    int n, i = 1, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

perfect:
    if (i < n) {
        if (n % i == 0)
            sum = sum + i;

        i++;
        goto perfect;
    }

    if (sum == n)
        printf("Perfect Number");
    else
        printf("Not a Perfect Number");

    return 0;
}