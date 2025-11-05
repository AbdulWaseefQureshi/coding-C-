#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int queue[SIZE];
int front=-1;
int rear=-1;

void enqueue() {
    int n;
    if ((front==0 &&rear==SIZE-1)||(rear+1)%SIZE==front) {
        printf("queue is full Overflow.\n");
        return;
    }

    printf("Enter data to insert:");
    scanf("%d",&n);

    if (front==-1)
	 {
        front=rear=0;
    } else 
	{
        rear=(rear+1)%SIZE;
    }

    queue[rear]=n;
    printf("%d inserted into queue.\n", n);
}

void dequeue() 
{
    if (front==-1)
	 {
        printf("Queue is empty Underflow.\n");
        return;
    }

    printf("Deleted element is %d\n", queue[front]);

    if (front==rear) 
	{
        front=rear=-1;
    } 
	else
	 {
        front=(front+1)%SIZE;
    }
}

void display() {
    if (front==-1) {
        printf("Queue is empty.\n");
        return;
    }

    printf("Queue elements:");
    int i=front;
    while (1) 
	{
        printf("%d",queue[i]);
        if (i==rear)
            break;
        i=(i+1)%SIZE;
    }
    printf("\n");
}

int main() {
    int choice;

    while (1) 
	{
        printf("\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
		{
            case 1: enqueue();
			 break;
            case 2: dequeue(); 
			break;
            case 3: display();
			 break;
            case 4: 
			exit(0);
            default: printf("Invalid choice.\n");
        }
    }

    return 0;
}
