#include<stdio.h>
int main()
{
	int a=10,*b,**c;
	b=&a;
	c=&b;
	printf("%d\n",b);
	printf("%d\n",&b);
	printf("%d\n",c);
	printf("%d\n",*c);
	printf("%d\n",**c);
	return 0;
}
