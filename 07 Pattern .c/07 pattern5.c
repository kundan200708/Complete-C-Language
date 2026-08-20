// Wap to find desired shape given below in the c language?
/*


*        *
**      **
***    ***
****  ****
**********
**********
****  ****
***    ***
**      **
*        *

*/

#include <stdio.h>

int main()
{
    int n = 5;

    // Upper half
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
            printf("*");

        for (int j = 1; j <= 2 * (n - i); j++)
            printf(" ");

        for (int j = 1; j <= i; j++)
            printf("*");

        printf("\n");
    }

    // Lower half
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
            printf("*");

        for (int j = 1; j <= 2 * (n - i); j++)
            printf(" ");

        for (int j = 1; j <= i; j++)
            printf("*");

        printf("\n");
    }

    return 0;
}