#include <stdio.h>
#include <stdlib.h>

int can[7] = {0, 0, 0, 0, 0, 0, 0};
int a[7][7] =
    {
        {0, 1, 1, 1, 0, 0, 0},
        {1, 0, 1, 0, 0, 0, 0},
        {1, 1, 0, 1, 1, 0, 0},
        {1, 0, 1, 0, 1, 0, 0},
        {0, 0, 1, 1, 0, 1, 1},
        {0, 0, 0, 0, 1, 0, 0},
        {0, 0, 0, 0, 1, 0, 0}};

void dfs(int i)
{
    printf("%d", i);
    can[i] = 1;
    for (int j = 0; j < 7; j++)
    {
        if (a[i][j] == 1 && !can[j])
        {
            dfs(j);
        }
    }
}
int main()
{
    dfs(0);
    return 0;
}

//dfs