#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

void lbres(int x1,int y1,int x2,int y2)
{
	int k,dx,dy,count,p,a,b,x,y,c,q=1;
	dx=abs(x2-x1);
	dy=abs(y2-y1);
	p=2*dy-dx;
	a=2*dy;
	b=2*(dy-dx);
	while(x<c)
	{
		x++;
		if(p<0)
			p=p+a;
		else
		{
			y=y+q;
			p=p+b;
		}
		putpixel(x,y,WHITE);
	}
	if(x1==x2)
	{
		count=abs(y1-y2);
		while(--count>=0)
		{
			putpixel(x,y++,WHITE);
			delay(10);
		}
	}
	else
	for(k=0;k<dx;k++)
	{
		if(x1>x2 && y1>y2)
		{
			x1--;
			if(p<0)
			{
				p=p+(2*dy);
			}
			else
			{
				y1--;
				p=p+q;
			}
			putpixel(x1,y1,WHITE);
		}
		else if(x1<x2 && y1>y2)
		{
			x1++;
			if(p<0)
			{
				p=p+(2*dy);
			}
			else
			{
				y1--;
				p=p+q;
			}
			putpixel(x1,y1,WHITE);
		}
	       else if(x1>=x2 && y1<y2)
	       {
			x1--;
			if(p<0)
			{
				p=p+(2*dy);
			}
			else
			{
				y1++;
				p=p+q;
			}
			putpixel(x1,y1,WHITE);
		}
		else if(x1<x2 && y1<=y2)
		{
			x1++;
			if(p<0)
			{
				p=p+(2*dy);
			}
			else
			{
				y1++;
				p=p+q;
			}
			putpixel(x1,y1,WHITE);
		}
	}

 /*	if(x1>x2)
	{
		x=x2;
		y=y2;
		c=x1;
	}
	else
	{
		x=x1;
		y=y1;
		c=x2;
	}    */


}

void main()
{
	int gd=DETECT,gm,x1,y1,x2,y2;
	initgraph(&gd,&gm,"C:\\TC\\BGI");

	printf("Enter the first end co-ordinates\t");
	scanf("%d%d",&x1,&y1);

	printf("Enter the second end co-ordinates\t");
	scanf("%d%d",&x2,&y2);

	lbres(x1,y1,x2,y2);
	getch();
	closegraph();
	return(0);
}
