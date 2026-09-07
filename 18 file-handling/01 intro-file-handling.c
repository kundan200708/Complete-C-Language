/*
    File Handing in C Language
*/
#include <stdio.h>
int main() {
    FILE *fptr;

    //open the file
    fptr = fopen("filename.txt","w");

    //write the file
    fprintf(fptr,"Hello World");

    //Close the file
    fclose(fptr);



    return 0;
}