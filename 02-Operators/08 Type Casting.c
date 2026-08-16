/*
Type Casting :-
              --> It is a process of data conversion from one type to another compatible type so,
              that you can get more accurate result .
              -->In C programming there are two type of type casting 
                           (1) implicit Conversion (Automatically)
                           (2)Explicit Conversion  (manaually)
*/
#include <stdio.h>
int main(){
    //1. implicit conversion
    float myFloat = 10;
    printf(" implicit conversion :\n My_Float : %f\n",myFloat);

    //2. Explicit conversion
    int x = 2;
    float y;
    y = (float)x;
    printf("explicit conversion : \n My_Float : %f\n",y);

return 0;
}
/*
datatypes            compatible Types
char	---->       int, float, double
int   ----->	       float, double
float ------>          	double
int	   ---->              char
float	---->              int
double	----->           int, float


*/