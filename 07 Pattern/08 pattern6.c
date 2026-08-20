// Wap to find the desired pattern in c given below ?
/*

1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 
14 13 12 11 
10 9 8 
7 6 
5 

*/


#include <stdio.h>

int main() {
    int i, j, num = 1;

    // Increasing part
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    // Decreasing part
    num = 14;

    for (i = 4; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("%d ", num);
            num--;
        }
        printf("\n");
    }

    return 0;
}