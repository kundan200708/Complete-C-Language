/*wap to take a user input and tell  if a prime or not ?
*/

#include <stdio.h>

int main() {
    int number;
    int isPrime = 1;

    printf("Enter the number: ");
    scanf("%d", &number);

    if (number <= 1) {
        isPrime = 0;
    } else {
        for (int i = 2; i < number; i++) {
            if (number % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        printf("Prime Number\n");
    else
        printf("Not Prime Number\n");

    return 0;
}