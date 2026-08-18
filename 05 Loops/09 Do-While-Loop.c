/*
Do-While Loop:-
            ---> It is an exit control or post condition text loop in which condition is checked of for 
            execution if loop body so,this loop might be executed of once even condition may false.

(*)Syntax:- Initialization;
            do
           {
            ------------
            ------------
          // statements
            ------------
            -------------
            } while(condition);

(*) Its working behaviour like that :
                  Execute statements
                         ↓
                   Check condition
                         ↓
                        True?
                       ↙     ↘
                     Yes      No
                     ↓        ↓
                    Repeat    Exit


Here is a simple example of DO while loop;

*/
#include<stdio.h>
int main (){
    char ch='Y';
do
{
    printf("RKDC");
    printf("\n Do you want to know my college name");
    scanf(" %c",&ch);
    
} while (ch=='Y');
return 0;

}