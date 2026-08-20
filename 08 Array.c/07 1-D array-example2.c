//  Wap to input n elements  in an array and also input a value to find it in array?
#include <stdio.h>
int main()
{
    int arr[10];
    int val, f = 0;
    int i;

    printf("Enter the elements for the array");
    for (i = 0; i < 10; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("\nEnter data to search from inputed array");
    scanf("%d",&val);

    for (i = 0; i < 10; i++)
    {
          if (arr[i]==val)
          {
           f = 1;
            break;

          }
          
    }
    if (f==1)
    {
      printf("\n Found at %d position",i+1);
    }
    else{
        printf("\n Data Not found ");
    }


    return 0;
}