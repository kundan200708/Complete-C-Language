// wap to find greatest number between three number?

#include <stdio.h>
int main(){
    /* Find the largest number in three number */

    int num1, num2, num3;

    printf("Enter the three num : \n");
    scanf("%d %d %d",&num1,&num2,&num3);

    if(num1 > num2){
        if(num1 > num3){
            printf("%d is greater",num1);
        } else {
            printf("%d is greater",num3);
        }   
    }else if(num2 > num3){
        if(num2 > num1){
            printf("%d is greater",num2);
        }else {
            printf("%d is greater",num1);
        }
    } else {
        printf("%d is greater",num3);
    }
        return 0;
    }
