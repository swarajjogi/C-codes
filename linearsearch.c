//linear search program
//may be sorted or unsorted
#include <stdio.h>
int main()
{
    int array[100], first, last, search;
    printf("Enter number of elements in array\n");
    scanf("%d", &last);
    //============================================
    printf("Enter %d integer(s)\n", last);
    for (first = 0; first < last; first++)
        scanf("%d", &array[first]);
    //===========================================
    printf("Enter a number to search\n");
    scanf("%d", &search);
    //============================================
    for (first = 0; first < last; first++)
    {
        if (array[first] == search) /* If required element is found */
        {
            printf("%d is present at location %d.\n", search, first + 1);
            break;
        }
    }
    if (first == last)
        printf("%d isn't present in the array.\n", search);
    return 0;
}
