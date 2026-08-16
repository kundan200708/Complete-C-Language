// Wap to enter five subjects marks of a student and print their result?

#include<stdio.h>
int main (){

    int math,phy,chem,hindi,eng;
    int total=0;
    float percentage=0.0;
    printf("Enter your marks of maths ");
    scanf("%d",&math);
     printf("Enter your marks of physics ");
    scanf("%d",&phy);
     printf("Enter your marks of chemistry ");
    scanf("%d",&chem);
     printf("Enter your marks of Hindi ");
    scanf("%d",&hindi);
     printf("Enter your marks of English");
    scanf("%d",&eng);

    total= math+phy+chem+hindi+eng;
    percentage=total/5;
    if (percentage>=60)
    {
       printf("Congrats!! you are passing with First Division");
    }
    else if (percentage>=45&&percentage<60)
    {
       printf("You are passing with Second Dvision");
    }
    else if (percentage>=30&&percentage<45)
    {
       printf("You are passing with third  Dvision");
    }
    else{
        printf("Sorry!! you are fail");
    }
    



}