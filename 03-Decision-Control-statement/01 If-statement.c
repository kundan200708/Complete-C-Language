/*

(1) If -Statement:-
                  --> It is used to check a certain condition within the program and acts accordingly
                  -->It means when condition of is true then body of if will be executed .

    (*)Syntax:--
               if {(Condition)
                  ----------
                  ---code---
                  ---part---
                  ----------
                   }

Ex:- Write a program to input age of a person and check whether he is voter or not ?

*/
#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("Congrats!! You are a voter ");
    }

    return 0;
}




/*


*/