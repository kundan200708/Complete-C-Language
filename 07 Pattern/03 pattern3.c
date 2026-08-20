/*
Wap to find center pyramid  triangle in the form of star?

    *
   ***
  *****
 *******
*********


*/

#include <stdio.h>

int main() {
    int i, j, k;

    for (i = 1; i <= 5; i++) {

        // spaces
        for (j = 1; j <= 5 - i; j++) {
            printf(" ");
        }

        // stars
        for (k = 1; k <= (2 * i) - 1; k++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}