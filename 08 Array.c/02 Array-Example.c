// wap to take 10 numbers as user input and print them in the form of array?

#include <stdio.h>
int main(){

    /* Read the Number */
    int Number[10], i;
    printf("Enter the 10's Number : ");
    for(i = 0; i<10; i++)
        scanf("%d",&Number[i]);

    /* Print the Array */
    for(i = 0; i < 10; i++){
        if(i == 0){
            printf("{");
        }
        printf("%d, ",Number[i]);   
        if(i == 9){
            printf("}");
        }
    }

    return 0;
}