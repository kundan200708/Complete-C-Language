
/*
Dereference:-
           -->The dereference operator (*) in C is used with a pointer to access the value stored at the memory address
            that the pointer points to.
*/ \
#include<stdio.h>
int main()
{
    /* Dereference */
    int Number = 4;
    int *ptr = &Number;

    // Dereference : Once the memory address of Number with the pointer
    printf("Memory Location : %d\n", ptr); // Memory Location : 6422036

    // Dereference : Output the value of Number with the pointer(Number)
    printf("Number is : %d\n", *ptr); // Number = 4

    return 0;
}