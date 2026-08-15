// wap to find area of rectangle?
#include <stdio.h>
int main(){

    float length, breath;

    printf("Enter the value of length:");
    scanf("%f",&length);

    printf("Enter the vlaue of breath :");
    scanf("%f",&breath);

    float area = length * breath;
    printf("Area of Rectangle : %f",area);
}