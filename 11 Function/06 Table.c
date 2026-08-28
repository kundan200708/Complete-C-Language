// Wap to print table of inputed number from user
#include <stdio.h>

void table(int n){
    for(int i = 1; i <= 10; i++){
        printf("%d * %d = %d\n",n,i,n*i);
    }
}
void main() {
    int num;
    printf("Enter the num :");
    scanf("%d", &num);

    table(num);
}