/*
Ladder If :-
-------------
            --->It is another form of if statement which is used to check multiple condition within a program
            
            --> It works when a previous condition may fail then next condition will check and this process 
            continue for all condition.

(*)Syntax for Ladder if :-
                             if(condition1)
                             {
                             
                                code part
                             
                             }
                            else if (condition 2)
                            {
                            
                            // code part for 2nd part
                            
                            }
                            else if (condition n)
                            {
                            
                            // code part
                            
                            
                            }
                            else
                           {
                            
                            // code part

                            }

*/


#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 5)
    {
        printf("Ticket is FREE!");
    }
    else if (age <= 12)
    {
        printf("Child Ticket: Rs. 100");
    }
    else if (age <= 18)
    {
        printf("Teen-ager Ticket: Rs. 150");
    }
    else if (age <= 60)
    {
        printf("Adult Ticket: Rs. 250");
    }
    else
    {
        printf("Senior Citizen Ticket: Rs. 120");
    }

    return 0;
}