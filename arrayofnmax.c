#include<stdio.h>
int main()
{
int n,a[100],i,x;
printf("enter elements");
scanf("%d",&n);
scanf("%d",&a[1]);
 x=a[1];
for(i=2;i<=n;i++)
{
 scanf("%d",&a[i]);
if(a[i]<=x)
{
 x=a[i];
 }
}
printf("%d",&x);
}
