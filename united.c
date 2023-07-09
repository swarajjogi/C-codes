#include <stdio.h>

#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

void insertAtBeginning(struct Node **head_ref, int new_data)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));

    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void insertAtEnd(struct Node **head_ref, int new_data)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    struct Node *last = *head_ref; /* used in step 5*/
    new_node->data = new_data;
    new_node->next = NULL;

    if (*head_ref == NULL)
    {
        *head_ref = new_node;

        return;
    }

    while (last->next != NULL)
        last = last->next;

    last->next = new_node;

    return;
}
void deleteNode(struct Node **head_ref, int key)
{
    struct Node *temp = *head_ref, *prev;

    if (temp != NULL && temp->data == key)
    {
        *head_ref = temp->next;
        free(temp);
    }
    return;
}

void printList(struct Node *node)
{
    while (node != NULL)
    {
        printf("%d", node->data);
        node = node->next;
    }
}

int main()

{
    struct Node *head = NULL;

    insertAtEnd(&head, 1);
    insertAtBeginning(&head, 6);
    insertAtBeginning(&head, 4);
    insertAtEnd(&head, 7);
    printf("Linked list: ");
    printList(head);
    printf("\nAfter deleting an element: ");
    deleteNode(&head, 3);
    printList(head);
    return 0;
}