/*
01) Arithmetic Operator :-
                         --> These operator are use to perform basic mathematical or arithmetic calculations.

                         Example:- Addition (+)
                                   Subtraction (-)
                                   Multiplication(*)
                                   Division (/)
                                   Remainder finding (% ,i.e known as modulus)

  */
 /*
 Here suppose a and b are two variables that having values 10 and 5 respectively,
 And we are trying to perform basic operations these are as follows:
 */
#include <stdio.h>
int main(){

    int a, b;
    a  = 13;
    b = 5;

        //Arithmatic Operator
    int addition;
    addition = a + b;
    printf(" Addition of both nums  : %d\n",addition);

    int subtraction;
    subtraction = a - b;
    printf("Subtraction of both nums: %d\n",subtraction);

    int multiplication;
    multiplication = a * b;
    printf("Multiplication  of both nums : %d\n",multiplication);

    int division;
    division = a / b;
    printf("Division  of two nums : %d\n",division);

    int remainder;
    remainder = a % b;
    printf("Reminder : %d\n",remainder);

return 0;
}