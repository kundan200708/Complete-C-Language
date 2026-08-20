//  Wap to find largest element from array inputed from the user?


#include <stdio.h>
int main()
{
    int arr[10];
    int gt = 0;
    printf("Enter the elements of array");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    gt = arr[0];
    for (int i = 1; i < 10; i++)
    {
        if (arr[i] > gt)
        {
            gt = arr[i];
        }
    }
    printf("\n Largest number from your array is %d", gt);
}