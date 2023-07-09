//Q.C program to display students information Program
#include <stdio.h>
    struct student
{
    int roll, i;
    char name[15];
};
int main()
{
    struct student s;
    struct student *p;
    p = &s;
    printf("\n Enter students roll number : ");
    scanf("%d", &p->roll);
    printf("\n Enter students name : ");
    scanf("%s", &p->name);
    printf("\n\n Entered details are\n");
    printf("\n roll : %d", p->roll);
    printf("\n name : %s \n ", p->name);
    return 0;
}