/* Find the area of circle */
#include <stdio.h>
int main()
{
    float radius, area;

    printf("Enter the value of radius of circle : ");
    scanf("%f",&radius);

    area = 3.14 * radius * radius;
    printf("Area of circle : %f ",area);

    return 0;
}