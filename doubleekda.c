#include<stdio.h>

int main()
{
    int age;
    printf("enter your age\n");
    scanf("%d", &age);
    if (age==18)
    {
        printf("you are illigible for election");
    }
    else
    {
        printf("go and sleep");
    }
    
    return 0;
}