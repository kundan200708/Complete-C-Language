// A pointer is a variable that stores the memory address of another variable as its value.
#include <stdio.h>
int main() {
    //Pointer example

    //Declaration of pointer
    /*
        First Method        int *myPointer = 12;
        Second Method   int* myPointer  13;
    */
    int number = 5;
    int  *myPointer;
    myPointer = &number;

    //Find the location of Variable
    printf("%p",myPointer);

    //Access the Value of Variable
    printf("\n%p",*myPointer);

    return 0;
}