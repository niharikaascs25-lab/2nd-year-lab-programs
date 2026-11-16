/*#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

struct node *first = NULL;
struct node *second = NULL;
void create_first()
{
    struct node *newnode, *temp;
    int n, i;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
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
}
void create_second()
{
    struct node *newnode, *temp;
    int n, i;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        newnode = (struct node*)malloc(sizeof(struct node));

        printf("Enter data: ");
        scanf("%d", &newnode->data);

        newnode->link = NULL;

        if(second == NULL)
            second = newnode;
        else
        {
            temp = second;

            while(temp->link != NULL)
                temp = temp->link;

            temp->link = newnode;
        }
    }
}
void sort()
{
    struct node *temp, *ptr;
    int t;

    if(first == NULL)
    {
        printf("List is empty");
        return;
    }

    for(temp = first; temp->link != NULL; temp = temp->link)
    {
        for(ptr = first; ptr->link != NULL; ptr = ptr->link)
        {
            if(ptr->data > ptr->link->data)
            {
                t = ptr->data;
                ptr->data = ptr->link->data;
                ptr->link->data = t;
            }
        }
    }

    printf("List sorted successfully");
}
void reverse()
{
    struct node *prev = NULL, *current = first, *temp;

    while(current != NULL)
    {
        temp = current->link;
        current->link = prev;
        prev = current;
        current = temp;
    }

    first = prev;

    printf("List reversed successfully");
}
void concat()
{
    struct node *temp;

    if(first == NULL)
    {
        first = second;
        second = NULL;
        return;
    }

    if(second == NULL)
    {
        printf("Second list is empty");
        return;
    }

    temp = first;

    while(temp->link != NULL)
        temp = temp->link;

    temp->link = second;
    second = NULL;

    printf("Lists concatenated successfully");
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

    printf("Create First Linked List\n");
    create_first();

    printf("\n\n--- LINKED LIST OPERATIONS ---");
    printf("\n1. Sort");
    printf("\n2. Reverse");
    printf("\n3. Concatenation");
    printf("\n4. Display");
    printf("\n5. Exit");

    while(1)
    {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                sort();
                break;

            case 2:
                reverse();
                break;

            case 3:
                if(second == NULL)
                    create_second();
                concat();
                break;

            case 4:
                display();
                break;

            case 5:
                exit(0);

            default:
                printf("Invalid choice");
        }
    }

    return 0;
}
*/
