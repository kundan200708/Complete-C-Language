/*
    Dangerous Error : Does not ordinary cause syntax error
*/
/*
        if(a=b)                                     if(a==b)
            exp  - a assign b                         exp - a equal to b
            true                                                true or false
*/

//Example : check paycode if it is 4 than a bonus is awarded.
#include <stdio.h>
int main(){
    int paycode;
    //Equality Check improper

    if(paycode = 4) {  //This statement is always "TRUE"
        printf("you get a bonus!\n");
    }


    //next
     int paycode1;
    if(paycode == 4){
        printf("you get a bonus\n");
    }




return 0;
}