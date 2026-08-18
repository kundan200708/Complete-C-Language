 /* wap to print given figure in the program?
*       * 
  *   *   
    *     
  *   *   
*       * 

*/




#include <stdio.h>

int main()
{
    int i, j;

    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= 5; j++)
        {
            if(i == j)
            {
                printf("* ");
            }
            else if(i + j == 6)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }

        printf("\n");
    }

    return 0;
}