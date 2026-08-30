#include <stdio.h>
#include <string.h>

union Student
{
    int roll;
    char name[50];
};

int main()
{
    union Student s1;
    union Student s2;

    union Student *ptr1 = &s1;
    union Student *ptr2 = &s2;

    printf("Address of s1: %p\n", (void *)ptr1);
    printf("Address of s2: %p\n", (void *)ptr2);

    // Store roll number
    s1.roll = 1;
    printf("s1 roll: %d\n", s1.roll);

    // Now store name - this uses the same memory
    strcpy(s1.name, "Kundan Kumar");
    printf("s1 name: %s\n", s1.name);

    // Second union variable
    s2.roll = 2;
    printf("s2 roll: %d\n", s2.roll);

    strcpy(s2.name, "Ram Kumar");
    printf("s2 name: %s\n", s2.name);

    return 0;
}

