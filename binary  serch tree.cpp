#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *left,*right;
};
typedef struct node NODE;
NODE *root=NULL;
NODE *create();
void insert();
void traverse(NODE*);
void delete();
NODE findpredecessor(NODE);
NODE *create()
{
	NODE new=(NODE)malloc(sizeof(NODE));
	printf("Enter data");
	scanf("%d",&new->data);
	new->left=new->right=NULL;
	return new;
}
void insert()
{
	NODE *new=create(),*temp,*ptr;
	if(root==NULL)
	root=new;
	else
	{
		temp=root;
		while(temp!=NULL)
		{
			ptr=temp;
			if(new->data<temp->data)
			temp=temp->left;
			else
			temp=temp->right;
		}
		if(ptr->data<new->data)
		ptr->right=new;
		else
		ptr->left=new;
	}
}
void delete()
{
	if(root==NULL)
	printf("Tree is empty!\n");
	else
	{
		int data;
		NODE *temp=root,*ptr=NULL;
		printf("Enter data bro!");
		scanf("%d",&data);
		while(temp!=NULL&&(temp->left!=NULL||temp->right!=NULL))
		{
			if(temp->data==data)
			break;
			else if(data<temp->data)
			{
				ptr=temp;
				temp=temp->left;
			}
			else
			{
				ptr=temp;
				temp=temp->right;
			}
		}
		if(temp->left==NULL&&temp->right==NULL)
		{
			if(data<ptr->data)
			ptr->left=NULL;
			else
			ptr->right=NULL;
			printf("%d is removed",temp->data);
			free(temp);
		}
		else if(temp->left!=NULL&&temp->right==NULL)
		{
			if(data<ptr->data)
			ptr->left=temp->left;
			else
			ptr->right=temp->left;
			printf("%d is removed",temp->data);
			free(temp);
		}
		else if(temp->right!=NULL&&temp->left==NULL)
		{
			if(ptr==NULL)
			root=temp->right;
			else if(data<ptr->data)
			ptr->left=temp->right;
			else
			ptr->right=temp->right;
			printf("%d is removed",temp->data);
			free(temp);
		}
		else
		{
			NODE *p=findpredecessor(temp->left);
			int t=p->data;
			p->data=temp->data;
			temp->data=t;
			printf("%d is removed",p->data);
			free(p);
		}
	}
}
NODE *findpredecessor(NODE *t)
{
	NODE *p=t,*pt=NULL;
	while(p->right!=NULL)
	{
		pt=p;
		p=p->right;
	}
	if(pt!=NULL)
	{
		if(p->left!=NULL)
		pt->right=p->left;
		else
		pt->right=NULL;
	}
	else
	t=p->left;
	return p;
}
void traverse(NODE *t)
{
	if(t!=NULL)
	{
		traverse(t->left);
		printf("%d\t",t->data);
		traverse(t->right);
	}
}
int main()
{
	int ch;
	do
	{
		printf("1.Insert\n2.traverse\n3.delete\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:insert();
			break;
			case 2:if(root==NULL)
			printf("tree is empty");
			else
			traverse(root);
			break;
			case 3:delete();
			break;
			default:exit(0);
		}
	}
	while(1);
}
