#include <stdio.h>
#include <string.h>
int main()
{
    char str[20];
    int len, i;
    printf("Enter a string: ");
    scanf("%s", str);
    len = strlen(str);
    for (i= len-1; i>=0; i--)
    {
        printf("%c", str[i]);

    }
    return 0;

}
