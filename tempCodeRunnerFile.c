#include <stdio.h>
#include <stdlib.h>

void swarajmade(int count);
int main()
{
    swarajmade(2);
    return 0;
}
void swarajmade(int count)
{
    if (count == 0)
    {
        return;
    }
    printf("Hello\n");
    swarajmade(count - 1);
}