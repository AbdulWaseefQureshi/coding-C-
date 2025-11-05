#include <stdio.h>
#include <stdlib.h>
#define MAX 5

void push(int);
void peek();
void pop();
void display();

int stack[MAX],top=-1;

void push(int data) {
    if (top==MAX-1)
        printf("Stack is overflow\n");
    else {
        top++;
        stack[top]=data;
    }
}

void pop() {
    if (top==-1)
        printf("Stack is underflow\n");
    else {
        printf("%d is removed from top\n", stack[top]);
        top--;
    }
}

void peek() {
    if (top==-1)
        printf("Stack is empty\n");
    else
        printf("Top element is %d\n", stack[top]);
}

void display() {
    if (top==-1)
        printf("Stack is empty\n");
    else {
        int i;
        printf("Stack elements are:\n");
        for (i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
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
                printf("Enter the data to push: ");
                scanf("%d", &data);
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

    return 0;
}
