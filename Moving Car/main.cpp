#include<graphics.h>
int main()
{
	int i;
	initwindow(1000,700);
	for(int i=0; i<=1000; i++)
	{
	//road
		line(0,390,1000,390);
		//car body
		line(50+i,370,90+i,370);
		arc(110+i,370,0,180,20);
		line(130+i,370,220+i,370);
		arc(240+i,370,0,180,20);
		line(260+i,370,300+i,370);
		line(300+i,370,300+i,350);
		line(300+i,350,240+i,330);
		line(240+i,330,200+i,300);
		line(200+i,300,110+i,300);
		line(110+i,300,80+i,330);
		line(80+i,330,50+i,340);
		line(50+i,340,50+i,370);
		//car window
		line(165+i,305,165+i,330);
		line(165+i,330,230+i,330);
		line(230+i,330,195+i,305);
		line(195+i,305,165+i,305);
		line(160+i,305,160+i,330);
		line(160+i,330,95+i,330);
		line(95+i,330,120+i,305);
		line(120+i,305,160+i,305);
		//wheels
		circle(110+i,370,17);
		circle(240+i,370,17);
		delay(10);
		cleardevice();
	}
	getch();
}
