// Wap to print all prime number between 1 to 100?
#include <stdio.h>

void prime()
{
    int i, j, count;

    printf("Prime numbers between 1 and 100 are:\n");

    for (i = 2; i <= 100; i++)
    {
        count = 0;

        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }

        if (count == 2)
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    prime();

    return 0;
}
