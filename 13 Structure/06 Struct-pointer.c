#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
};

int main()
{
    struct Student s = {1, "Kundan Kumar Gupta "};
    struct Student *s1 = &s;

    printf("%p\n", (void *)s1);
    printf("%p\n", (void *)&s);
    printf("%d\n", (*s1).rollNo);
    printf("%s\n", (*s1).name);

    struct Student ss = {2, "Raju Rastogi"};
    struct Student *ss1 = &ss;

    printf("%p\n", (void *)ss1);
    printf("%p\n", (void *)&ss);
    printf("%d\n", (*ss1).rollNo);
    printf("%s\n", (*ss1).name);

    return 0;
}


/*
Expexted output of this code is :-
0x7fff9da027e0// it is memory address where my roll and name is saved.
0x7fff9da027e0
1
Kundan Kumar Gupta 
0x7fff9da027a0
0x7fff9da027a0
2
Raju Rastogi




Memory
┌──────────────────────────────┐
│ Address: 0x7ffe12345670      │
│                              │
│ s:                           │
│ rollNo = 1                   │
│ name = "Kundan Kumar Gupta"  │
└──────────────────────────────┘



             s1
             │
             │ contains address
             ↓
      0x7ffe12345670
             │
             ↓
     ┌─────────────────┐
     │       s         │
     │ rollNo = 1      │
     │ name = Kundan...│
     └─────────────────┘
     
     
s       // actual structure
&s      // address of structure
s1      // pointer containing address of structure
*s1     // structure accessed through pointer

*/