#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int queue[SIZE];
int front=-1,rear=-1;

void enque()
 {
    int n;
    if (rear==SIZE-1)
	 {
        printf("Queue is full overflow.\n");
        return;
    }
    printf("Enter data to insert:");
    scanf("%d",&n);
    if (front==-1) {
        front=0;
    }
    rear++;
    queue[rear]=n;
    printf("%d inserted into queue.\n",n);
}

void deque() {
    if (front==-1||front>rear) {
        printf("Queue is empty underflow.\n");
        return;
    }
    printf("Deleted element is %d\n", queue[front]);
    front++;
    if (front>rear) {
        front=rear=-1; 
    }
}

void display() {
    if (front==-1) {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements:");
    for (int i=front;i<=rear;i++) {
        printf("%d ",queue[i]);
    }
    printf("\n");
}

int main() {
    int choice;
    while (1) {
        printf("n1.Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
        switch (choice)
		 {
            case 1: enque();
			 break;
            case 2: deque(); 
			break;
            case 3: display(); 
			break;
            case 4: 
			exit(0);
            default: printf("Invalid choice\n");
        }
    }
    return 0;
}
