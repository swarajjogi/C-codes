#include <stdio.h>
#include <stdlib.h>

struct node
{
    int item;
    struct node *left;
    struct node *right;
};

// inorder traversal
void inordertravaersal(struct node *root)
{
    if (root == NULL)
        return;
    inoredertraversal(root->left);
    printf("%d\n", root->item);
    inordertravaersal(root->right);
}

int main()
{
    struct node *root = createnode(1);
    insertleft(root, 2);
}
