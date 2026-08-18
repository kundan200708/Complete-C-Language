//  Wap to input a number and check it is prime or not ?
#include <stdio.h>

int main()
{
    int num, i, f = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1)
    {
        printf("Neither prime nor composite");
    }
    else
    {
        for (i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                f = 1;
                break;
            }
        }

        if (f == 0)
        {
            printf("Inputed value is a Prime number");
        }
        else
        {
            printf("This is a Composite number");
        }
    }

    return 0;
}