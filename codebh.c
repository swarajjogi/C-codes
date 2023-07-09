#include<stdio.h>

int main()
{
    int a,b,c,p;
    float x,y,z,q;
    scanf("%d%d",&a,&b);
    scanf("%f%f",&x,&y);
    c=a+b;
    z=x+y;
    p=a-b;
    q=x-y;
    printf("%d %d\n",c,p);
	printf("%.1f %.1f",z,q);
    return 0;
}