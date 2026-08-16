/*
Logical Operator :-
                 -->It is used to concatenate or combine two ie more relational operator together and
                 returns a single output i.e-> 1 or 0.


There are three types of logical operator in C programming they are :-
                   (1)Logical AND (&&)
                   (2)Logical OR  (||)
                   (3)Logical NOT (!)


(1) Logical AND:-->  Logical AND (&&) gives true (1) only when both conditions are true.
                   Condition 1    Condition 2    Result
                      TRUE           TRUE          TRUE
                      TRUE           FALSE         FALSE
                      FALSE          TRUE          FALSE
                      FALSE          FALSE         FALSE

(2) Logical OR:--> Logical OR (||) gives true (1) when at least one condition is true.
                     Condition 1    Condition 2    Result
                       TRUE           TRUE          TRUE
                       TRUE           FALSE         TRUE
                       FALSE          TRUE          TRUE
                       FALSE          FALSE         FALSE
(3)Logical NOT :--> Logical NOT (!) reverses the result.
       CONDITION     RESULT
          TRUE  →    FALSE
          FALSE →    TRUE



*/
#include <stdio.h>

int main()
{
    int age = 20;
    int marks = 75;
    int attendance = 80;

    // AND operator
    printf("AND (&&): %d\n", age >= 18 && marks >= 50); // 1

    // OR operator
    printf("OR (||): %d\n", marks >= 90 || attendance >= 75); // 1

    // NOT operator
    printf("NOT (!): %d\n", !(age < 18)); // 1

    return 0;
}