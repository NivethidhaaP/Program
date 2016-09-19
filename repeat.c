#include<stdio.h>
#include<conio.h>
int main()
{
 int a[100],n,r;
 scanf("%d",&n);
 for(int i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
}
for(int i=0;i<n;i++)
{
 for(int j=i+1;j<n;j++)
 {
  if(a[i]==a[j])
  {
   r=a[i];
   break;
  }
}
}
printf("%d",r);
return 0;
}
  
