#include<graphics.h>
int i;
int main()
{
	initwindow(1000,500);
	setcolor(WHITE);
	for(i=0; i<1000; i++){
		circle(200+i,70,25);
		setfillstyle(SOLID_FILL,WHITE);
		floodfill(201+i,71,WHITE);
		circle(235+i,60,30);
		setfillstyle(SOLID_FILL,WHITE);
		floodfill(236+i,61,WHITE);
		circle(235+i,80,30);
		setfillstyle(SOLID_FILL,WHITE);
		floodfill(236+i,81,WHITE);
		setfillstyle(SOLID_FILL,WHITE);
		floodfill(235+i,90,WHITE);
		circle(260+i,70,30);
		setfillstyle(SOLID_FILL,WHITE);
		floodfill(261+i,71,WHITE);
		floodfill(280+i,71,WHITE);
		setfillstyle(SOLID_FILL,WHITE);
		floodfill(260+i,80,WHITE);
		delay(10);
		cleardevice();
	}
	getch();
}
