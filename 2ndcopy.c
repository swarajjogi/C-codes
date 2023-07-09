#include <stdio.h>
#include <conio.h>
void rect(int, int, int, int);
void hline(int, int, int);
void vline(int, int, int);
int main()
{
    int x1, y1, x2, y2;
    clrscr();
    printf("Enter the first point:\n");
    scanf("%d%d", &x1, &y1);
    printf("Enter the second point:\n");
    scanf("%d%d", &x2, &y2);
    rect(x1, y1, x2, y2);
    return 0;
}
void rect(int x1, int y1, int x2, int y2)
{ 
    gotoxy(x2, y1);
    cprintf("%c", 191);
    gotoxy(x1, y2);
    cprintf("%c", 192);
    gotoxy(x2, y2);
    cprintf("%c", 217);
    gotoxy(x1, y1);
    cprintf("%c", 218);
    hline(x1 + 1, x2 - 1, y1);
    hline(x1 + 1, x2 - 1, y2);
    vline(y1 + 1, y2 - 1, x1);
    vline(y1 + 1, y2 - 1, x2);
}
void hline(int x1, int x2, int y)
{
    int i;
    for (i = x1; i <= x2; i++)
    {
        gotoxy(i, y);
        cprintf("%c", 196);
    }
}
void vline(int y1, int y2, int x)
{
    int i;
    for (i = y1; i <= y2; i++)
    {
        gotoxy(x, i);
        cprintf("%c", 179);
    }
}