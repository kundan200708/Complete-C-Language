#include <stdio.h>
int main(){
/* Types of Pointer */
/*
    1. NULL Pointer :-  
        In C programming the null pointer are those pointer that do not point to any memory location they can be created by assigning null value to the pointer.
    e.g :-  
*/
    int *ptr = NULL;
    printf("%u\n",ptr);
/*
    2. void Pointer :-
        The void pointer in C are the pointer of type void. It means that they do not have any assosiate datatype so, that void pointer are also called generic pointer.
    e.g :-
*/  
    void *voidPtr;
    printf("%u\n",voidPtr);
/*
    3. Wild Pointer :
        The wild pointer are those pointer that have not been initilize sometime yet, these type of pointer can cause problems in our program & our program can be crashed, if value are updated using the wild pointer they could cause about data corruption.
    e.g :-
*/
    void *wildPtr;
    void *wildPtr1;
/*
    4. Dangling Pointer :
        A pointer pointing to a memory location that has been deleted is called dangling pointer, such situation can lead to unexpected behaviour in the program occurs bugs in the program.
*/
    return 0;
}