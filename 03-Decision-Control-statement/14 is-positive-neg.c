/*
    Write a c program to check if a given number is zero or positive or negative using if_else statement
*/
#include <stdio.h>
int main(){
    int number;
    printf("Enter the num : ");
    scanf("%d",&number);
    //check the number is positive
    if(number == 0){
        printf("The Number is Zero\n");
    }
    else
    if(number > 0){
        printf("The Number is Positive \n");
    }
    else{
        printf("The Number is Negtive\n ");
    }


return 0;
}