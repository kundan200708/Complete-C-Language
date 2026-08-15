// Wap to find given year inputed from user is leap year or not ?
#include <stdio.h>
int main(){

    int year;
    
    printf("Enter the year you want to check i.e leap year or not :");
    scanf("%d",&year);

        if(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) {
            printf(" Given year by user is leap year");
        }
        else {
           printf("\n This is not leap year");
        }

    return 0;
}