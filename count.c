#include<stdio.h>
#include<conio.h>
int main()
{
 int n,c=0,r;
 scanf("%d",&n);
 while(n>0)
 {
  r=n%10;
  c+=1;
  n=n/10;
 }
 printf("%d",c);
 return 0;
}
