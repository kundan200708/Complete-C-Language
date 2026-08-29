/*
    WAP for developed to take 10  students BCA 2nd year by using the structure.
*/

#include <stdio.h>

struct Student{
    int roll;
    char name[50];
};

void main(){

    struct Student StudentArray[10];

    for(int i = 0; i < 10; i++){
        StudentArray[i].roll = i + 1;
        printf("Enter name of s%d name:",StudentArray[i].roll);
        scanf("%s", StudentArray[i].name);
    }

    //print
    for(int i = 0; i < 10; i++) {
        printf("%d  %s",StudentArray[i].roll, StudentArray[i].name);
        printf("\n");
    } 
}