//Different Type of Pointers
#include <stdio.h>
int main(){
    //Integer Pointer
    int* prt_int;
    //size of
     printf("The size of integer ; %d\n",sizeof(prt_int));

    //Charater Pointer
    char* prt_char;
    //size of
     printf("The size of char ; %d\n",sizeof(prt_char));

    //Structure Pointer
    struct abc* prt_struct;

    //size of
     printf("The size of sturct ; %d\n",sizeof(prt_struct));

    //function name
   // int* (prt_function)(int, char);
    //size of
   //  printf("The size of funcion ; %d\n",sizeof(prt_fucntion));

    //Double Pointer
    float** prt_double;
    //size of
    printf("size of the double of ponter : %d\n",sizeof(prt_double));

    //Null Pointer
    char* prt_Null = NULL;
    //size of
    printf("size of the null pointer : %d\n",sizeof(prt_Null));


    //Void Pointer
    void* prt_void;
    //size of
    printf("size of the void : %d\n",sizeof(prt_void));

    //Constant Pointer
    double const* prt_cons;
    //size of
    printf("size of the constant pointer : %d\n",sizeof(prt_cons));


    return 0;
}