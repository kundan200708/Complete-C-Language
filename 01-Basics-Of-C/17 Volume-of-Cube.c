// Wap to find the Volume of cube?

#include <stdio.h>
int main(){

    float side, volume;

    printf("Enter the side :");
    scanf("%f", & side);

    volume = side * side * side;
    printf("Volume of Cube : %f",volume);

    return 0;
}