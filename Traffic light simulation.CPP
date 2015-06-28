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
   initgraph(&gdriver, &gmode, "c:\\turboC3\\BGI");

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
    int flag;
    int x1=0,x2=0,y1=0,y2=0;
 while(!kbhit())
 {
 cleardevice();
 int car1[10]={50+x1,200,70+x1,200,70+x1,210,50+x1,210,50+x1,200};
    int car2[10]={xmax-50-x2,250,xmax-70-x2,250,xmax-70-x2,260,xmax-50-x2,260,xmax-50-x2,250};
   int car3[10]={300,50+y1,300,70+y1,310,70+y1,310,50+y1,300,50+y1};
   int car4[10]={350,ymax-50-y2,350,ymax-70-y2,360,ymax-70-y2,360,ymax-50-y2,350,ymax-50-y2}	;
 //  signal1
   rectangle(xmax/2-70,100,xmax/2-50,150);

     //signal2
  rectangle(xmax-175,ymax/2-70,xmax-225,ymax/2-50);//signal1
     //signal3
   rectangle(xmax/2+70,ymax-150,xmax/2+50,ymax-100);
   //  signal4
  rectangle(xmax/2-100,ymax/2+70,xmax/2-150,ymax/2+50);//signal1
    if(x1<500)
 {
 setfillstyle(1,BLUE);
 fillpoly(5,car1);
 //sig1
 setfillstyle(1,GREEN);
   fillellipse(xmax-190,ymax/2-60,5,5);  //g2
    if(x1>300)
   {
   setfillstyle(1,YELLOW);
   fillellipse(xmax/2+60,ymax-130,5,5);//r3
   setfillstyle(1,BLACK);
   fillellipse(xmax/2+60,ymax-110,5,5);  //g3
   }
    else
    { setfillstyle(1,BLACK);
       fillellipse(xmax/2+60,ymax-130,5,5);//r3

   setfillstyle(1,RED);
     fillellipse(xmax/2+60,ymax-110,5,5);  //g3
    }



  setfillstyle(1,RED);
   fillellipse(xmax/2-60,110,5,5);  //g1
   fillellipse(xmax/2-140,ymax/2+60,5,5); //g4

   setfillstyle(1,BLACK);
     fillellipse(xmax/2-120,ymax/2+60,5,5); //r4
     fillellipse(xmax/2-60,130,5,5);//r1

     fillellipse(xmax-210,ymax/2-60,5,5); //r2
 x1++; x1++;
 }
 else if(y1<500)
 {
 setfillstyle(1,BLUE);
 fillpoly(5,car3);
 //sig2
  setfillstyle(1,GREEN);
  fillellipse(xmax/2+60,ymax-110,5,5);  //g3

   if(y1>300)
   {
   setfillstyle(1,YELLOW);
   fillellipse(xmax/2-120,ymax/2+60,5,5); //r4
    setfillstyle(1,BLACK);
   fillellipse(xmax/2-140,ymax/2+60,5,5); //g4

    }
    else
    { setfillstyle(1,BLACK);
   fillellipse(xmax/2-120,ymax/2+60,5,5); //r4
   setfillstyle(1,RED);
   fillellipse(xmax/2-140,ymax/2+60,5,5); //g4
    }

  setfillstyle(1,RED);
   fillellipse(xmax-190,ymax/2-60,5,5);  //g2
   fillellipse(xmax/2-60,110,5,5);  //g1


   setfillstyle(1,BLACK);
     fillellipse(xmax/2-60,130,5,5);//r1
     fillellipse(xmax/2+60,ymax-130,5,5);//r3
     fillellipse(xmax-210,ymax/2-60,5,5); //r2

 y1++;  y1++;
 }
 else if(x2<500)
 {
 setfillstyle(1,BLUE);
 fillpoly(5,car2);
 //sig3
  setfillstyle(1,GREEN);
  fillellipse(xmax/2-140,ymax/2+60,5,5); //g4


     if(x2>300)
     {
   setfillstyle(1,YELLOW);
   fillellipse(xmax/2-60,130,5,5);//r1
       setfillstyle(1,BLACK);
       fillellipse(xmax/2-60,110,5,5);  //g1

      }
       else
       {
       setfillstyle(1,BLACK);
	fillellipse(xmax/2-60,130,5,5);//r1
       setfillstyle(1,RED);
       fillellipse(xmax/2-60,110,5,5);  //g1
       }
  setfillstyle(1,RED);
   fillellipse(xmax-190,ymax/2-60,5,5);  //g2

     fillellipse(xmax/2+60,ymax-110,5,5);  //g3

   setfillstyle(1,BLACK);
      fillellipse(xmax/2-120,ymax/2+60,5,5); //r4

     fillellipse(xmax/2+60,ymax-130,5,5);//r3
     fillellipse(xmax-210,ymax/2-60,5,5); //r2

 x2++;   x2++;
 }
 else if(y2<500)
 {
 setfillstyle(1,BLUE);
 fillpoly(5,car4);
 //sig4
 setfillstyle(1,GREEN);

  fillellipse(xmax/2-60,110,5,5);  //g1

   if(y2>300)
   {
   setfillstyle(1,YELLOW);
   fillellipse(xmax-210,ymax/2-60,5,5); //r2
    setfillstyle(1,BLACK);
    fillellipse(xmax-190,ymax/2-60,5,5);  //g2

   }
    else
    {
    setfillstyle(1,BLACK);
     fillellipse(xmax-210,ymax/2-60,5,5); //r2
    setfillstyle(1,RED);
    fillellipse(xmax-190,ymax/2-60,5,5);  //g2
    }

  setfillstyle(1,RED);

      fillellipse(xmax/2-140,ymax/2+60,5,5); //g4
     fillellipse(xmax/2+60,ymax-110,5,5);  //g3

   setfillstyle(1,BLACK);
      fillellipse(xmax/2-120,ymax/2+60,5,5); //r4
	fillellipse(xmax/2-60,130,5,5);//r1
     fillellipse(xmax/2+60,ymax-130,5,5);//r3


 y2++;y2++;
 }
 if(y2==500) flag=1;
 if(flag==1){x1=0;x2=0;y1=0;y2=0;flag=0;}
line(xmax/2-50,0,xmax/2-50,ymax);
 line(xmax/2+50,0,xmax/2+50,ymax);

 line(0,ymax/2-50,xmax,ymax/2-50);
 line(0,ymax/2+50,xmax,ymax/2+50);
 delay(15);
 }

   /* clean up */
   getch();
   closegraph();
   return 0;
}








