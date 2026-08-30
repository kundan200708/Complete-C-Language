/*
Union:-
      --> A union is a user-defined data type in C that allows different data types to be stored in the same memory location.

      -->  Union members can be access using the dot(.) operator.
      
      --> Union are useful when you want to say memory by storing different type of data in the same memory space.

(*) Syntax :-
             union union_name
             {
             data_type member1;
             data_type member2;
             data_type member3;
             };


(*)Declaring a Union Variable:-
                         union Student s;

Here is a simple program of union given below that shows roll and marks .
*/
#include <stdio.h>

union Student
{
    int rollNo;
    float marks;
};

int main()
{
    union Student s;

    s.rollNo = 101;

    printf("Roll No: %d\n", s.rollNo);

    s.marks = 85.5;

    printf("Marks: %.2f\n", s.marks);

    return 0;
}