#include<stdio.h>

main()
{
    int b=0;
    int a;
    do
    {
        printf("enter 0 to exit the code \n");
        printf("Enter any number thet you want to do that number square : \n ");
        scanf("%d",&a);
        b=a*a;
        
        printf("the square is :%d\n",b);

    } while (b!=0);
    
}