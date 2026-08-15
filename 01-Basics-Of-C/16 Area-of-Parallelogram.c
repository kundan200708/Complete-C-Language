/* WAP to calculate the area of parellelgram */

#include <stdio.h>
int main() {

    float base, height, area;

    printf("Enter the vlaue of base :");
    scanf("%f", &base);

    printf("Enter the value of height: ");
    scanf("%f", &height);

    area = base * height;
    printf("Area of Parellelgram is : %f",area);

    
    return 0;
}