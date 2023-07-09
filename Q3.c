#include<stdio.h>
int main()
{
    int i, j, count, temp, num[15];
    printf("\n Enter total number : ");
    scanf("%d",&count);
    printf("\n Enter %d elements : ", count);

    for(i=0;i<count;i++)
    scanf("%d",&num[i]);

    for(i=1;i<count;i++)
    {
        temp=num[i];
        j=i-1;
        while((temp<num[j])&&(j>=0))
        {
            num[j+1]=num[j];
            j=j-1;
        }
        num[j+1]=temp;
    }
    printf("\n After sorting : ");
    for(i=0;i<count;i++)
    printf(" %d ",num[i]);
    return 0;
}