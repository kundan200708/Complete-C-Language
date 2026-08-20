// wap to find table from 1 to 20?
#include <stdio.h>
int main() {
    int n = 1, N = 20;
    for(int i = n; i <= N; i++){
        for(int j = 1; j <= 10; j++){
            printf("%d * %d = %d\n",i,j,j*i);
        }
        printf("\n\n");
    }
    return 0;
}