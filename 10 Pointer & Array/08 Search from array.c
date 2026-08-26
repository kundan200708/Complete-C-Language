//  Wap to search an element from user input ?

#include <stdio.h>

int main() {
    int arr[6];
    int *p;
    int search;
    int found = 0;

    printf("Enter 6 numbers:\n");

    for (int i = 0; i < 6; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number to search: ");
    scanf("%d", &search);

    p = arr;

    for (int i = 0; i < 6; i++) {
        if (*(p + i) == search) {
            printf("Number found at position %d\n", i + 1);
            found = 1;
            break;
        }
    }

    if (found == 0) {
        printf("Number not found\n");
    }

    return 0;
}
