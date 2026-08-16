/*
    If a four digit number is input through the keyboard. WAP to obtain the sum of the first and last digit of this number.
 */

#include <stdio.h>
int main(){ 

    int digit, f_rem, l_rem, sum = 0;

    printf("Enter the four digit : ");
    scanf("%d", &digit);
    f_rem = digit / 1000;
    l_rem = digit % 10;
    sum = f_rem + l_rem;
    printf("sum of first and last of digit :%d",sum);

    
    return 0;
}