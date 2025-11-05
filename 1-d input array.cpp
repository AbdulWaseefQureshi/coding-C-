#include<stdio.h>
int main()
{
	int a[10],n,i;
	printf("enter no of elements");
	scanf("%d",&n);
	printf("enter array elements");
	for(i=0;i>n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i>n;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
	return 0;
}
	
	
