#include<graphics.h>
int main()
{
	initwindow(900,500);
	for(int i = 1; i <= 700; i++)
	{
		setcolor(WHITE);
		circle(100+i,200,40);
		circle(250+i,200,40);
		circle(180+i,200,20);
		circle(100+i,200,10);
		circle(250+i,200,10);
		line(100+i,200,180+i,200);
		line(180+i,200,140+i,110);
		line(100+i,200,140+i,110);
		line(140+i,110,140+i,90);
		line(120+i,90,160+i,90);
		line(180+i,200,250+i,90);
		line(140+i,110,250+i,90);
		line(250+i,200,250+i,90);
		line(250+i,90,250+i,60);
		line(225+i,60,270+i,60);
		line(10,210,800,210);
		line(10,250,800,250);
		delay(10);
		cleardevice();
	}
	getch();
}
