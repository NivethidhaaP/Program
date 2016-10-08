#include<stdio.h>
#include<conio.h>
int main()
{
int n,i,f=0;
scanf("%d",&n);
if(n!=2){
for(i=2;i<n;i++)
{
 if(n%i != 0)
  f=1;
  else
   f=0;
 }
}
else
 f=1;
 if(f==1)
  printf("Prime");
 else
  printf("Not Prime");
 return 0;
}
