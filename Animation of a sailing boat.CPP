#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include<dos.h>
void ice(int x)
{
int i,j,n;
n=getmaxx()-10;
//setlinestyle(DASHED_LINE,1,1);
while(x<=380)
{

j=0;

while(j<=50)
	   {
	   cleardevice();
	  // printf("%d",x);
	  setcolor(YELLOW);
   circle(500,50,25);
    setcolor(BLUE);
    line(n,180,n,300);
    line(n,180,n-20,230);
    line(n-20,230,n-40,240);
    line(n-40,240,n-70,300);
    setcolor(CYAN);
    line(0, 300, getmaxx(), 300);
   setcolor(BROWN);
   line(100+x,250,125+x,300);
   line(200+x,250,175+x,300);
   line(200+x,250,100+x,250);
   setcolor(13);
   circle(150+x,200,10);
//setlinestyle(DASHED_LINE,1,1);

   line(150+x,210,150+x,250);
  line(150+x,220,160+x,215+j);
  line(150+x,220,160+x,210+j);
  setcolor(BROWN);
  line(130+x,170,200+x,310+j);

x++;
//  n++;
  j+=3;
   delay(20);

   }

 }
int y=0;
 while(y<=getmaxy())
 {
	 cleardevice();
    n=getmaxx()-10;
    setcolor(YELLOW);
    circle(500,50,25);
    setcolor(BLUE);
    line(n,180,n,300);

    line(n,180,n-20,230);
    line(n-20,230,n-40,240);
    line(n-40,240,n-70,300);
    setcolor(CYAN);
    line(0, 300, getmaxx(), 300);
    setcolor(BROWN);
   line(100+x,250+y,125+x,300+y);
   line(200+x,250+y,175+x,300+y);
   line(200+x,250+y,100+x,250+y);
   setcolor(13);
   circle(150+x,200+y,10);
//setlinestyle(DASHED_LINE,1,1);
   line(150+x,210+y,150+x,250+y);
  line(150+x,220+y,160+x,215+y);
  line(150+x,220+y,160+x,210+y);
  setcolor(BROWN);
  line(130+x,170+y,200+x,310+y);
      y++;
      delay(20);
      }
 setlinestyle(SOLID_LINE,1,1);

}

void wind(int x)
{
int i,j;
//setlinestyle(DASHED_LINE,1,1);
while(x<=275)
{
int n=0;
j=0;
while(j<=50)
	   {
	   cleardevice();
	   setcolor(CYAN);
    line(0, 300, getmaxx(), 300);
    setcolor(BROWN);
   line(100+x,250,125+x,300);
   line(200+x,250,175+x,300);
   line(200+x,250,100+x,250);
   setcolor(13);
   circle(150+x,200,10);
//setlinestyle(DASHED_LINE,1,1);
 for(int l=0;l<25;l++)
 {
int a=random(getmaxx());
int  b=random(285);
int lt=35;
		setcolor(BLUE);
 line(a,b,a-lt,b);
 }
  setlinestyle(SOLID_LINE,1,1);
  setcolor(GREEN);
  arc(150+x-n,190+n,45,225,50);
arc(180+x-n,215+n,90,190,65);
 // line(100+x-n,120+n,200+x,190);
 setcolor(BROWN);
   line(130+x-n,170+n,150+x,220);
   setcolor(13);
   line(150+x,210,150+x,250);
  line(150+x,220,160+x,215+j);
  line(150+x,220,160+x,210+j);
  setcolor(BROWN);
  line(130+x,170,200+x,310+j);
x++;
  n++;
  j+=3;
   delay(20);

   }

 }

 setlinestyle(SOLID_LINE,1,1);
 ice(x);
}
void rain(int x)
{
int i,j;
//setlinestyle(DASHED_LINE,1,1);
while(x<=150)
{
j=0;
while(j<=50)
	   {
	   cleardevice();
	   setcolor(CYAN);
    line(0, 300, getmaxx(), 300);
    setcolor(BROWN);
   line(100+x,250,125+x,300);
   line(200+x,250,175+x,300);
   line(200+x,250,100+x,250);
   setcolor(13);
   circle(150+x,200,10);
setlinestyle(DASHED_LINE,1,1);
 for(int l=0;l<200;l++)
 {
int a=random(getmaxx());
int  b=random(285);
int lt=15;
if((a>100+x)&&(a<200+x)&&(b>140))
{
}
else
{
  setcolor(BLUE);
 line(a,b,a-lt,b+lt);
 }
 }
  setlinestyle(SOLID_LINE,1,1);
  setcolor(GREEN);
  arc(165+x,190,0,180,50);
  arc(165+x,245,45,130,75);
  setcolor(BROWN);
  line(165+x,168,150+x,240);
  setcolor(13);
   line(150+x,210,150+x,250);
  line(150+x,220,160+x,215+j);
  line(150+x,220,160+x,210+j);
  setcolor(BROWN);
  line(130+x,170,200+x,310+j);
x++;

  j+=3;
   delay(20);

   }

 }

 setlinestyle(SOLID_LINE,1,1);
wind(x);
}

int main(void)
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   int xmax, ymax;

   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "c:\\TurboC3\\BGI");

   /* read result of initialization */
   errorcode = graphresult();
   /* an error occurred */
   if (errorcode != grOk)
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1);
   }

   setcolor(getmaxcolor());
   xmax = getmaxx();
   ymax = getmaxy();



   int x=0,j;
   while(x<=50)
   {
	   j=0;
	   while(j<=50)
	   {
	   cleardevice();
	   setcolor(CYAN);
    line(0, 300, xmax, 300);
    setcolor(BROWN);
   line(100+x,250,125+x,300);
   line(200+x,250,175+x,300);
   line(200+x,250,100+x,250);
   setcolor(YELLOW);
   circle(500,50,25);
   setcolor(13);
   circle(150+x,200,10);
   line(150+x,210,150+x,250);
  line(150+x,220,160+x,215+j);
  line(150+x,220,160+x,210+j);
  setcolor(BROWN);
  line(130+x,170,200+x,310+j);
   x++;
 //  if(x==100)
  // rain(x);

  j+=3;
delay(20);

   }
  }
rain(x);
   /* clean up */
   getch();
   closegraph();
   return 0;
}
