#include <stdio.h>

int main()
{
    int age;
    printf("enter your age \n");
    scanf("%d", &age);
    if (age >= 80)
    {
        printf("you cant drive ");
    }
    else
    {
        printf("you are good to go\n");
    }
    return 0;
}