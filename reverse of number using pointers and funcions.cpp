#include<stdio.h>
void revese (int,int*);
void reverse(int n,int *rev)
{
	int r;
	while (n!=0)
	{
		r=n%10;
		*rev=*rev*10+r;
		n=n/10;
		
	}
}
int main()
{
	int n,rev=0;
	printf("enter a number :");
	scanf("%d",&n);
	reverse(n,&rev);
	if(n==rev)
	printf("palindrom");
	else
	printf("not a palindeome ");
	return 0;
}
