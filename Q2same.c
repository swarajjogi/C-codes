//Q. Linear search C program for multiple occurrences Program

#include <stdio.h>
int main()
{
    int array[30], search, n, c;
    printf("\n Enter number of elements : ");
    scanf("%d", &n);
    printf("\n Enter %d integers :\n", n);
    for (c = 0; c < n; c++)
        scanf("%d", &array[c]);
    printf("\n Enter number to search : ");
    scanf("%d", &search);
    for (c = 0; c < n; c++)
    {
        if (array[c] == search)
        {
            printf("\n %d is present at position %d.\n", search, c + 1);
            break;
        }
    }
    if (c == n)
        printf("\n %d is not present.\n", search);
    return 0;
}