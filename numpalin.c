#include<stdio.h>
#include<conio.h>
void main()
{
int n,r,n1,sum=0;
scanf("%d",&n);
n1=n;
while(n>0)
{
r=n%10;
sum=sum*10+r;
n=n/10;
}
if(sum==n1)
 printf("Palindrome");
else
 printf("Not Palindrome");
getch();
}
