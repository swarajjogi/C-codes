//Binary search program 
//arrry must be sorted
#include <stdio.h>
int main()
{
    int array[100], first, last, search,middle,c,n;
    printf("Enter number of elements\n");
    scanf("%d", &n);
    printf("Enter %d integers\n", n);
    for (c = 0; c < n; c++)
        scanf("%d", &array[c]);
    printf("Enter value to find\n");
    scanf("%d", &search);
    first = 0;
    last = n - 1;
    middle = (first + last) / 2;
    // printf("This %d middle \n",middle);
    while (first <= last)
    {
        printf("This %d middle %d first %d last \n", middle, first, last);
        if (array[middle] < search)
            first = middle + 1;
        else if (array[middle] == search)
        {
            printf(" %d found at location %d \n", search, middle + 1);
            break;
        }
        else
            last = middle - 1;
        middle = (first + last) / 2;
    }
    if (first >= last)
        printf("Not found! %d isn't present in the list.\n", search);
    return 0;
}