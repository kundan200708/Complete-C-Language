// Here I am giving simple example of function...
#include <stdio.h>

void greater()
{
    int num1, num2;

    printf("Enter your first number: ");
    scanf("%d", &num1);

    printf("Enter your second number: ");
    scanf("%d", &num2);

    if (num1 > num2)
    {
        printf("%d is greater", num1);
    }
    else if (num2 > num1)
    {
        printf("%d is greater", num2);
    }
    else
    {
        printf("Both numbers are equal");
    }
}

int main()
{
    greater();

    return 0;
}
