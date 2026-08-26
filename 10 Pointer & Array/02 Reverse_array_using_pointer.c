// Wap to reverse an array using pointer ?
#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    printf("Original array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));
    }

    printf("\nReversed array: ");
    for (int i = 4; i >= 0; i--) {
        printf("%d ", *(ptr + i));
    }

    return 0;
}
