/*
Type of Function:-
                 --> There are mainly four type of function:-


                 (1) No argument no return:- This type of function do not take any argument from calling program
                 and do not return any value to the function body

                 Example of no argument and no return function are given below:-
*/
#include <stdio.h>

void facto();
int main()
{
    facto();
    return 0;
}
void facto()
{
    int n, f = 1;
    printf("Enter a Number ");
    scanf("%d", &n);
    while (n > 1)
    {
        f = f * n;
        n--;
    }
    printf("Factorial of given number is =%d ", f);
}
/*
             (2) Argument without return :- This type of function takes some argument (i.e input) from calling
             function but do not return any type of output from function body.

(NOTE):- In C- Lnaguage argument must be of same type .

Example of Argument wihtout return type is given below :-
*/

#include <stdio.h>
void facto(int);
int main()
{
    int x;
    printf("Enter a Number ");
    scanf("%d", &x);
    facto(x);
    return 0;
}

void facto(int a)
{
    int f = 1;
    while (a > 1)
    {
        f = f * a--;
    }
    printf("\n The factorial of given number is = %d", f);
}

/*
Arguments :-
           --> Arguments are input for the function that passes through calling function .

           --> The calling function passes the value are called actual argument that passes copy of actual data that
           recieved in formal argument of called function or body .

           --> Actual argument can easily modify the contents of formal data or argument , You can not alter contents of acutal data

*/

/*
                (3) Return with argument :-
                                          --> This type of funtion text some argument as input and return 0 value as output to calling
                                          function.

                Example of Return with argument are given below :-
*/
// Example (a):-
#include <stdio.h>
int factr(int);
int main()
{
    int x, f;
    printf("Enter a number");
    scanf("%d", &x);
    f = factr(x);
    printf("\n Factorial of inputed number is = %d", f);
    return 0;
}

int factr(int a)
{
    int y = 1;
    while (a > 1)
    {
        y = y * a;
        a--;
    }
    return y;
}
// Example (b) :- Passing array into function
#include <stdio.h>
int search(int[], int);
int main()
{
    int arr[10], i, val;
    printf("Enter the Elements of array");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter value to search elements in the array");
    scanf("%d", &val);
    printf("\n Data Found = %d", search(arr, val));
    return 0;
}
int search(int arr[10], int v)
{
    int i, f = 0;

    for (i = 0; i < 10; i++)
    {
        if (arr[i] == v)
        {
            f = 1;
            break;
        }
    }

    if (f == 1)
    {
        return arr[i];
    }
    else
    {
        return 0;
    }
}

/*
              (4) No argument but return type function:-
                                                       --> It does not takes any argument but can return a value as output.
Example of No argument but return type function are given below :-


*/
#include <stdio.h>

char Ascii();

int main()
{
    printf("ASCII Character = %c", Ascii());

    return 0;
}

char Ascii()
{
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    return x;
}
