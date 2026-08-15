// Wap to find perimeter of rectangle from user input

#include <stdio.h>
int main(){

    float length, breath;

    printf("Enter the value of length:");
    scanf("%f",&length);

    printf("Enter the vlaue of breath :");
    scanf("%f",&breath);

    float perimeter =2* (length + breath);
    printf("Perimeter of Rectangle is : %f",perimeter);
}