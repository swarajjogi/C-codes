#include <stdio.h>
void print(int a[], int n)
{
    int i;
    for(i=0; i<n; i++)
{ 
    printf(" %d ",a[i]);
 }
}
void bubble(int a[], int n)
{
    int i, j, temp; 
    for(i=0; i<n; i++)
    { for(j=i+1; j<n; j++)
    { if(a[j] < a[i])
    { temp = a[i]; a[i] = a[j]; a[j] = temp;
    } } } }
    int main()
    {
        int a[10] = { 34, 54, 6, 23, 45, 75, 59, 15, 95, 23};
        int n = sizeof(a)/sizeof(a[0]);
        printf("\n Before sorting : \n ");
        print(a,n);
        bubble(a,n);
        printf("\n After sorting : \n ");
        print(a,n);
return 0;
}