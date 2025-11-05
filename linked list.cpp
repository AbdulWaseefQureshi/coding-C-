//stack using linked list
#include<stdio.h>
#include<stdlib.h>
struct stack
{  
	int data;
	struct stack *next;
};
typedef struct stack STACK;
STACK *top=NULL;
int size=0;
STACK *create();
void push();
void pop();
void peek();
void display();
STACK *create()
{
	STACK *newstack=(STACK)malloc(sizeof(stack));
	printf("Enter Data:");
	scanf("%d",&newstack->data);
	newstack->next=NULL;
	size++;
	return newstack;
}
void push()
{
	STACK *newstack=create();
	if(top==NULL){
		top=newstack;
	}
	else
	{
		newstack->next=top;
		top=newstack;
	}
}

void pop()
{
	STACK *temp;
	if(top==NULL)
	{
		printf("stack is underflow\n");
		return;
	}
	else
	{
		STACK *t=top;
		top=top->next;
		printf("%d is removed\n",t->data);
		size--;
		free(t);
	}
}
void peek()
{
	if(top=NULL)
	printf("stack is empty\n");
	else
	printf("top element is %d\n",top->data);
}
void display()
{
	if(top==NULL)
	printf("stack is empty!!!\n");
	else
	{
		STACK *t=top;
		while(top!=NULL)
		{
			printf("%d\n",t->data);
			t=t->next;
		}
		printf("\n");
	}	
}
int main() {
    int ch, data;
    do {
        printf("\n1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                push(data);
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

    return 0;
}
