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
int size = 0;
NODE *head = NULL;
NODE *create() 
{
    NODE *newnode=(NODE*)malloc(sizeof(NODE));
    printf("Enter Data:");
    scanf("%d",&newnode->data);
    newnode->right=newnode;
    newnode->left=newnode;
    size++;
    return newnode;
}
void insertAtBegin() 
{
    NODE *newnode=create();
    if (head==NULL) 
	{
        head=newnode;
    } 
	else 
	{
        NODE *temp=head->left;
        newnode->right=head;
        newnode->left=temp;
        head->left=newnode;
        temp->right=newnode;
        head = newnode;
    }
}
void insertAtEnd() 
{
    NODE *newnode=create();
    if(head==NULL) 
	{
        head=newnode;
    }
	else 
	{
        NODE *temp=head->left;
        temp->right=newnode;
        newnode->left=temp;
        newnode->right=head;
        head->left=newnode;
    }
}
void insertAtAnywhere() 
{
    int pos,loc=0;
    printf("Enter position to insert:");
    scanf("%d",&pos);
    if(pos==1) 
	{
        insertAtBegin();
    } 
	else if(pos==size+1)
	{
        insertAtEnd();
    }
	else if(pos>size || pos<1) 
	{
        printf("No Such position\n");
    } 
	else 
	{
        NODE *newnode=create();
        NODE *t=head,*p=head;
        do
		{
            loc++;
            if(loc==pos)
            break;
            p=t;
            t=t->right;
        }while(t->right!=head); 
        newnode->right=t->right;
        newnode->left=t;
        t->right->left=newnode;
        t->right=newnode;
    }
}
void deleteAtBegin() 
{
    if(head==NULL) 
	{
        printf("List is empty!!!\n");
        return;
    }
    NODE *temp=head;
    if(head->right==head) 
	{
        head=NULL;
    } 
	else 
	{
        NODE *temp=head->left;
        head=head->right;
        head->left =temp;
        temp->right=head;
    }
    printf("%d is removed\n",temp->data);
    size--;
    free(temp);
}
void deleteAtEnd() 
{
    if(head==NULL) 
	{
        printf("List is empty!!!\n");
        return;
    }
    NODE *t=head->left;
    if(head==t) 
	{
        head=NULL;
    } 
	else 
	{
        t->left->right=head;
        head->left=t->left;
    }
    printf("%d is removed\n",t->data);
    size--;
    free(t);
}
void deleteAtAnywhere() 
{
    if(head==NULL)
	{
        printf("List is Empty!!!\n");
        return;
    }
    int p,loc=0;
    printf("Enter the location:");
    scanf("%d",&p);
    if(p==1) 
	{
        deleteAtBegin();
    } 
	else if(p==size) 
	{
        deleteAtEnd();
    }
	else if(p>size)
	{
        printf("No such position\n");
    } 
	else 
	{
        NODE *t=head;
        while(t->right!=head) 
		{
            t=t->right;
            loc++;
        }
        t->left->right=t->right;
        t->right->left=t->left;
        printf("%d is removed\n", t->data);
        size--;
        free(t);
    }
}
void reverse(NODE *t) 
{
    if(t==NULL) 
	return;
    NODE *temp=t->left;
    do 
	{
        printf("<->%d",temp->data);
        temp=temp->left;
    }while(temp!=t->left);
    printf("\n");
}
void traverse() 
{
    if(head==NULL) 
	{
        printf("List is empty!!!\n");
        return;
    }
    NODE *t=head;
    do 
	{
        printf("<->%d",t->data);
        t=t->right;
    }while(t!=head);
    printf("\n");
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
        scanf("%d", &ch);
        switch (ch) 
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
            case 9:printf("Number of elements are %d\n", size);
                    break;
            default:exit(0);
        }
    }while(1);
    return 0;
}
