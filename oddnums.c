#include<stdio.h>
int main()
{
 int a,b,i;
 scanf("%d%d",&a,&b);
 for(i=a;i<=b;i++)
 {
  if(i%2 != 0 || i==2)
   printf("%d\n",i);
}
return 0;
}
