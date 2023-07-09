#include <stdio.h>
#include <stdlib.h>

struct worker
{
    int salary, id;
    char name[20], drpt[50];
};

int main()
{
    struct worker worker1;
    int id;
    printf("Enter the name of worker: ");
    scanf("%s", &worker1.name);
    printf("Enter the id of worker: ");
    scanf("%d", &worker1.id);
    printf("Enter the salary of worker: ");
    scanf("%d", &worker1.salary);
    printf("Enter the department of worker: ");
    scanf("%s", &worker1.drpt);

    printf("The worker Details are:\n");
    printf("Name is: %s\n", worker1.name);
    printf("Worker id is: %d\n", worker1.id);
    printf("salary is: %d\n", worker1.salary);
    return 0;
}