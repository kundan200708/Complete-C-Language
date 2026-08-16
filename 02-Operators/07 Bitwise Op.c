/*
Bitwise Operator:-
                --> The bitwise operators are used to perform operation on binary data inside computer's register
                they manipulates bit by bit value within the register .
           

                                      BITWISE OPERATOR
        ---------------------------------------------------------------------------
(1)Bitwise AND (&)
(2)Bitwise OR  (|)
(3)One's complement (~)//tilde
(4)Exclusive OR/X-OR (^)
(5) Shift operator 
     (a)left shift (<<)
     (b)right shift(>>)
*/


#include <stdio.h>

int main()
{
    int number1 = 5;
    int number2 = 3;

    printf("Bitwise AND (&) = %d\n", number1 & number2);   // 5 & 3 = 1

    printf("Bitwise OR (|) = %d\n", number1 | number2);    // 5 | 3 = 7

    printf("One's Complement (~) = %d\n", ~number1);       // ~5 = -6

    printf("Exclusive OR (^) = %d\n", number1 ^ number2);  // 5 ^ 3 = 6

    printf("Left Shift (<<) = %d\n", number1 << 1);        // 5 << 1 = 10

    printf("Right Shift (>>) = %d\n", number1 >> 1);       // 5 >> 1 = 2

    return 0;
}