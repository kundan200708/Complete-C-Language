// Wap to show Pointer Arithmetic with an Array?
#include <stdio.h>

int main()
{
    int numbers[5] = {10, 20, 30, 40, 50};

    int *ptr = numbers;

    printf("First value: %d\n", *ptr);

    ptr++;
    printf("Second value: %d\n", *ptr);

    ptr++;
    printf("Third value: %d\n", *ptr);

    ptr++;
    printf("Fourth value: %d\n", *ptr);

    ptr++;
    printf("Fifth value: %d\n", *ptr);

    return 0;
}
