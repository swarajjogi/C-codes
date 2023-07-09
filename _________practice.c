#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

int main()
{

    struct node *head = malloc(sizeof(struct node));
    struct node *current = malloc(sizeof(struct node));
    struct node *middle = malloc(sizeof(struct node));
    struct node *last = malloc(sizeof(struct node));

    head->next = current;
    current->next - middle;
    middle->next = last;
    last->next = NULL;
    current->data = 97;

    middle->data = 54;
    last->data = 28;
    printf("%d\n", current->data);
    printf("%d\n", middle->data);
    printf("%d\n", last->data);
    return 0;
}
