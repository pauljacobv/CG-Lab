#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include<dos.h>


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
    int level=0,flag=0,t1=500,t2=300;
   int well[8]={350-85,250,350-85,400,350+85,400,350+85,250};
   while(!kbhit())
   {

     int bucketwater[8]={310,470-level,370,470-level,370,getmaxy(),310,getmaxy()};

   int bucket[10]={310,430,370,430,370,getmaxy(),310,getmaxy(),310,430};
   drawpoly(5,bucket);
    int y=0,x=0,y1=0,y2=0,s=0;
    while(level<50)
   {



   cleardevice();
   circle(500,200,30); //head
   line(500,230,500,400);  //body
   line(500,400,450,450); //left leg
   line(500,400,550,450);  //right leg

  /* int s=0;
   while(s<25)
   {
   line(500,250,450,220+s);
   line(500,250,450,210+s);
   setcolor(BLACK);
    line(500,250,450,220+s);
   line(500,250,450,210+s);
 setcolor(WHITE);
   s=s++;
   } */
   if(flag!=0)
    {
    setfillstyle(1,BLUE);
    fillpoly(4,bucketwater);
    }
   drawpoly(5,bucket);

   if(y2<70)
   {
 ellipse(340,220+y2,0,360,10,5);
   line(340,220,340,225);
   line(330,220+y2,330,245+y2);
   line(350,220+y2,350,245+y2);
   line(330,245+y2,350,245+y2);
   line(358,170,t1-x,t2-y);
    line(500,270,450,240);
   line(500,270,450,230);

   y2++;
  }

  if((y2<90)&&(y2>20))
  y2++;


  // line(350-85,250,350-85,400);   //walls
  // line(350+85,250,350+85,400);    //wall
  // arc(350,235,242,298,185);  //base

  setfillstyle(1,BROWN);
  fillpoly(4,well);
  setfillstyle(1,LIGHTGRAY);
  fillellipse(350,250,85,20); //top
   line(350-85,250,350-85,150);//structure
   line(350+85,250,350+85,150);//to hold
   line(350-85,150,350+85,150);//pulley
   if(x%2==0)
   {
   line(350,165,350,185);
   line(340,175,360,175);
   }
   else
   {
   line(350+5,165+2,350-5,185-2);
   line(350-5,165+2,350+5,185-2);
   }

   line(350,150,350,165);
   circle(350,175,10); //pulley
  if(y>90)
   {
   line(360-2,165+5,400+x,200+y);
  // t1=x;
  // t2=y;
    }
  //  int s=10;
   if((y>=50)&&(y<90))
   {
   ellipse(340,240-y1,0,360,10,5);
   line(340,175,340,240-y1);
   line(330,240-y1,330,265-y1);
   line(350,240-y1,350,265-y1);
   line(330,265-y1,350,265-y1);
    line(360-2,165+5,400+x,200+y);
   if(s<20)
   {
   line(500,270,450,240+s);
   line(500,270,450,230+s);
   s++;
   }
 //  line(450,250,400,220+s);
   //line(450,250,400,210+s);

    t1=400+x;
    t2=200+y;

  // floodfill(335,280,BLUE);
   y1++;
   }

   else if(y>=90)
   {
    int water[8]={330,270-y1,330,470-y1,350,470-y1,350,270-y1};

   {
   line(500,250,350,220);
   line(500,250,350,210);

   }
  ellipse(340,270-y1,0,360,10,10);
   line(340,175,340,270-y1-10);
  // line(330,270-y1,330,295-y1);
  // line(350,270-y1,350,295-y1);
  // line(330,295-y1,350,295-y1);
    setfillstyle(1,BLUE);
    fillpoly(4,water);
   // delay(15);
    fillpoly(4,bucketwater);
    level++;
    if(level%10==0)
    { flag=1;

     break;
    }


   }
   else
   {
   line(340,175,340,250);
   }
   y++;
   x++;
  // s+=3;


   delay(20);


   }
  int overflow[8]={370,430,370,getmaxy(),380,getmaxy(),380,430};
  setfillstyle(1,LIGHTBLUE);
  fillpoly(4,overflow);
   }
   /* clean up */
   getch();
   closegraph();
   return 0;
}







