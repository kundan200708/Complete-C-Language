/*
Break statement:-
                --> It is used to break execution of loop that is when it encountered compiler directly 
                transfered control at outside of the loop body .So, Loop will terminate abnormally.


*/
#include <stdio.h>

int main()
{
    int i;

    for(i = 1; i <= 10; i++)
    {
        if(i == 5)
        {
            break;
        }

        printf("%d ", i);
    }

    return 0;
}