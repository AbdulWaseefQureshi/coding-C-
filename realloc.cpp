#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,m,*p,i;
	printf("enter number of elements:");
	scanf("%d",&n);
	p=(int*)calloc(n,sizeof(int));
	if(p==NULL)
	{
		printf("memory not allocated");
		exit(0);
	}
	else
	{
		for(i=0;i<n;i++)
		*(p+i)=i+1;
		for(i=0;i<n;i++)
		printf("%d=%d\n",p+i,*(p+i));
		printf("enter updated size:");
		scanf("%d",&m);
		p=(int*)realloc(p,m*sizeof(int));
		if(m<n)
		{
			for(i=0;i<n;i++)
			*(p+i)=i+1;
			{
				for(i=0;i<n;i++)
				printf("%d=%d\n",p+i,*(p+i));
			}
    	}
    }
    return 0;
	
				
			
		
		
		
	
	

