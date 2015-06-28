#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <dos.h>

int main(void)
{
    /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   int midx, midy;
   int stangle = 200, endangle =340 ;
   int radius = 50;

   /* initialize graphics and local
   variables */
   initgraph(&gdriver, &gmode, "c:\\TurboC3\\BGI");

   /* read result of initialization */
   errorcode = graphresult();
   /* an error occurred */
   if (errorcode != grOk)
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();

      exit(1);    /* terminate with an error code */
   }

   midx = getmaxx() / 2;
   midy = getmaxy() / 2;
   setcolor(getmaxcolor());
   midx=midx-250;
   int i=0;
   int j,a,b,lt;
   /* draw arc */
   while(i<=200)
   {
   j=0;
   while(j<=50)
   {
   cleardevice();
   arc(midx+i, midy, stangle, endangle, radius);
   line(22+i,255,117+i,255);
   line(0,285,getmaxx(),285);
   circle(40+i,210,10);
   circle(500,40,20);
   line(40+i,220,40+i,255);
   line(40+i,230,50+i,225+j);
   line(40+i,235,49+i,230+j);
   line(65+i,200,20+i,285+j);
   i++;
   j+=3;
   delay(20);
   }
   }
   while(i<=getmaxx())
   {
     j=0;
     while(j<=50)
     {
       cleardevice();
       arc(midx+i, midy, stangle, endangle, radius);
       line(22+i,255,117+i,255);
       line(0,285,getmaxx(),285);
       circle(40+i,210,10);
       setlinestyle(DASHED_LINE,1,1);
       for(int l=0;l<=200;l++)
       {
	a= random(getmaxx());
	b= random(285);
	lt= 15;
       line(a,b,a-lt,b+lt);
       }
       arc(50+i,210,0,180,50);
       setlinestyle(SOLID_LINE,1,1);
       line(40+i,220,40+i,255);
       line(40+i,230,50+i,225+j);
       line(40+i,235,49+i,230+j);
       line(65+i,200,20+i,285+j);
       i++;
       j+=3;
   delay(70);
   }
  }
   /* clean up */
   getch();
   closegraph();
   return 0;
}
