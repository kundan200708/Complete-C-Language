/*
Nested if :-
           --> One if statement inside anohter if is called nested if .

           -->In Nested if all condition should satisfied during execution that is it 
           works similar to  Logical AND operator .

           --> It is use to provide branching in the program .

(*) Syntax of Nested if :-
                         if(condition 1)
                         {
                         if(condition 2)
                         {
                         
                        //  code partof is

                         
                         }
                        else
                        {
                        
                        // code part of else 1
                        
                        }

                        else
                        {
                        
                        code part for else 2
                        
                        }
                         


    
*/

// wap to enter amount of his buiyng product from a mall and get  discount offer ?

#include <stdio.h>

int main()
{
    int amount, member;

    printf("Enter your shopping amount: ");
    scanf("%d", &amount);

    printf("Are you a member? (1 = Yes, 0 = No): ");
    scanf("%d", &member);

    if (amount >= 1000)
    {
        if (member == 1)
        {
            printf("You get 20%% discount!");
        }
        else
        {
            printf("You get 10%% discount!");
        }
    }
    else
    {
        printf("No discount available.");
    }

    return 0;
}