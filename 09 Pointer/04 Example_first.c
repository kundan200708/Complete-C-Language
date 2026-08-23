//  Wap to Changing a variable using a pointer?



#include <stdio.h>

void changeValue(int *p)
{
    *p = 100;
}

int main()
{
    int num = 10;

    printf("Before: %d\n", num);

    changeValue(&num);

    printf("After: %d\n", num);

    return 0;
}