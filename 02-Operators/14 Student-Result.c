
/*
THis is a program in which accepts student name, marks in 3 subjects,
 and attendance, then calculates total, percentage,
  checks whether the student passed, and displays the result.
  */



#include <stdio.h>

int main()
{
    char name[30];
    int maths, science, english;
    int total;
    float percentage;
    int attendance;

    printf("Enter student name: ");
    scanf("%s", name);

    printf("Enter marks in Maths: ");
    scanf("%d", &maths);

    printf("Enter marks in Science: ");
    scanf("%d", &science);

    printf("Enter marks in English: ");
    scanf("%d", &english);

    printf("Enter attendance: ");
    scanf("%d", &attendance);

    total = maths + science + english;

    percentage = (float)total / 3;

    printf("\n----- Student Result -----\n");
    printf("Name: %s\n", name);
    printf("Total Marks: %d\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    printf("Pass/Fail: %s\n",
           (percentage >= 40 && attendance >= 75) ? "PASS" : "FAIL");

    return 0;
}