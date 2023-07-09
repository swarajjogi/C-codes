#include <stdio.h>
#include <stdlib.h>
int abc(char *);
int main()
{
    char s[10] = {"INDIA"};
    printf("\n", abc(s));
    return 0;
}
int abc(char *s)
{
    if (*s)
    {
        printf("\n%c", *s);
        abc(s + 1);
    }
}
