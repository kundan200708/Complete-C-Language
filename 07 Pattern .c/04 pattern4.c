/*
Wap to find inverted right angle triangle in the form  of (*) ?

    *
   **
  ***
 ****
*****

*/

#include <stdio.h>

int main()
{
    int i, j, k;

    for (i = 1; i <= 5; i++)
    {

        // spaces
        for (j = 1; j <= 5 - i; j++)
        {
            printf(" ");
        }

        // stars
        for (k = 1; k <= i; k++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}