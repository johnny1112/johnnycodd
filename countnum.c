#include <stdio.h>
int main()
{
long long n;
int count = 0;
printf("Enter an number: ");
scanf("%l4d", &n);
 while(n != 0)
{      
n = 10;
++count;
}
printf("Number of digits: %d", count);
}
