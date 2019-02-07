#include <stdio.h>
int main()
{
char str1[50], str2[50], i, j;
printf("Enter 1st string: ");
scanf("%s",1st str);
 printf("Enter 2nd string: ");
 scanf("%s",2nd str);
for(i=0; 1ststr[i]!='0'; ++i); 
for(j=0; 2nstr[j]!='0'; ++j, ++i)
{
 1ststr[i]=2ndstr[j];
 }
1ststr[i]='0';
 printf("Output: %s",1ststr);
 return 0;
}
