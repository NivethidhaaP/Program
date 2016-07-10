#include<stdio.h>
#include<conio.h>
void main()
{
int y,i;
scanf("%d",&y);
if(y%4==0)
{
if(y%100==0)
{
if(y%400==0)
  printf("Leap year");
else 
  printf("Not leap year");
}
else
  printf("leap year");
}
else
  printf("Not Leap year");
getch();
}
