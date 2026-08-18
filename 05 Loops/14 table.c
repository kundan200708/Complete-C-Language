// Wap to print table from 2 to 20?
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 2; i <= 20; i++)
    {
        for (j = 1; j <= 10; j++)
        {
            printf("\n%d * %d = %d", i, j, i * j);
        }
    }

    return 0;
}