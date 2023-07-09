#include <stdio.h>
#include<conio.h>
void main()
{
 
    int a[10];
    int i;
    int b = 0;
    for (i = 0; i < 5; i++)
    {
        printf("enter number :  ");
        scanf("%d," ,& a [i]);
    }
    for (i = 0; i < 5; i++)
    {
        b += a[i];
    }

    {
        printf("total is : %d", b);
        }

    getch ();
}