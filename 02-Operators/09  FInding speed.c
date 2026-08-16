#include <stdio.h>
int main(){
    /* find the distance of the path */

    float speed, time, distance;
    printf("Enter the vlaue of speed : ");
    scanf("%f",&speed);

    printf("Enter the vlaue of  time : ");
    scanf("%f",&time);

    distance = speed * time;
    printf("The Distance traveled  : %f",distance);


return 0;
}