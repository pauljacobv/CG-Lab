#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>
#include<stdlib.h>
main()
{
 int gdriver=DETECT,gmode;
 int i,j,k,l,x,x1,x2,y1,y2,x3,y3,x4,y4,x5,y5,x6,y6,x7,y7,x8,y8;
 initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
  x1=115; y1=150; x2=145; y2=110;
  x3=155; y3=150; x4=185; y4=110;
  x5=195; y5=150; x6=225;  y6=110;
  x7=235; y7=150; x8=265;  y8=110;

  j=1;
  i=1;

  while(!(kbhit()))
 {
 i=0;
 //conveyor belt
 circle(90,200,50);
 circle(300,200,50);
 line(80,150,300,150);
 line(80,250,300,250);
 //bins
  rectangle(x1,y1,x2,y2);
  rectangle(x3,y3,x4,y4);
  rectangle(x5,y5,x6,y6);
  rectangle(x7,y7,x8,y8);

  if(x7>=320){
  i=0;
  if(x8<=560 && y7<=300){

  rectangle(x7+i,y7++,x8+i,y8++);
  i=i+8;
  }}
  if(x5>=320){
  i=0;

  if(x6<=560 && y5<=300){
  rectangle(x5+i,y5++,x6+i,y6++);
  i=i+10;
  }}
  if(x3>=320){
  i=0;

   if(x4<=560 && y3<=300){
  rectangle(x3+i,y3++,x4+i,y4++);
  i=i+10;
  }}
   if(x1>=320){
  i=0;
   if(x2<=560 && y1<=300){
  rectangle(x1+i,y1++,x2+i,y2++);
  i=i+10;
  }}
//basket
 rectangle(350,300,560,250);

 setfillstyle(EMPTY_FILL, getmaxcolor());
 pieslice(90,200,45-x,135-x,50);
 pieslice(90,200,135-x,225-x,50);
 pieslice(90,200,225-x,315-x,50);
 pieslice(90,200,90-x,270-x,50);
 pieslice(90,200,0-x,180-x,50);
 pieslice(300,200,45-x,135-x,50);
 pieslice(300,200,135-x,225-x,50);
 pieslice(300,200,225-x,315-x,50);
 pieslice(300,200,90-x,270-x,50);
 pieslice(300,200,0-x,180-x,50);
 if(x1<=370 || x3<=370 || x5<=370 ||x7<=370){
 x++;
 x1++,x2++;x3++;x4++;x5++;x6++;x7++; x8++; }
 delay(80);
 cleardevice();

 }
 cleardevice();
 getch();
 closegraph();
 return 0;

}

