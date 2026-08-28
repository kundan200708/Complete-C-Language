// wap to swap to number by the method of call by reference?
#include <stdio.h>

void swap(int *a, int *b);

int main()
{
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("\nBefore swapping:");
    printf("\nFirst = %d", num1);
    printf("\nSecond = %d", num2);

    swap(&num1, &num2);

    printf("\n\nAfter swapping:");
    printf("\nFirst = %d", num1);
    printf("\nSecond = %d", num2);

    return 0;
}

void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}
