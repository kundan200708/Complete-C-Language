// wap to swap two numbers?
#include <stdio.h>

void swap(int *m, int *n)
{
    int temp;

    temp = *m;
    *m = *n;
    *n = temp;
}

int main()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    swap(&num1, &num2);

    printf("First: %d\n", num1);
    printf("Second: %d\n", num2);

    return 0;
}
