#include<stdio.h>
#include<stdlib.h>
struct stack{
	int data;
	struct stack *next;
};
typedef struct stack STACK;
STACK *top=NULL;
int size=0;
STACK *create();
void push();
void pop();
void peak();
void display();
STACK *create()
{
	STACK newnode=(STACK)malloc(sizeof(STACK));
	printf("Enter Data:");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	size++;
	return newnode;
}
void push()
{
	STACK *newnode=create();
	if(top==NULL){
		top=newnode;
	}
	else
	{
		newnode->next=top;
		top=newnode;
	}
}
void pop()
{
	if(top==NULL){
		printf("Stack is under flow\n");
	}
	else{
		STACK *t=top;
		top=top->next;
		printf("%d is removed\n",t->data);
		size--;
		free(t);
	}
}
void peek()
{
	if(top==NULL)
	printf("stack is empty\n");
	else
	printf("top element is %d\n",top->data);
}
void display()
{
	if(top==NULL)
	printf("stack is empty\n");
	else
	{
		STACK *t=top;
		while(t!=NULL)
		{
			printf("%d\n",t->next);
			t=t->next;
		}
	}
}int main()
{
	    int ch, data;
    do {
        printf("\n1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch) 
		{
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice! Please try again\n");
        }
    } while (ch!=5);

//    return 0;
}
