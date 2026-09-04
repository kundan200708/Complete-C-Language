/*
Calloc():-
         --> calloc() stands for Contiguous Memory Allocation.


         --> It is used to allocate memory dynamically at runtime.

         --> It is defined in the stdlib.h header file.

         -->Unlike malloc(), calloc() initializes all allocated memory to zero. 
         
         -->It is too like of malloc, but has two different points & there are : 

        1 - It initialize each block with a default value of zero(0).
        2 - It has tow parameter or arguments as compare to malloc.

    syntax :-
        
        ptr = (cast_type *) calloc(n, element_size());

        here n is the number of elements and element size is the sizeof each element.

    e.g : - ptr = (float *) calloc (10, sizeof(float));

    here this statement allocate contiguous memory of black for 10 element where each has sizeof the float.
    It space is insufficent allocation fails and return a NULL pointer.
*/
    #include <stdio.h>
    #include <stdlib.h>

    void main(){
        int n, i;   
        int *ptr;

        n = 5;
        ptr = (int *) calloc(n, sizeof(int));

        if(!ptr){
            printf("Memory has not allocated!");
            exit(0);
        }else {
            for(i = 0; i < n; i++){
                ptr[i] = i + 1;
            }
            for(i = 0; i < n; i++){
                printf("%p\n",ptr);
            }
        }
        printf("\n");
    }