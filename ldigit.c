#include<stdio.h>
int main()
{
int n,i=0,a[25],j,r,k,temp,t;
scanf("%d",&n);
while(n>0)
{
r=n%10;
a[i]=r;
n=n/10;
i++;
}

for(k=0;k<i;k++)
{
    temp=a[k];
    
for(j=k+1;j<i;j++)
{
if(a[j]<a[k])
  {
      t=a[k];
      a[k]=a[j];
      a[j]=t;
     
  }
}
}
for(k=0;k<i-3;k++)
  printf("%d",a[k]);

}
