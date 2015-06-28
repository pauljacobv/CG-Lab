#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include<dos.h>
int main(void)
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;

   /* initialize graphics mode */
   initgraph(&gdriver, &gmode, "C:\\turboC3\\BGI");

   int x1,y1,x2,y2,xc,yc,maxx,maxy,hx,hy,i,poly[50];

   /* read result of initialization */
   errorcode = graphresult();

   if (errorcode != grOk)  /* an error occurred */
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1);             /* return with error code */
   }

   /* initialising */
   x1=50;
   y1=390;
   x2=90;
   y2=390;
   setcolor(WHITE);
   maxx=getmaxx();


   while(!kbhit())
   {

    //man
  /* circle(100,300,10);
   line(100,310,100,350);
   line(100,325,110,315);
  */

     //mountain
   line(0,400,200,400);
   line(200,400,290,310);
   line(290,310,380,310);
   line(380,310,480,400);
   line(480,400,maxx,400);

  if(((x2+10)>=200)&&(x2+10<290))
  {
   if((x1+10)>=200)
    circle(x1,y1--,10);
   else
    circle(x1,y1,10);

   circle(x2,y2--,10);
   line(x1,y1-10,x2,y2-10); //top
   line(x1,y1,x2,y2);  //bottom
   line(x2,y2-10,x2,y2-20);
  }
  else if( (x2+10)<200 )
  {
   circle(x1,y1,10);
   circle(x2,y2,10);
   line(x1,y1-10,x2,y1-10); //top
   line(x1,y1,x2,y2);  //bottom
   line(x2,y2-10,x2,y2-20);

  }
  else if(((x2+10)>290)&&((x2+10)<400))
  {
  if((x1+10)<290)
  circle(x1,y1--,10);
  else
   circle(x1,y1,10);

   circle(x2,y2,10);
   line(x1,y1-10,x2,y2-10); //top
   line(x1,y1,x2,y2);  //bottom
   line(x2,y2-10,x2,y2-20);

  }
  else if(((x2+10)>=400)&&((x2+10)<490))
  {
  if((x1+10)<400)
  circle(x1,y1,10);
  else
   circle(x1,y1++,10);

   circle(x2,y2++,10);
   line(x1,y1-10,x2,y2-10); //top
   line(x1,y1,x2,y2);  //bottom
   line(x2,y2-10,x2,y2-20);

  }
   else if((x2+10)>490)
   {
     if((x1+10)<490)
     circle(x1,y1++,10);
     else
     circle(x1,y1,10);
      circle(x2,y2,10);
   line(x1,y1-10,x2,y2-10); //top
   line(x1,y1,x2,y2);  //bottom
   line(x2,y2-10,x2,y2-20);

   }
   x1++;
   x2++;
   delay(10);
   cleardevice();
  }
   /* clean up */
   getch();
   closegraph();
   return 0;
}