#include<stdio.h>
#include<conio.h>
void main()
{
int a[25],i,n,j,temp;
scanf("%d",&n);
for(i=0;i<n;i++)
  scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
temp=a[i];
if(a[i]<a[j])
  a[i]=a[j];
}
}
for(i=0;i<n-3;i++)
  printf("%d",a[i]);
getch();
}
