//infixtopostfix
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
void push(char);
char pop();
char peek();
int prec(char);
void infixtopostfix(char*);
char stack[10];
int top=-1;
void push(char c)
{
	
	top++;
	stack[top]=c;
}
char pop()
{
	char c=stack[top];
	top--;
	return c;
}
char peek()
{
	return stack[top];
}
int prec(char c)
{
	switch(c)
	{
		case '+':
		case '-':return 1;
		case '*':
		case '/':
		case '%':return 2;
		case '^':return 3;
		default :return 0;	
	}
}
void infixtopostfix(char *ex)
{
	int i,j=0,a=0,ch=0;
	char postfix[100];
	char *h=strrev(ex),*z;
	int n=strlen(ex);
	for(i=0;ex[i]!='\0';i++)
	{
		if(isalnum(ex[i]))
		a++;
		else if(ex[i]=='+' || ex[i]=='-' || ex[i]=='*' || ex[i]=='/' || ex[i]=='%' || ex[i]=='^')
		ch++;
	}
	if(a<=ch)
	{
		printf("Invalid expression");
		exit(0);
	}
	for(i=0;i<n;i++)
	{
		if(isalnum(ex[i]) || ex[i]=='+' || ex[i]=='-' || ex[i]=='*' || ex[i]=='/' || ex[i]=='%' || ex[i]=='^'||ex[i]=='('||ex[i]==')')
		{
			if(isalnum(ex[i]))
			{
				postfix[j]=ex[i];
				j++;
			}
			else if(ex[i]=='(')
			push(ex[i]);
			else if(ex[i]==')')
			{
				while(top!=-1 && peek()!='(')
				{
					postfix[j]=pop();
					j++;
				}
				pop();
			}
			else{
				while(top!=-1 && prec(ex[i])<=prec(peek()))
				{
					postfix[j]=pop();
					j++;
				}
				push(ex[i]);
			}
		}
		else
		{
			printf("Invalid expression");
			exit(0);
		}
	}
	while(top!=-1)
	{
		char ch=pop();
		if(ch=='(')
		{
			printf("nvalid expression");
			exit(0);
		}
		postfix[j]=ch;
		j++;
	}
	postfix[j]='\0';
	z=strrev(postfix);
	printf("Postfix expression  is %s",postfix);
}
int main()
{
	char exp[100];
	printf("Enter valid expression:");
	gets(exp);
	infixtopostfix(exp);
	return 0;
}
