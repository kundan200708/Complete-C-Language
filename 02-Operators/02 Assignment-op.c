/*
Assignment Operator :-
                     -->The assignment operator in C is used to assign or store a value in a variable. 
                     -->The most commonly used assignment operator is the equal sign (=).


Syntax for Assignment operator:-
                                   variable = value;
                        like that:-int a = 10;


                        
*/
#include <stdio.h>

int main()
{
    int speed = 60;//here its initial speed is 60

    printf("Speed = %d km/h\n", speed);

    speed = speed + 20;

    printf("New Speed = %d km/h\n", speed);// but here we have assign new speed as speed = speed+20

    return 0;
}