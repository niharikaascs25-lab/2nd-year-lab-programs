/*#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int queue[MAX];
int front=0,rear=-1;

void insert()
{
    int item;
    if (rear==MAX-1){
        printf("Queue Overflow");
        return;
    }
    printf("Enter element:");
    scanf("%d",&item);
    rear++;
    queue[rear]=item;
}
void delete_queue()
{
    if (front>rear){
        printf("Queue Underflow");
        return;
    }
    printf("Deleted element is %d\n",queue[front]);
    front++;
    if(front>rear){
        front=0;
        rear=-1;
    }
}
void display()
{
    int i;
    if (front>rear){
        printf("Queue Underflow");
        return;
    }
    printf("Queue elements are:");
    for(i=front;i<=rear;i++){
        printf("%d\t",queue[i]);
    }

}
int main()
{
    int choice;
    printf("=====QUEUE IMPLEMENTATION=====\n");
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
*/
















