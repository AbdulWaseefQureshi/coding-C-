#include<stdio.h>
int stack[100];
int top=-1;
void push(int val)
{
	stack[++top]=val;
}
int pop()
{
	return stack[top--];
}
int main()
{
	char exp[100];
	int i=0;
	printf("enter the post fix expressions(digits and +-*/):");
	scanf("%s",exp);
	while(exp[i]!='\0')
	{
		char ch=exp[i];
			if (ch>='0'&&ch<='9')
			{
				push(ch-'0');
			}
			else
			{
				int b=pop();
				int a=pop();
				if(ch=='+')
				push(a+b);
				else if(ch=='-')
				push(a-b);
				else if(ch=='*')
				push(a*b);
				else if(ch=='/')
				push(a/b);	
			}
			i++;
			printf("result=%d\n",pop());
			return 0;	
	}
}
