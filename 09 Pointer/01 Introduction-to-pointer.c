/*
Pointer :-
         --> Pointer is used to points the address of the value stored anywhere in the computer memory .

         --> To obtain the value stored at location is known as dereferencing pointer.

Pointer arithmetic:- There is is four arithmetic operators are used in pointers, i.e (++,--,+,-).


here are following perperty of pointer.

    1. A pointer is decleare as a specified data type and the name with an aestric(*) before the name.
    e.g :- dataType *pointerName;

    2. The datatype indicate the type of variable the pointer can hold the address of variable
    e.g :- int *x; // Here pointer hold the integer type value.

    3. Aestrik use for the hold value of variable and address of variable.

Syntax of pointer :-
                    data_type *pointer_name;
                    int *ptr;
Here, ptr is a pointer that can store the address of an integer.

*/
#include <stdio.h>
int main()
{
    int num = 2;
    int *addNum = &num;
    printf("Memory Location :%u \n", addNum);
    printf("Number is :%d\n", *(addNum));
}