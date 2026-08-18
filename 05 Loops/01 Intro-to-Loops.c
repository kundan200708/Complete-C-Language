/*
Looping Statement:-
                 --> Looping is a technique which is used to execute a block if codes continuously or rapidly
                 till a certain condition is true.

                 --> The looping is used to reduce writting budden from the programmer and make the execution 
                 faster and smooth.

(*) A loop is consist of following :-
                 (1)Initialization:- In this process a loop is initialized by a certain value to start loop execution.

                 (2) Condition:- It is used to control loop execution that is loop execution will specified condition become.

                 (3) Updation:- It is used to change or update value of loop variable from initialization to condition 
                 by using increment or decrement or other processes.

(*) C provides three main types of loops  they are as following :-
                                              (1) For loop
                                              (2) While loop
                                              (3) Do - While loop
                
Here is the example of loop given below

                                              */

#include<stdio.h>
int main(){
    int i;
    for ( i = 0; i < 10; i++)
    {
     printf("Hello World\n");
    }
    
}