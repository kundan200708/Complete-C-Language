// wao to find duplicate elements from an array i.e that number comes more than one time?
#include <stdio.h>

int main() {
    int arr[8] = {10, 20, 30, 20, 40, 10, 50, 30};

    printf("Duplicate elements are: ");

    for (int i = 0; i < 8; i++) {
        for (int j = i + 1; j < 8; j++) {

            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                break;
            }
        }
    }

    return 0;
}
