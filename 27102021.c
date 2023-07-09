#include<stdio.h>
#include<stdlib.h>

int main()
{
    int arr[100], c, a , high;
    printf("enter number of charachter");
    scanf("%d",  &a);
    for (c=0; c<10; c++)
        scanf("%d", arr[100]);
    printf("enter the number of element");
    scanf("%d", &high);
    for(c=0; c<a; c++)
    {
        if( arr[c]== high)
        {
            printf("%d element at %d", high , c+1);
            break;

        }
    }
    if (c==a)
        printf("is presnt on  theis order", high);
    return 0;

}
