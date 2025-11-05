//Double Linked List
#include<stdio.h>
#include<stdlib.h>
struct node
{
	struct node *left;
	int data;
	struct node *right;
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
	NODE newnode=(NODE)malloc(sizeof(NODE));
	printf("Enter Data:");
	scanf("%d",&newnode->data);
	newnode->right=NULL;
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
		newnode->right=head;
		head->left=newnode;
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
		while(t->right!=NULL)
		t=t->right;
		newnode->left=t;
		t->right=newnode;
	}
}
void insertAtAnywhere()
{
	int pos,loc=0;
	printf("Enter position to insert:");
	scanf("%d",&pos);
	if(pos==1)
		insertAtBegin();
	else if(pos==size+1)
		insertAtEnd();
	else if(pos>size||pos<1)
		printf("No Such position\n");
	else
	{
		NODE *newnode=create();
		NODE *t;
		NODE *p;
		t=head;
		while(t->right!=NULL)
		{
			loc++;
			if(loc==pos)
			break;
			p=t;
			t=t->right;
		}
		newnode->right=p;
		newnode->right=t;
		p->right=t->left=newnode;
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
		NODE *temp=head;
		head=head->right;
		head->left=NULL;
		printf("%d is removed\n",temp->data);
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
		NODE *t=head;
		while(t->right!=NULL)
		{
			t=t->right;
		}
		t->left->right=NULL;
		printf("%d is removed\n",t->data);
		size--;
		free(t);
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
			NODE *t=head;
			while(t->right!=NULL)
			{
				loc++;
				if(loc==p)
					break;
				t=t->right;
			}
			t->left->right=t->right;
			t->right->left=t->left;
			printf("%d is removed\n",t->data);
			size--;
			free(t);
		}
	}
}
void reverse(NODE *t)
{
	if(t==NULL)
	return;
	else
	{
		reverse(t->right);
		printf("<->%d",t->data);
	}
}
void traverse()
{
	NODE *temp;
	if(head==NULL)
	printf("List is empty!!!\n");
	else
	{
		NODE *t=head;
		while(t!=NULL)
		{
			printf("<->%d",t->data);
			t=t->right;
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
