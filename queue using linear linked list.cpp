#include<stdio.h>
#include<stdlib.h>
struct queue
{
	int data;
	struct queue*next;
};
typedef struct queue Q;
Q*front=NULL,*rear=NULL;
Q*rear();
void enque();
void deque();
void display();
Q*create()
{
	Q*new=(Q)malloc(sizeof(Q));
	printf("enter data");
	scanf("%d",&new->data);
	new->next=NULL;
	return new;
}
void enque()
{
	Q*new=create();
	if(front=NULL)
	front=rear=new;
	else
	{
		rear->next=new
		rear=new;
	}
}
void deque()
{
	if(front=NULL)
	printf("queue is under flow");
	else
	{
		a*temp=front;
		if(front==rear)
		front=rear=NULL;
		else
		{
			front=front->next;
		}
			printf("%d is removed\n",temp->data);
			free(temp);
    }
}
void display();
{
	t=front;
	if(front==NULL)
	printf("queue is empty\n");
	else
	{
		while(t!=rear)
		{
			printf("%d\t",t->data);
			t=t->next;
			printf("%d\n",t->data);
		}
	}
	int main()
	{
		int ch;
		do
		{
			printf("1.enque\n 2.deque\n3.display\n");
			printf("enter your choice:");
			scanf("%d",ch);
			switch(ch)
			{
				case1:enque;
				   break;
				case2:deque;
				   break;
				case3:display;
				    break;
				case4:printf("numer of elements are %d",size);
				     break;
			defauly:printf("invalid out put");
		}
		while(1);
		return 0;
    }
    
	

	

		
	
	


		
		
		
	

 

