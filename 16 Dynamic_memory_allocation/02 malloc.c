/*
(*) Malloc() :-  
              --> malloc() stands memory allocation it allocates a block of memory of the specified size and return a pointer to the beginning of a block.
               It takes the number of bytes to allocates as an arguments.

              --> It is used to allocate memory dynamically at runtime.

              --> It is defined in the stdlib.h header file.

              --> The allocated memory contains garbage values initially.

              --> It returns a pointer to the allocated memory.

              --> If memory cannot be allocated, it returns NULL.


(*) Syntax for malloc():-
        #include <stdio.h>
        #include <stdlib.h>

        void &void(size_t size);

        ptr = (data_type *)malloc(number_of_bytes);


        e.g :- int *ptr = (int *) malloc (5 , sizeof(int));
           
*/


#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *ptr;
    int n, i;

    printf("Enter the number of elemnets \n : ");
    scanf("%d", &n);

    ptr = (int*) malloc (n *  sizeof(int));

    if(ptr == NULL){
        printf("Memory has been not allocated");
        exit(0);
    } else {
        printf("Memory has been allocated by using malloc function\n");

        //print the memory locations
        for(i = 0; i < n; i++){
            ptr[i] = i+1;
        }
        printf("The elements of array are : \n");
        for(i = 0; i < n; i++){
            printf("%p :", ptr);
        }
    }
}
