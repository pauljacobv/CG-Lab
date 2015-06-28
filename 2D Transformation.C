#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include<math.h>
void main()
	{
	int gm;
	int gd=DETECT;
	int x1,x2,x3,x4,y1,y2,y3,y4,nx1,nx2,nx3,nx4,ny1,ny2,ny3,ny4,c;
	int sx,sy,xt,yt,r,temp;
	int a[10],b[10],d1,d2,d3,d4,c1,c2,c3,c4,q,p,i,j;
	float t;
	initgraph(&gd,&gm,"c:\\tc\\bgi");
	printf("\nEnter the vertices");
	    //setcolor(WHITE);
	scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
	//clrscr();
	    setcolor(WHITE);
	    a[0]=x1;
	    a[1]=x2;
	    a[2]=x3;

	    for(i=0;i<3;i++)
		{
		for(j=0;j<3;j++)
			{
			if(a[j]>a[j+1])
			{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
			}
			}
		}
	    b[0]=y1;
	    b[1]=y2;
	    b[2]=y3;
		    for(i=0;i<3;i++)
		{
		for(j=0;j<3;j++)
			{
			if(b[j]>b[j+1])
			{
			temp=b[j];
			b[j]=b[j+1];
			b[j+1]=temp;
			}
			}
		}
		q=b[2]+(b[2]-b[0]);
		p=a[2]+(a[2]-a[0]);
		//printf("\n%d",p);
	    line(x1,y1,x2,y2);
	    line(x2,y2,x3,y3);
	    line(x3,y3,x1,y1);
	    printf("\n1.Translation\n2.Rotation\n3.Scalling\n4.Reflection(y-axis)\n5.Reflection(x-axis)\n6.Exit");
	    do{
	    printf("\nEnter your choice:");
	    scanf("%d",&c);
	    switch(c)
	    {
			case 1:
				    printf("Enter the translation factor");
				    scanf("%d%d",&xt,&yt);
				    nx1=x1+xt;
				    ny1=y1+yt;
				    nx2=x2+xt;
				    ny2=y2+yt;
				    nx3=x3+xt;
				    ny3=y3+yt;

				    line(nx1,ny1,nx2,ny2);
				    line(nx2,ny2,nx3,ny3);
				    line(nx3,ny3,nx1,ny1);

				
				    break;

			case 2:
				    printf("Enter the angle of rotation");
				    scanf("%d",&r);
				    t=3.14*r/180;
				    nx1=abs(x1*cos(t)-y1*sin(t));
				    ny1=abs(x1*sin(t)+y1*cos(t));
				    nx2=abs(x2*cos(t)-y2*sin(t));
				    ny2=abs(x2*sin(t)+y2*cos(t));
				    nx3=abs(x3*cos(t)-y3*sin(t));
				    ny3=abs(x3*sin(t)+y3*cos(t));

				    line(nx1,ny1,nx2,ny2);
				    line(nx2,ny2,nx3,ny3);
				    line(nx3,ny3,nx1,ny1);
								    break;

			case 3:
				    printf("Enter the scalling factor");
				    scanf("%d%d",&sx,&sy);
				    nx1=x1*sx;
				    ny1=y1*sy;
				    nx2=x2*sx;
				    ny2=y2*sy;
				    nx3=x3*sx;
				    ny3=y3*sy;

				    line(nx1,ny1,nx2,ny2);
				    line(nx2,ny2,nx3,ny3);
				    line(nx3,ny3,nx1,ny1);

			  break;

			case 4:     d1=x2-x1;
			d2=x3-x2;
			d3=x1-x3;


						line(p,y1,p-d1,y2);
			p=p-d1;
			line(p,y2,p-d2,y3);
			p=p-d2;
			line(p,y3,p-d3,y1);
			p=p-d3;

		           break;

			case 5:c1=y2-y1;
			c2=y3-y2;
			c3=y1-y3;

			line(x1,q,x2,q-c1);
			q=q-c1;
			line(x2,q,x3,q-c2);
			q=q-c2;
			line(x3,q,x1,q-c3);
			q=q-c3;

				    break;

			case 6:
				break;
				    }
			}while(c!=6);
				    closegraph();
				    }
