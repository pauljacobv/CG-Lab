#include<conio.h>
#include<stdio.h>
#include<graphics.h>
void main()
{
	int gd=DETECT,gm;
	int i,r,x,y,xc,yc;
	float d;
	clrscr();
	initgraph(&gd,&gm,"C:\\TC\\BGI");

	printf("Enter Center of circle\t");

	scanf("%d",&xc);
	scanf("%d",&yc);
	printf("Enter Radius\t");
	scanf("%d",&r);
	d=1.25-r;
	x=0;
	y=r;
	do
	{
		if(d<0)
		{

			x=x+1;
			d=d+2*x+1;
		}
		else
		{

			x=x+1;
			y=y-1;
			d=d+2*x-2*y+10;
		}
		putpixel(xc+x,yc+y,WHITE);
		putpixel(xc-y,yc-x,WHITE);
		putpixel(xc+y,yc-x,WHITE);
		putpixel(xc-y,yc+x,WHITE);
		putpixel(xc+y,yc+x,WHITE);
		putpixel(xc-x,yc-y,WHITE);
		putpixel(xc+x,yc-y,WHITE);
		putpixel(xc-x,yc+y,WHITE);
	}
	while(x<y);
	getch();
}