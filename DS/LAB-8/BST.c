
#include <stdio.h>
#include <stdlib.h>

typedef struct BST
{
    int data;
    struct BST *left;
    struct BST *right;
} node;

// Creating a new node
node *create()
{
    node *temp;

    temp = (node *)malloc(sizeof(node));

    printf("Enter data: ");
    scanf("%d", &temp->data);

    temp->left = temp->right = NULL;

    return temp;
}

// Inserting a node into BST
void insert(node *root, node *temp)
{
    if(temp->data < root->data)
    {
        if(root->left == NULL)
            root->left = temp;
        else
            insert(root->left, temp);
    }
    else if(temp->data > root->data)
    {
        if(root->right == NULL)
            root->right = temp;
        else
            insert(root->right, temp);
    }
    else
    {
        printf("Duplicate element not allowed\n");
        free(temp);
    }
}

// Inorder traversal
void inorder(node *root)
{
    if(root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

// Preorder traversal
void preorder(node *root)
{
    if(root != NULL)
    {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

// Postorder traversal
void postorder(node *root)
{
    if(root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

int main()
{
    char ch;
    node *root = NULL, *temp;

    do
    {
        temp = create();

        if(root == NULL)
            root = temp;
        else
            insert(root, temp);

        printf("Do you want to enter more (y/n)? ");
        scanf(" %c", &ch);

    } while(ch == 'y' || ch == 'Y');

    printf("\nInorder Traversal: ");
    inorder(root);

    printf("\nPreorder Traversal: ");
    preorder(root);

    printf("\nPostorder Traversal: ");
    postorder(root);

    printf("\nElements in the BST: ");
    inorder(root);

    return 0;
}

