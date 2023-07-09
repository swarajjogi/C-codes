#include <stdio.h>

int main()
{
    float pi = 3.17;
    float a, c;
    printf("enter raditus ");
    scanf("%f", &a);
    c = a * a * pi++;

    printf("the area of cirle is  %f", c);
    return 0;
}