#include <stdio.h>
#include <stdlib.h>

struct node
{
    int item;
    struct node *left;
    struct node *right;
};

// In-order Traversal

void inorderTraversal(struct node *root)
{
    if (root == NULL)
        return;
    inorderTraversal(root->left);
    printf("%d ", root->item);
    inorderTraversal(root->right);
}

// pre-order Traversal

void preorderTraversal(struct node *root)
{
    if (root == NULL)
        return;
    printf(" %d ", root->item);
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

// Post-order Traversal

void postorderTraversal(struct node *root)
{
    if (root == NULL)
        return;
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    printf("%d ", root->item);
}

// Create a new Node

struct node *CreateNode(value)
{
    struct node *newNode = malloc(sizeof(struct node));
    newNode->item = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
};

// Insert on the left of the node

struct node *insertLeft(struct node *root, int value)
{
    root->left = CreateNode(value);
    return root->left;
};

// Insert on the right of the node

struct node *insertRight(struct node *root, int value)
{
    root->right = CreateNode(value);
    return root->right;
    printf(" %d ", root->item);
};

int main()
{
    struct node *root = CreateNode(1);
    insertLeft(root, 2);
    insertRight(root, 3);
    insertLeft(root->left, 4);
    insertRight(root->left, 5);
    insertLeft(root->right, 6);
    insertRight(root->right, 7);

    printf("\n  In-order Traversal : ");
    inorderTraversal(root);

    printf("\n\n  Pre-order Traversal :");
    preorderTraversal(root);

    printf("\n\n  Post-order Traversal : ");
    postorderTraversal(root);
    printf("\n");

    return 0;
}