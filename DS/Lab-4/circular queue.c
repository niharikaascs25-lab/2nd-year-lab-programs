#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int queue[MAX];
int front=-1,rear=-1;

void insert()
{
    int item;
    if((rear+1)%MAX==front){
        printf("Queue Overflow");
        return;
    }
    printf("Enter element:");
    scanf("%d",&item);
    if (front==-1){
        front=0;
        rear=0;
    }
    else{
        rear=(rear+1)%MAX;
    }
    queue[rear]=item;
}
void delete_queue()
{
    if (front==-1){
        printf("Queue Underflow");
        return;
    }
    printf("Deleted element:%d\n",queue[front]);
    if (front==rear){
        front=-1;
        rear=-1;
    }
    else{
        front=(front+1)%MAX;
    }
}
void display()
{
    int i;
    if(front==-1){
        printf("Queue is empty");
        return;
    }
    printf("Queue elements are:");
    i=front;
    while(1){
        printf("%d",queue[i]);
        if(i==rear)
            break;
        i=(i+1)%MAX;
    }
}
int main()
{
    int choice;
    printf("===CIRCULAR QUEUE IMPLEMENTATION===\n");
    printf("1.Insert\n2.Delete\n3.Display\n4.Exit\n");

    for(;;){
        printf("Enter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                insert();
                break;
            case 2:
                delete_queue();
                break;
            case 3:
                display();
                printf("\n");
                break;
            case 4:
                printf("Exiting...");
                exit(0);
        }
    }
}



















