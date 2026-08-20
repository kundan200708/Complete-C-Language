#include <stdio.h>

int main()
{
    int a[2][3][3];
    int i, j, k;

    // Taking input
    printf("Enter 18 elements for 3D array:\n");

    for (i = 0; i < 2; i++)
    {
        printf("\nEnter elements for Layer %d:\n", i + 1);

        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                scanf("%d", &a[i][j][k]);
            }
        }
    }

    // Printing / Traversing the 3D array
    printf("\n3D Array is:\n");

    for (i = 0; i < 2; i++)
    {
        printf("\nLayer %d:\n", i + 1);

        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                printf("%d ", a[i][j][k]);
            }

            printf("\n");
        }
    }

    return 0;
}