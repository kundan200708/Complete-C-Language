/*  Two numbers are input throught the keyboard into two locations C and D. Write a program to interchange the content of C and D.
 */

#include <stdio.h>
int main(){

    int C, D;
    printf("Enter the value of C :");
    scnaf("%d", &C);
    printf("Enter the value of D :");
    scnaf("%d", &D);

    C = C + D;
    

    return 0;
}