// Wap to take input three numbers  and find smallest number using switch case?
#include <stdio.h>

int main()
{
    int a, b, c, small;

    printf("Enter three numbers according to your choice: ");
    scanf("%d %d %d", &a, &b, &c);

    switch (1)
    {
        case 1:
            if (a <= b && a <= c)
                small = a;
            else if (b <= a && b <= c)
                small = b;
            else
                small = c;
            break;
    }

    printf(" The Smallest number between three numbers you have entered is  = %d", small);

    return 0;
}