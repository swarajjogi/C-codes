//Q. Selection Sort program Program
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[50], n, i, j, p, t;
    printf("\n Enter number of elements : \n");
    scanf("%d", &n);
    printf("\n Enter %d integers : \n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (i = 0; i < (n - 1); i++)
    {
        p = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[p] > arr[j])
                p = j;
        }
        if (p != i)
        {
            t = arr[i];
            arr[i] = arr[p];
            arr[p] = t;
        }
    }
    printf("\n Sorted elements in ascending order : \n");
    for (i = 0; i < n; i++)
        printf(" %d \n", arr[i]);
    return 0;
}