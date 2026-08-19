//  Wap to input two number and print x^y equivalent value without use of pow ()?

#include <stdio.h>
int main()
{
    int x, y, res = 1;
    printf("\n Enter the value of Base and exponent ");
    scanf("%d%d", &x, &y);
pow:
    if (y > 0)
    {
        res = res * x;
        y--;
        goto pow;
    }
    printf("\n x^y=%d", res);

    return 0;
}