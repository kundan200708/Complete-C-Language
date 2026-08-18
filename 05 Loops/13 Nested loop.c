/*
Nested Loop:-
           --> One loop inside another loop is called nested loop .
           --> When the outer loop may runs for one time ,Inner loop will execute for n times so, 
           the total complicity of nested loop is maximum.
           
  (*) Syntax:-
              
           for(initialization; condition; increment/decrement)
              {
           for(initialization; condition; increment/decrement)
              {
                  // statements
               }
            }

here is a simple example of nested loop.

*/
#include <stdio.h>

int main()
{
    int i, j;

    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= 5; j++)
        {
            printf("%d ", i * j);
        }

        printf("\n");
    }

    return 0;
}
