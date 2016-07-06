#include<stdio.h>
#include<conio.h>
Void main()
{
int n;
printf("Enter Number:");
scanf("%d",&n);
if(n>0)
  printf("Positive");
else if(n<0)
  printf("Negative");
else
  printf("Zero");
getch();
}
