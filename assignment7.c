//Polygon filling algorithms
//assignment 7
#include <graphics.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <dos.h>

void main()
{
    printf("IT_SY_21_SWARAJ JOGI")
    int gdriver = DETECT, gmode, errorcode;
    initgraph(&gdriver, &gmode, "");
    cleardevice();
    rectangle(200, 200, 400, 350);
    outtextxy(180,100,"NAME:Swaraj jogi ROLL.NO: 21");
    getch();
    for (int i = 201; i < 350; i++)
    {
        delay(1);
        for (int j = 201; j < 400; j++)
        {
            delay(1);
            putpixel(j, i, RED);
        }
    }
    for (i = 0; i < 200; i++)
    {
        delay(10);
        for (int j = 0; j < 640; j++)
        {
            putpixel(j, i, BLUE);
            //delay(1);
        }
    }
    for (; i <= 350; i++)
    {
        delay(10);
        for (int j = 0; j < 200; j++)
        {
            putpixel(j, i, BLUE);
            //delay(1);
        }
        for (j = 401; j < 640; j++)
        {
            putpixel(j, i, BLUE);
            //delay(1);
        }
    }
    for (; i < 480; i++)
    {
        delay(10);
        for (int j = 0; j < 640; j++)
        {
            putpixel(j, i, BLUE);
            //delay(1);
        }
    }
    outtextxy(180,100,"NAME:Swaraj jogi ROLL.NO: 21");
    getch();
}