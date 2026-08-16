// Write a program to check marks of student is passed or not ?
#include <stdio.h>

int main()
{
    int marks;

    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks >= 40)
    {
        printf(" Congrats!! You are passed.");
    }

    return 0;
}