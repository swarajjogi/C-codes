/*#include <stdio.h>
#include <stdlib.h>
#define n6

int a[6][6] = {
    {0, 1, 1, 0, 0, 0},
    {1, 0, 0, 1, 0, 0},
    {1, 0, 0, 0, 1, 0},
    {0, 1, 0, 0, 0, 1},
    {0, 0, 1, 0, 0, 1},
    {0, 0, 0, 1, 1, 0}};
int front = rear = -1;
int q[n];
int visit[n];
void enqueue(int);
int dequeue() void bfs();

void main()
{
    int i, j, s;
    clrsr();
    printf("\n adjecent matrix is: \n");
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            printf("%d", a[i][j]);
        }
    }
    printf("\n");
}
}

*/

#include <stdio.h>
#include <stdlib.h>
#define N 6
int front = -1;
int rear = -1;
int Q[N];
int visit[N];
void enqueue(int);
int dequeue();
void bfs(int);
int A[N][N] = {
    {0, 1, 1, 0, 0, 0},
    {1, 0, 0, 1, 0, 0},
    {1, 0, 0, 0, 1, 0},
    {0, 1, 0, 0, 1, 0},
    {0, 0, 1, 0, 0, 1},
    {0, 0, 0, 1, 1, 0}};
void bfs(int s)
{
    int i, var;
    enqueue(s);
    visit[s] = 1;
    var = dequeue(s);
    if (var != -1)
    {
        printf("%d ", var);
        visit[var] = 1;
    }
    while (var != -1)
    {
        for (i = 0; i < N - 1; i++)
        {
            if (A[var][i] == 1 && visit[i] == 0)
            {
                enqueue(i);
            }
        }
        var = dequeue();
        if (var != -1)
        {
            if (visit[var] == 0)
            {
                printf("% d", var);
                visit[var] = 1;
            }
        }
    }
}
void enqueue(int s)
{
    if (rear == (N - 1))
    {
    }
    else
    {
        rear++;
        Q[rear] = s;
        if (front == -1)
            front = 0;
    }
}
int dequeue()
{
    int element = -1;
    if (front == -1)
        printf("\nQueue is Empty.");
    else
    {
        element = Q[front];
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else if (front == (N - 1))
            front = 0;
        else
            front++;
    }
    return element;
}
void main()
{
    int i, j, s;
    printf("\n Adjacency Matrix is: \n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("% d", A[i][j]);
        }
        printf("\n");
    }
    printf("Enter source Node:");
    scanf("%d", &s);
    enqueue(s);
    bfs(s);
}