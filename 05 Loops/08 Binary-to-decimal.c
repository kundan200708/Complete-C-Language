// wap to to input an  binary integer and convert that into decimal?
#include<stdio.h>
#include<math.h>
int main(){
int bin,dec=0,r=0,c=0;
printf("Enter binary digit ");
scanf("%d",&bin);
while (bin>0)
{
  r= bin%10;
  dec= dec+r*pow(2,c);
  c++;
  bin= bin/10;
}
printf("\n Equivalent decimal is %d",dec);
return 0;
}