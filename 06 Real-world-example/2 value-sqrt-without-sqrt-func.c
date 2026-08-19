// Wap to take a number input and print their square root value without using sqrt()?
#include<stdio.h>
int main(){
    int a;
    float x=0.01;

printf("Enter a Number:");
scanf("%d",&a);

    if (a < 0) {
        printf("Square root of a negative number is not real.");
        return 0;
    }
        if (a == 0) {
        printf("\nRoot of %d is 0", a);
        return 0;
    }
sqrt:
if ( x * x <a)
{
x= x+0.01;
goto sqrt;
}

printf("\n Root of %d  is approximately %f",a,x);


    return 0;
}