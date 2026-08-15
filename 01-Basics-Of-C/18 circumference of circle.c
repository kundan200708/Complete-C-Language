// Wap to find circumference of circle?
#include <stdio.h>
int main()
{
    float radius, circumference;

    printf("Enter the value of radius of circle : ");
    scanf("%f",&radius);

   circumference = 3.14 * radius * 2;
    printf("Circumferernce of circle : %f ",circumference);

    return 0;
}