// Write a C program to determine the designation of an employee based on their salary using an if-else-if ladder.


#include <stdio.h>

int main()
{
    float salary;

    printf("Enter employee salary: ");
    scanf("%f", &salary);

    if (salary >= 100000)
    {
        printf("Designation: General Manager");
    }
    else if (salary >= 70000)
    {
        printf("Designation: Manager");
    }
    else if (salary >= 50000)
    {
        printf("Designation: Team Leader");
    }
    else if (salary >= 30000)
    {
        printf("Designation: Senior Employee");
    }
    else
    {
        printf("Designation: Junior Employee");
    }

    return 0;
}