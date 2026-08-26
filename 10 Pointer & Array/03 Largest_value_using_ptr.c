// Wap to find largest element using pointer ?
#include <stdio.h>

int main() {
    int arr[6] = {25, 12, 45, 8, 67, 34};
    int *ptr = arr;
    int largest = *ptr;

    for (int i = 1; i < 6; i++) {
        if (*(ptr + i) > largest) {
            largest = *(ptr + i);
        }
    }

    printf("Largest element of this array is = %d", largest);

    return 0;
}
