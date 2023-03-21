#include<graphics.h>
main()
{
	initwindow(700,700);
	setcolor(GREEN);
	rectangle(50,50,220,150);
	setfillstyle(SOLID_FILL, GREEN);
	floodfill(51,51,GREEN);
	setcolor(WHITE);
	rectangle(40,40,50,300);
	setfillstyle(SOLID_FILL, WHITE);
	floodfill(41,41,WHITE);
	setcolor(RED);
	circle(135,100,30);
	setfillstyle(SOLID_FILL,RED);
	floodfill(136,101,RED);
	getch();
}
