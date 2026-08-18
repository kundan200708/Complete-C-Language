// Wap to take a decimal user input and convert it into binary form?

#include <stdio.h>
int main()
{
    int dec, bin = 0, b = 1, r = 0;
    printf("Enter an integer value");
    scanf("%d", &dec);
    while (dec > 0)
    {
        r = dec % 2;
        bin = (b * r) + bin;
        b = b * 10;
        dec = dec / 2;
    }
    printf("Equivalent binary=%d", bin);
    return 0;
}