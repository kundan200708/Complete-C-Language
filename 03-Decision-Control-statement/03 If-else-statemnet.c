
/*
If -Else statement:-
                  --> It is similar to if statement that is also allows check conditions within the program
                  and perform the task accordingly that is when condition is true .

                  --> If body will be executed otherwise  its else part will be executed .

(*)Syntax:--
             if (Condition)
             {
                 /*code part

             }
              else{

            //   code part

                 }


// Here , I am taking a simple example

*/

// Write a program to check a given number inputed from user is even or odd?
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number you want to check");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("The number inputed from user is EVEN NUMBER");
    }

    else
    {
        printf("The number inputed from user is  ODD NUMBER");
    }
}