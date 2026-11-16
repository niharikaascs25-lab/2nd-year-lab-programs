#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

struct node *top = NULL;
struct node *front = NULL;
struct node *rear = NULL;
void push()
{
    struct node *newnode;

    newnode = (struct node*)malloc(sizeof(struct node));

    printf("Enter element: ");
    scanf("%d", &newnode->data);

    newnode->link = top;
    top = newnode;
}
void pop()
{
    struct node *temp;

    if(top == NULL)
    {
        printf("Stack Underflow");
        return;
    }

    temp = top;

    printf("Deleted element: %d", temp->data);

    top = top->link;

    free(temp);
}
void display_stack()
{
    struct node *temp;

    if(top == NULL)
    {
        printf("Stack is Empty");
        return;
    }

    temp = top;

    printf("Stack elements: ");

    while(temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->link;
    }

    printf("NULL");
}

void enqueue()
{
    struct node *newnode;

    newnode = (struct node*)malloc(sizeof(struct node));

    printf("Enter element: ");
    scanf("%d", &newnode->data);

    newnode->link = NULL;

    if(front == NULL)
    {
        front = newnode;
        rear = newnode;
    }
    else
    {
        rear->link = newnode;
        rear = newnode;
    }
}
void dequeue()
{
    struct node *temp;

    if(front == NULL)
    {
        printf("Queue Underflow");
        return;
    }

    temp = front;

    printf("Deleted element: %d", temp->data);

    front = front->link;

    if(front == NULL)
        rear = NULL;

    free(temp);
}
void display_queue()
{
    struct node *temp;

    if(front == NULL)
    {
        printf("Queue is Empty");
        return;
    }

    temp = front;

    printf("Queue elements: ");

    while(temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->link;
    }

    printf("NULL");
}
int main()
{
    int choice;
    printf("\n\n--- STACK AND QUEUE OPERATIONS ---");

    printf("\n1. Push");
    printf("\n2. Pop");
    printf("\n3. Display Stack");
    printf("\n4. Enqueue");
    printf("\n5. Dequeue");
    printf("\n6. Display Queue");
    printf("\n7. Exit");

    while(1)
    {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                push();
                break;

            case 2:
                pop();
                break;

            case 3:
                display_stack();
                break;

            case 4:
                enqueue();
                break;

            case 5:
                dequeue();
                break;

            case 6:
                display_queue();
                break;

            case 7:
                exit(0);

            default:
                printf("Invalid choice");
        }
    }

    return 0;
}
