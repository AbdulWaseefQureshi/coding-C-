//Singly Linked List
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
typedef struct node NODE;
NODE *create();
void insertAtBegin();
void insertAtEnd();
void insertAtAnywhere();
void deleteAtBegin();
void deleteAtEnd();
void deleteAtAnywhere();
void traverse();
void reverse(NODE*);
int size=0;
NODE *head=NULL;
NODE *create()
{
	NODE *newnode=(NODE*)malloc(sizeof(NODE));
	printf("Enter Data:");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	size++;
	return newnode;
}
void insertAtBegin()
{
	NODE *newnode=create();
	if(head==NULL){
		head=newnode;
	}
	else
	{
		newnode->next=head;
		head=newnode;
	}
}
void insertAtEnd()
{
	NODE *t,*newnode=create();
	if(head==NULL)
	{
		head=newnode;
	}
	else
	{
		t=head;
		while(t->next!=NULL)
		t=t->next;
		t->next=newnode;
	}
}
void insertAtAnywhere()
{
	int p,loc=0;
	printf("Enter position to insert:");
	scanf("%d",&p);
	if(p==1)
		insertAtBegin();
	else if(p==size+1)
		insertAtEnd();
	else if(p>size||p<1)
		printf("No Such position\n");
	else
	{
		NODE *t,*prev,*newnode;
		newnode=create();
		t=prev=head;
		while(t->next!=NULL)
		{
			loc++;
			if(loc==p)
				break;
			prev=t;
			t=t->next;
		}
		newnode->next=t;
		prev->next=newnode;
	}	
}
void deleteAtBegin()
{
	NODE *temp;
	if(head==NULL)
	{
		printf("List is empty!!!\n");
		return;
	}
	else
	{
		printf("%d is removed\n",head->data);
		temp=head;
		head=head->next;
		size--;
		free(temp);
	}
}
void deleteAtEnd()
{
	NODE *temp,*prev;
	if(head==NULL)
	{
		printf("List is empty!!!\n");
	}
	else
	{
		temp=head;
		while(temp->next!=NULL)
		{
			prev=temp;
			temp=temp->next;
		}
		printf("%d is removed\n",temp->data);
		prev->next=NULL;
		size--;
		free(temp);
	}
}
void deleteAtAnywhere()
{
	if(head==NULL)
	{
		printf("List is Empty!!!\n");
	}
	else
	{
		NODE *temp,*prev;
		int p,loc=0;
		printf("Enter the location:");
		scanf("%d",&p);
		if(p==size)
			deleteAtEnd();
		else if(p==1)
			deleteAtBegin();
		else if(p>size)
			printf("No such position\n");
		else
		{
			temp=head;
			while(temp->next!=NULL)
			{
				loc++;
				if(loc==p)
					break;
				prev=temp;
				temp=temp->next;
			}
			printf("%d is removed\n",temp->data);
			prev->next=temp->next;
			size--;
			free(temp);
		}
	}
}
void reverse(NODE *t)
{
	if(t==NULL)
	return;
	else
	{
		reverse(t->next);
		printf("->%d",t->data);
	}
}
void traverse()
{
	NODE *temp;
	if(head==NULL)
	printf("List is empty!!!\n");
	else
	{
		temp=head;
		while(temp!=NULL)
		{
			printf("->%d",temp->data);
			temp=temp->next;
		}
		printf("\n");
	}	
}
int main()
{
	int ch;
	do
	{
		printf("1.insert at begin\n2.Insert at end\n");
		printf("3.insert at anywhere\n4.Delete at begin\n");
		printf("5.delete at ending\n6.delete at anywhere\n");
		printf("7.traverse\n8.reverse\n9.count\n");
		printf("Enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:insertAtBegin();
				   break;
			case 2:insertAtEnd();
				   break;
			case 3:insertAtAnywhere();
				   break;
			case 4:deleteAtBegin();
				   break;
			case 5:deleteAtEnd();
				   break;
			case 6:deleteAtAnywhere();
				   break;
			case 7:traverse();
				   break;
			case 8:if(head==NULL) 
				   printf("List is Empty!!!");
				   else
				   reverse(head);
				   printf("\n");
				   break;
			case 9:printf("Number of elements are %d\n",size);
				   break;
			default:exit(0);
		}
	}while(1);
	return 0;
}
