/*
    Write a program to find the sum of all even number from 1 to N where the value of N is taken as input
*/

#include <stdio.h>
int main() {
    int N, i, sum = 0;
    printf("Enter the number : ");
    scanf("%d",&N);

    for(i = 1;i<=N;i++)
    {
        if(i%2==0)
        sum += i;
    }
    printf("Sum of even number is %d",sum);
    return 0;
}