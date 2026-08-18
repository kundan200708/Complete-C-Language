/*
    The Length of three sides are taken as input,
     write a c program to find whether  a triangle can be formed or not.

    It not display "This triangle is not possible
    It the triangle can be formed then check whether the triangle formed is
    
    equilateral  triangle
    isosceles triangle
    scalene triangle
    right triangle
    right- angled triangle
*/
#include <stdio.h>
int main()
{
    int side1, side2, side3;
    printf("Enter the side1, side2, side3 \n");
    scanf("%d %d %d", &side1, &side2, &side3);
    if (side1 < (side2 + side3) && (side2 < (side1 + side3) && (side3 < (side1 + side2))))
    {
        if ((side1 == side2) || (side2 == side3) || (side3 == side1))
            printf("Equilateral Triangle\n");
        else if ((side1 == side2) || (side2 == side3))
            printf("Isosceles Triangle\n");
        else
        {
            if ((side1 * side1) == (side2 * side2) + (side3 * side3) || (side2 * side2) == (side1 * side1) + (side3 * side2) || (side3 * side3) == (side1 * side1) + (side2 * side2))
                printf("Right angle Triangle\n");
            else if (side1 != side2 && side2 != side3 && side3 != side1)
                printf("Scalene triangle\n");
        }
    }
    else
        printf("Triangle is not possible\n");
    return 0;
}
