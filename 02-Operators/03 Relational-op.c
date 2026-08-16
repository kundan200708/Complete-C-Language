/*

Relational Operator :-
                    ---> These operator are used to check relationship or condition between operands
                    and return 1 or 0 (i.e true or false). these are as below

                    ---> The result of a relational operation is either:
                                     1 → True
                                     0 → False
There are six types of relational operator that i have discuss below:

| Operator | Meaning                  |
| -------- | ------------------------ |
| >        | Greater than             |
| <        | Less than                |
| ==       | Equal to                 |
| !=       | Not equal to             |
| >=       | Greater than or equal to |
| <=       | Less than or equal to    |

*/

#include <stdio.h>

int main()
{
    int speed = 80;
    int limit = 80;

    printf("Greater than: %d\n", speed > limit);              // 0
    printf("Less than: %d\n", speed < limit);                 // 0
    printf("Equal to: %d\n", speed == limit);                 // 1
    printf("Not equal to: %d\n", speed != limit);             // 0
    printf("Greater than or equal to: %d\n", speed >= limit); // 1
    printf("Less than or equal to: %d\n", speed <= limit);    // 1

    return 0;
}
