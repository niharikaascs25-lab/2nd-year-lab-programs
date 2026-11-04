#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* link;
};
struct node* first = NULL;

void create()
{
    struct node *newnode,*temp;
    int n,i;
    printf("Enter number of nodes:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      newnode = (struct node*)malloc(sizeof(struct node));
      printf("Enter data:");
      scanf("%d",&newnode->data);
      newnode->link=NULL;
      if (first==NULL){
        first=newnode;
      }
      else{
        temp=first;
        while(temp->link!=NULL)
            temp=temp->link;
        temp->link=newnode;
      }
    }
}
void insert_front()
{
    struct node *newnode;

    newnode = (struct node*)malloc(sizeof(struct node));

    printf("Enter data: ");
    scanf("%d", &newnode->data);

    newnode->link = first;
    first = newnode;
}
void insert_pos()
{
    struct node *newnode, *temp;
    int pos, i;

    printf("Enter position: ");
    scanf("%d", &pos);

    if(pos < 1)
    {
        printf("Invalid position");
        return;
    }

    if(pos == 1)
    {
        insert_front();
        return;
    }

    temp = first;

    for(i = 1; i < pos - 1 && temp != NULL; i++)
        temp = temp->link;

    if(temp == NULL)
    {
        printf("Invalid position");
        return;
    }

    newnode = (struct node*)malloc(sizeof(struct node));

    printf("Enter data: ");
    scanf("%d", &newnode->data);

    newnode->link = temp->link;
    temp->link = newnode;
}
void insert_end()
{
    struct node *newnode, *temp;

    newnode = (struct node*)malloc(sizeof(struct node));

    printf("Enter data: ");
    scanf("%d", &newnode->data);

    newnode->link = NULL;

    if(first == NULL)
        first = newnode;
    else
    {
        temp = first;

        while(temp->link != NULL)
            temp = temp->link;

        temp->link = newnode;
    }
}
void delete_front()
{
    struct node *temp;

    if(first == NULL)
    {
        printf("List is empty");
        return;
    }

    temp = first;
    first = first->link;

    free(temp);
}
void delete_element()
{
    struct node *temp, *prev;
    int key;

    if(first == NULL)
    {
        printf("List is empty");
        return;
    }

    printf("Enter element to delete: ");
    scanf("%d", &key);

    temp = first;
    prev = NULL;

    while(temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->link;
    }

    if(temp == NULL)
    {
        printf("Element not found");
        return;
    }

    if(prev == NULL)
        first = temp->link;
    else
        prev->link = temp->link;

    free(temp);
}
void delete_end()
{
    struct node *temp, *prev;

    if(first == NULL)
    {
        printf("List is empty");
        return;
    }

    if(first->link == NULL)
    {
        free(first);
        first = NULL;
        return;
    }

    temp = first;

    while(temp->link != NULL)
    {
        prev = temp;
        temp = temp->link;
    }

    prev->link = NULL;
    free(temp);
}


void display()
{
    struct node *temp;

    if(first == NULL)
    {
        printf("List is empty");
        return;
    }

    temp = first;

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
    create();
    printf("\n\n--- SINGLY LINKED LIST ---");
    printf("\n1. Insert at Front");
    printf("\n2. Insert at Position");
    printf("\n3. Insert at End");
    printf("\n4. Delete at Front");
    printf("\n5. Delete Specified Element");
    printf("\n6. Delete at End");
    printf("\n7. Display");
    printf("\n8. Exit");

    while(1)
    {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                insert_front();
                break;

            case 2:
                insert_pos();
                break;

            case 3:
                insert_end();
                break;

            case 4:
                delete_front();
                break;

            case 5:
                delete_element();
                break;

            case 6:
                delete_end();
                break;

            case 7:
                display();
                break;

            case 8:
                exit(0);

            default:
                printf("Invalid choice");
        }
    }

    return 0;
}
