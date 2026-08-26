//  Wap to rotate an array element from left?

#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int first;
    
    first = arr[0];

    for (int i = 0; i < 4; i++) {
        arr[i] = arr[i + 1];
    }

    arr[4] = first;

    printf("After left rotation: ");

    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
