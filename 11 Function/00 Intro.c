/*
Function:-
         --> A function is the basic building block of a program that helps the programmers to writes the
         code and execute them seperately.

         --> Function leads code reusability that is you can write the code at once and execute whenever needed.

         --> C - Language consists on several function called pre-defined function or in-built function.

         --> Moreover programmers can also  define their own function for specific purpose called use define function.

         --> An user define function is similar to pre-define function that helps programmers to decompose a large
         problem into seperate sub-problem and code them individually and finally you can assemble all function within
         a single module to accomplish the tasks.

(*)  A Function consist of the following:-
                  (1)Declaration :- It is also known as proto-typing in which programmer defines their function  with
                  a return type , suitable name at least of parameter .

                  (2) Calling :- A fuction must be called inside another function to the accept the control and transfer to
                  accept the control and transfer control at their body.

                  (3) Function definition :- It is body of the function which means it contains actual logic or code that executes
                  when a function is called.

*/

#include <stdio.h>
// void sum();//prototyping
void sum()
{                                       //(body part // 3rd time compiler here executes the body)
    int num1, num2;                     // (4th time compiler here)
    printf("Enter your first number "); // (5th time compiler here )
    scanf("%d", &num1);                 // (6th time compiler here )
    printf("Enter your Second number ");
    scanf("%d", &num2);
    printf("The sum of two number is = %d", num1 + num2); //(7th time compiler here)

} //(8th time compiler here )
int main()
{             //(1st time compiler here)
    sum();    //(2nd time comipler calls the i.e calling of function)
    return 0; //(9th time compiler here )
} //(10th time compiler out of this program.)
