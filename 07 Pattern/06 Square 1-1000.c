// Wap to find the square of number from 1 to 1000?
#include <stdio.h>

int main() {
    int n = 1000;

    for (int i = 1; i <= n; i++) {
        printf("%d square = %d\n", i, i * i);
    }

    return 0;
}