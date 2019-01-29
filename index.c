#include <stdio.h>
int main(void) 
{
	int arr[10],i,n;
	printf("enter the size");
	scanf("%d",&n);
	printf(" enter the elments:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		printf("%d %d",arr[i],i);
	}
	return 0;
}
