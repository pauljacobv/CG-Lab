#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void fan()
{
	char ch;
	int stang[3]={0,120,240},i,speed=500;
	while(ch!='0')
	{
		while(!kbhit())
		{
			cleardevice();
			circle(320,240,30);
			circle(320,240,70);
			circle(320,240,100);
			circle(320,240,130);

			for(i=0;i<3;i++)
			{
				pieslice(320,240,stang[i],stang[i]+30,110);
				stang[i]+=30;
				if(stang[i]==360)
				{
					stang[i]=0;
				}
			}
			delay(speed);

		}
		ch=getch();
		switch(ch)
		{
			case '0': speed = 5000;
				break;
			case '1':speed = 1000;
				break;
			case '2':speed = 500;
				break;
			case '3':speed = 100;
				break;
			case '4':speed = 50;
				break;
			case '5':speed = 5;
				break;
		 }
	}
}

void main()
{
	int gd = DETECT,gm,i;
	initgraph(&gd,&gm,"c:\\tc\\bgi");

	fan();

	getch();
	closegraph();
}
