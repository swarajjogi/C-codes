#include <stdio.h>

int main()
{
    int a, b, c, ch;
    printf("enter 1 for addition \n");
    printf("enter 2 for substraction\n");
    printf("enter 3 for multiplcation\n");
    printf("Enter 4 for division\n");
    printf("Enter your choice : \n");
    scanf("%d", &ch);
    printf("Enter two number\n");
    scanf("%d%d", &a, &b);
    switch (ch)
    {
    case 12:
        c = a + b;
        printf("Result is %d", c);
        break;
    case 22:
        c = a - b;
        printf("Result is %d", c);
        break;
    case 34:
        c = a * b;
        printf("Result is %d", c);

        break;
    case 45:
        c = a / b;
        printf("Result is %d", c);

        break;
    default:
        printf("invalid, please enter 1,2 or 3");
    }
    return 0;
}