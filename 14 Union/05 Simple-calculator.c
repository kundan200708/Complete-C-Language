// Wap to create a simple calculator that perform simple addition subtraction and multiplication?
#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

int main()
{
    int a , b ;
    printf("Enter your first number");
    scanf("%d",&a);
      printf("Enter your second number");
    scanf("%d",&b);
    
    int choice;

    int (*operation)(int, int);

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        operation = add;
    }
    else if (choice == 2)
    {
        operation = subtract;
    }
    else if (choice == 3)
    {
        operation = multiply;
    }
    else
    {
        printf("Invalid choice\n");
        return 0;
    }

    printf("Result = %d\n", operation(a, b));

    return 0;
}
