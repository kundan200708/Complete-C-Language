// Wap to print reverse of a number that is inputed from user?

#include <stdio.h>

void reverse(int n)
{
    int rem, rev = 0;

    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    printf("Reverse = %d", rev);
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    reverse(num);

    return 0;
}
