// In C Language function call can be done by using two ways that are given below :-
/*
        (1) Call by value:-
                          --> In this technique a function is dircetly called by passing value to actual argument and the
        formal argument just recieve the copy of actual data so, you can not modify the original argument by formal argument.

Example of call by vlaue are given below:-
*/
#include<stdio.h>
void sum (int *,int *);
int main (){
    int a,b;
printf("Enter first and second number ");
scanf("%d%d",&a,&b);
sum(&a,&b);
return 0;

}
void sum (int *p,int*p1){
    printf("\n The sum of a and b is = %d",*p + *p1);
}

/*
         (2) Call by reference :- 
                                --> Passing address rather than data to actual argument is called call by reference.

                                --> In this technique we need pass pointer to a function so,function call become compact that improves execution speed.
                                
                                --> It also faces the formal parameter can modify values of actual argument .

Example of call by reference is given below
*/
#include <stdio.h>

void sum(int *, int *);

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    sum(&a, &b);

    return 0;
}

void sum(int *p, int *p1)
{
    printf("\nSum of two numbers is = %d", *p + *p1);
}
