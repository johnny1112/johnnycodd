#include<stdio.h>
#include<conio.h> 
int main()
{
  int i,n, fac= 1;
  printf("number");
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
  {
    fac= fac* i;
  printf("Factorial ", fac);
}
}
