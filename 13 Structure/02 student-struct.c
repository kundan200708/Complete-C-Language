/* write a program which display roll no and name of 10 students of a class by using the struct.
 */
#include <stdio.h>
struct Student {
    int rollNo;
    char name[50];
};

void main(){
    struct Student s1 = {1, "Kundan Gupta"};
    printf("%d\n", s1.rollNo);
    printf("%s\n", s1.name);
    struct Student s2 = {2, "Manpreet Raj "};
    printf("%d\n", s2.rollNo);
    printf("%s\n", s2.name);
    struct Student s3 =  {3, "Raushan Kumar "};
    printf("%d\n", s3.rollNo);
    printf("%s\n", s3.name);
    struct Student s4 = {4, "Dennis Allie"};
    printf("%d\n", s4.rollNo);
    printf("%s\n", s4.name);
    struct Student s5 = {5, "Lauren Alfanso"};
    printf("%d\n", s5.rollNo);
    printf("%s\n", s5.name);
    struct Student s6 = {6, "Alberto Alfred"};
    printf("%d\n", s6.rollNo);
    printf("%s\n", s6.name);
    struct Student s7 = {7, "Liam Livingston"};
    printf("%d\n", s7.rollNo);
    printf("%s\n", s7.name);
    struct Student s8 = {8, "Abhishek Gupta "};
    printf("%d\n", s8.rollNo);
    printf("%s\n", s8.name);
    struct Student s9 = {9, "Gurpreet Singh"};
    printf("%d\n", s9.rollNo);
    printf("%s\n", s9.name);
    struct Student s10 = {10, "Raju Singh"};
    printf("%d\n", s10.rollNo);
    printf("%s\n", s10.name);
}