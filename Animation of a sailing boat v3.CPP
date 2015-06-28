#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
  int gd=DETECT,gm,v=10,j,i=1,x=0,w=50,y=300,ang=0;
  int a[10]={0,381,650,381,650,450,0,450,0,381};
  initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
  setcolor(CYAN);
  drawpoly(5,a);
  setfillstyle(SOLID_FILL,CYAN);
  floodfill(40,430,CYAN);
  setbkcolor(WHITE);
  while(!kbhit())
  {
	 v+=3;
	w+=2;
	if(w==60)
		w=-50;
	int box[10]={10+x,290,70+x,290,70+x,380,10+x,380,10+x,290};
	int row1[10]={60+x,335,57+x,340,50+x,380,45+x,378,60+x,335};
	int row2[10]={60+x,335,57+x,340,80+x,380,85+x,378,60+x,335};
	int row3[10]={60+x,335,57+x,340,30+x,380,35+x,378,60+x,335};
	int boat[10]={0+x,350,100+x,350,80+x,380,20+x,380,0+x,350};
	int man[20]={45+x,350,45+x,320,55+x,320,55+x,330,60+x,335,57+x,340,55+x,335,55+x,350,45+x,350};
	int bboz[10]={0,0,700,0,700,380,0,380,0,0};
	setcolor(WHITE);
	fillpoly(5,bboz);
	setcolor(CYAN);
	for(j=0;j<100;j++)
		line(j*10,0,j*10-w,380);

	setcolor(WHITE);
	for(j=v%40;j<360;j+=40)
	{
		int blck[10]={0,(10+j)%360,700,(10+j)%360,700,(20+j)%360,0,(20+j)%360,0,10+j};
		fillpoly(5,blck);
	}
	fillpoly(5,box);
	setcolor(BROWN);
	setfillstyle(SOLID_FILL,BROWN);
	fillpoly(5,boat);
	setcolor(RED);
	circle(52+x,313,6);
	drawpoly(10,man);
	setfillstyle(SOLID_FILL,YELLOW);
	pieslice(70+x-30,290,0,180,30);
	line(70+x-30,350,70+x-30,290);
	if(i%3==0)
		drawpoly(5,row1);
	else if(i%3==1)
		drawpoly(5,row2);
	else
		drawpoly(5,row3);
	setcolor(WHITE);
	setfillstyle(SOLID_FILL,BLACK);
	delay(100);
	fillpoly(5,boat);
	drawpoly(10,man);
	pieslice(40+x,290,0,180,30);
	line(40+x,350,40+x,290);
	if(i%3==0)
		drawpoly(5,row1);
	else if(i%3==1)
		drawpoly(5,row2);
	else
		drawpoly(5,row3);
	circle(52+x,313,6);
	x+=7;
	i++;
	setcolor(CYAN);
  }
  getch();
  closegraph();
}