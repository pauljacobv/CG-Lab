#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include<conio.h>
float x1,y1,x2,y2,dx,dy;

void main()
{
   int gd=DETECT,gm,i;
   float dx,dy,steps,xinc,yinc,x,y;
   initgraph(&gd,&gm,"C:\\TC\\BGI");

   printf("Enter the first x coordinate ");
   scanf("%f",&x1);
   printf("Enter the first y coordinate ");
   scanf("%f",&y1);
   printf("Enter the second x coordinate ");
   scanf("%f",&x2);
   printf("Enter the second y coordinate ");
   scanf("%f",&y2);

   dx=(x2-x1);
   dy=(y2-y1);
   if(abs(dx)>abs(dy))
	 steps=abs(dx);
   else
	 steps=abs(dy);
   xinc=dx/steps;
   yinc=dy/steps;
   x=x1;
   y=y1;
   i=1;
   if(x1>x2&&y1<y2)
    dx=-dx;
   while(i<=steps)
   {
     putpixel(x,y,WHITE);
     x=x+xinc;
     y=y+yinc;
     i++;
     delay(10);
   }
   getch();
   closegraph();
}