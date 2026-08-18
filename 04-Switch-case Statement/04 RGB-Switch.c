/* if R = red, G = Green and B = blue */
#include <stdio.h>
#include <ctype.h>
int main(){
    char color_char;
/*
    printf("Enter the Character : ");
    scanf("%c",&color_char);
*/
    //taking input form second method
    /*
        variable_name = toupper(getchar()))
    */

    switch(color_char = toupper(getchar()))
    {
        case 'R' : printf("Red\n");
            break;
        case 'G' : printf("Green\n");
            break;
        case 'B' : printf("Blue");
            break;
        default : printf("Wrong input ");
    }



    return 0;
}