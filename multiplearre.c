// #include <stdio.h>

//     int
//     main()
// {
//     int i = 35;
//     int *j = &i;
//     printf("\n");
//     printf(" The value of i is %d\n ", i);
//     printf(" The value of i is %d\n ", j);
//     printf("the value of j is %d\t", *j);
//     printf("\n");
//     return 0;
// }

#include <stdio.h>

int main()
{
    int a = 600;
    int *ptr;
    ptr = &a;
    printf("The valude of a is = %d\n", a);
    printf("The value of prt is = %d\n", ptr);
    printf("The value of prt is = %d\n", *ptr);
    return 0;
}
