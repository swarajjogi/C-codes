#include<stdio.h>
int main()
{
    int year;
    printf("enter the year that you want to check its leep or not");
    scanf("%d", &year);

    if((year % 4 == 0) && (year % 100 !=0))
    {
        printf("the year is leep\n");

    }
    else
    {
        printf("the year is normal\n");
    }
    return 0;
}