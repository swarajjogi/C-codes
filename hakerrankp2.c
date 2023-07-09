#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int arr[100], i, n, k;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(i=0; i<n; i++)
    {
        if(arr[i]==k)
        {
            k=i;
            printf("%d",k);
            break;
        }
    }
    if(i==n)
        printf("-1");
    return 0;
}