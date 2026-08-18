/*  Weight lose program */


#include <stdio.h>
int main(){
    int weight;

    printf("Enter the weight : ");
    scanf("%d",&weight);

    while(weight>40) {
        printf("Go Exercise\n");
        printf("then come back\n");
        break;
    }
return 0;
}