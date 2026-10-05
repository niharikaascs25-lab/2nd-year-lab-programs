/*#include <stdio.h>
#define MAX 5
int top;
int stack[MAX];

void push()
{
    int value;
    if (top==MAX-1)
        printf("Stack Overflow!");
    else{
            printf("Enter value to be inserted:");
            scanf("%d",&value);
            top++;
            stack[top]=value;
            printf("%d pushed into stack\n",value);
    }

}

int pop()
{
    int deleted_item;
    if(top==-1){
        printf("Stack Underflow");
        return -1;
    }
    else{
        deleted_item=stack[top];
        top=top-1;
        return deleted_item;
    }
}

void display()
{
    if (top==-1){
        printf("Stack is empty");
        return;
    }
    for(int i=0;i<=top;i++){
        printf("%d",stack[i]);
    }
}
int main()
{
    int choice;
    top=-1;
    for(;;){
        printf("\n---MENU---\n");
        printf("1:Push 2:Pop\n");
        printf("3:Display 4:Exit\n");
        printf("Enter your choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                push();
                break;
            case 2:
                int deleted_item=pop();
                if (deleted_item!=-1){
                        printf("Deleted item=%d\n",deleted_item);
                }
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice!\n");
                break;


        }

    }
    return 0;
}
*/























