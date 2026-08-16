/*

Binary Operator:-
               ---> These operators performs operation on two operands and returns a single otuput.

    Eg:- All arithmetic operator ,relational operator etc.
 
Ternary Operator:-
                --> It is also called conditional operator which is used to check condition in the program
                without using if statement .
                -->It is called ternary because it uses three parts:

                      (1)Condition
                      (2)Value if condition is true
                      (3)Value if condition is false
*/

/*Here i am accepting an alphabet and checking that it is vowel or consonant .
condition ? printf("Vowel") : printf("Consonant"); Actually it looks like that but it is too much complicated.*/
#include <stdio.h>

int main()
{
    char alphabet;

    printf("Enter an alphabet: ");
    scanf("%c", &alphabet);

    (alphabet == 'a' || alphabet == 'e' || alphabet == 'i' ||
     alphabet == 'o' || alphabet == 'u' ||
     alphabet == 'A' || alphabet == 'E' || alphabet == 'I' ||
     alphabet == 'O' || alphabet == 'U')
     ? printf("Vowel")
     : printf("Consonant");

    return 0;
}