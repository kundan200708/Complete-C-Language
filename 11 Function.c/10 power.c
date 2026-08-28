/*
    WAF power a, b to calculate the value a raised b.
*/

#include <stdio.h>

int power(int base, int raise){
    int p=1;

    for(int i = 1; i <= raise; i++){
        p *= base;
    }
    return p;
}

int main(){
    
    printf("%d\n",power(2,4));

    return 0;
}