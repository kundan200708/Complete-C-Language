#include <stdio.h>

int main() {
    int Number[5];
    int sum = 0;

    // Input 5 numbers
    for (int i = 0; i < 5; i++) {
        printf("Enter the number: ");
        scanf("%d", &Number[i]);
    }

    // Calculate sum
    for (int i = 0; i < 5; i++) {
        sum = sum + Number[i];
    }

    // Print sum
    printf("Sum of the array = %d\n", sum);

    return 0;
}
