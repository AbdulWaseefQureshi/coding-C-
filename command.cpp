#include<stdio.h>
#include<stdio.h>
int main(int argc,char *argv[])
{
	int i,rev=0,r,n,m;
     printf("Enter  a number:");
     scanf("%d",&n);
     m=n;
     while(n!=0)
     {
     	r=n%10;
     	rev=rev*10+r;
     	n=n/10;
	 }
	 if(m==rev)
	 printf("Palindrome\n");
	 else
	 printf("Not Palindrome\n");
	 return 0;
}
