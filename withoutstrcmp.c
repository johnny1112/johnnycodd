include <conio.h>
void main ()
{
char str1 [30], str2 [30];
 int i = 0, flag=0 ,len1, len2;
 printf ("Enter 1st string");
 gets (str1);
 printf (" Enter 2nd string");
 gets (str2);
len1 = strlen (str1);
 len2 = strlen (str2);
while (i < len1 && i < len2 )
{
 if( 1st str [i] == 2ndstr [i])
 {
 i++;
continue;
 }
if( 1ststr [i] < 2nd str [i])
{
flag = -1;
 break;
 }
 if( 1ststr [i] > 2nd str [i])
{
 flag = 1;
break;
}
}
if (flag == 0)
 printf (" Both strings are equal ");
 if(flag == -1)
printf ("1st string is less than 2nd string ");
if( flag == 1)
printf (" 1st string is greater than 2nd string ");
}


