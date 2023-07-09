//2-D TRANSFORMATIONS

#include<math.h>
#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int x[3]={30,80,55};
int y[3]={20,20,60};

void get();
void drawline(int x[],int y[]);

void main()
{
	printf("IT_SY_21_SWARAJ JOGI");
    int gm=0,gd=0,ch,ch1;
	void translation();
	void rorigin();
	void rarbitary();
	void scaling();
	clrscr();
	initgraph(&gm,&gd," ");
	get();
	getch();
	do
	{
		cleardevice();
		gotoxy(0,0);
		printf("\n1:Translation\n2:Rotation\n3:Scaling\nEnter choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:translation();
				break;
			case 2:printf("1:Rotation @ Origin\n2:Rotation @ Arbitary Point\nEnter choice:");
				scanf("%d",&ch1);
				switch(ch1)
				{
					case 1:rorigin();
						break;
					case 2:rarbitary();
						break;
				}
				break;
			case 3:scaling();
				break;
			case 4:printf("Program Ends");
				break;
			default:printf("Wrong choice");
				break;
		}
	}while(ch!=4);
	getch();
}

void translation(void)		//TRANSLATION
{
	int tx,ty,x1[3],y1[3],j;
	printf("Enter values of tx & ty:");
	scanf("%d %d",&tx,&ty);
	get();
	for(j=0;j<3;j++)
	{
		x1[j]=x[j]+tx;
		y1[j]=y[j]+ty;
	}
	setcolor(3);
	drawline(x1,y1);
	printf("TRANSFORMED OBJECT");
	getch();
}

void rorigin(void)                //ROTATION @ ORIGIN
{
	int x1[3],y1[3],theta1,j;
	double i,theta,s,c;
	printf("Enter value of theta:");
	scanf("%d",&theta1);
	get();
	setcolor(4);
	theta=3.142*theta1/180.0;
	for(i=0.0;i<=theta;i=i+0.01)
	{
		s=sin(i);
		c=cos(i);
		for(j=0;j<3;j++)
		{
			x1[j]=x[j]*c-y[j]*s;
			y1[j]=x[j]*s+y[j]*c;
		}
		drawline(x1,y1);
		delay(50);
	}
	cleardevice();
	get();
	setcolor(8);
	drawline(x1,y1);
	printf("TRANSFORMED OBJECT");
	getch();
}

void rarbitary(void)		//ROTATION @ ARBITRARY POINT
{
	int xr,yr,x1[3],y1[3],theta1,j;
	double theta,s,c,i;
	printf("Enter values of xr,yr & theta:");
	scanf("%d %d %d",&xr,&yr,&theta1);
	get();
	theta=3.142*theta1/180.0;
	setcolor(6);
	for(i=0.0;i<theta;i+=0.01)
	{
		s=sin(i);
		c=cos(i);
		for(j=0;j<3;j++)
		{
			x1[j]=xr+c*(x[j]-xr)-s*(y[j]-yr);
			y1[j]=yr+s*(x[j]-xr)+c*(y[j]-yr);
		}
		drawline(x1,y1);
		delay(50);
	}
	cleardevice();
	get();
	setcolor(3);
	drawline(x1,y1);
	printf("TRANSFORMED OBJECT");
	getch();
}

void scaling(void)		//SCALING
{
	int x1[3],y1[3],j;
	float sx,sy;
	printf("Enter values of sx & sy:");
	scanf("%f %f",&sx,&sy);
	get();
	for(j=0;j<3;j++)
	{
		x1[j]=x[j]*sx;
		y1[j]=y[j]*sy;
	}
	setcolor(9);
	drawline(x1,y1);
	printf("TRANSFORMED OBJECT");
	getch();
}

void get(void)		//CLEAR SCREEN & DISPLAY ORIGINAL OBJECT.
{
	clrscr();
	cleardevice();
	setcolor(7);

	line(320,0,320,480);
	line(0,240,640,240);
	setcolor(5);
	drawline(x,y);
	gotoxy(42,15);
	printf("ORIGINAL OBJECT");
	gotoxy(0,0);
}

void drawline(int x[], int y[])
{
	int X[3], Y[3];
	int i;

	for(i=0;i<3;i++)
	{
		X[i]=x[i]+320;
		Y[i]=240-y[i];
	}

	for(i=0;i<3;i++)
	{
		line(X[0],Y[0],X[1],Y[1]);
		line(X[1],Y[1],X[2],Y[2]);
		line(X[0],Y[0],X[2],Y[2]);
	}
    outtextxy(180,100,"NAME:Swaraj jogi ROLL.NO: 21");

	gotoxy(X[1]/8-2, Y[1]/16-2);
}