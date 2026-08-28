
/*  
    WAP by using the function to print all the even number between 1 to 100
*/
#include <stdio.h>

void printEven(int st, int end){
    for(int i = st; i <= end; i++){
        if(i % 2 == 0){
            printf("%d is even\n",i);
        }
    }
}

int main() {    
    printEven(1,100);
    return 0;
}