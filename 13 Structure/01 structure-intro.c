/*
Structure:- 
          --> A structure is a composite data type that defines a grouped list of variables  that are to be 
          placed under  one name in block of memory.

          -->  The 'struct' keyword is used to define a structure. the items in the structure are called members 
          & they have need to declaration of valid data types of an application.

          --> Structures are envolve for creating linkedlist and trees, 
          structure are also use to represent real objects in a software like students and teachers in a college management software.


*/

#include <stdio.h>

struct Student{
    int roll;
    char name[50];
};

void main(){
    struct Student s = {1, "Kundan Kumar"};

    printf("%d\n",s.roll);
    printf("%s\n", s.name);
}

/*
(*) Advantages of Structure :-
                             --> It can hold variables of different data types .

                             --> We can create objects containing different types of attributes .

                             --> It allows us to reuse the data layout across programs .

                             --> It is used to implement other data structure like linked list,queues , trees and graphs.

(*) Basic syntax of structure:-
                              struct StructureName {
                                 data_type member1;
                                 data_type member2;
                                                    };



                                                    
*/