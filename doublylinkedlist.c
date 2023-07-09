#include<stdio.h>
#include<stdlib.h>
void main()
{

struct node{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head; 
struct node *one = NULL;
struct node *two = NULL;
struct node *three = NULL;


one = malloc(sizeof(struct node));
two = malloc(sizeof(struct node));
three = malloc(sizeof(struct node));


one->data = 34;
two->data = 45;
three->data = 3;
one->next = two;
one->prev = NULL;
two->next = three;
two->prev = one;
three->next = NULL;
three->prev = two;
head = one;
printf("one<->data=34\n");
printf("two<->data=45\n");
printf("three<->data=57\n");
}