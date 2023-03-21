#include<graphics.h>
#include<time.h>
int main()
{
	initwindow(1000,1000);
	while(1)
	{
		time_t rawTime;
		struct tm* currentTime;
		char a[100];
		rawTime = time(NULL);
		currentTime = localtime(&rawTime);
		strftime(a,100,"%I:%M:%S",currentTime);
		setcolor(11);
		settextstyle(3,HORIZ_DIR,10);
		outtextxy(200,100,a);
		strftime(a,100,"%p",currentTime);
		settextstyle(3,HORIZ_DIR,5);
		outtextxy(480,220,a);
		strftime(a,100,"%a,%d,%b,%y",currentTime);
		settextstyle(3,HORIZ_DIR,7);
		outtextxy(285,310,a);
		delay(1000);
	}
	getch();
}
