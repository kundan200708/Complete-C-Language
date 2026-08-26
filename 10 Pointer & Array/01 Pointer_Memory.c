// Instead of printing the value of pointer ,let's print its memory address?
#include <stdio.h>
int main() {

    int myArray[4] = {11,12,13,14};

    printf("%d\n",*myArray);  //Result : 11

    //Get the second value of the array
    printf("%d\n",*myArray  + 1);  //Result : 12

    //Get the third value of the array
    printf("%d\n",*myArray + 2); //Result : 13

    //and So on.


    printf("Loop throught\n");

    int myArray1[5] = {21, 22, 23, 24,25};
    int *ptr = myArray1;

    for(int j = 0; j <= 5; j++) {
        printf("%d\n",*(ptr + j));
    }

    return 0;
}