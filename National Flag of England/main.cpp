#include<graphics.h>
int main()
{
	initwindow(400,400);
	setcolor(WHITE);
	rectangle(50,50,220,150);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(51,51,WHITE);
	setcolor(RED);
	rectangle(50,90,220,110);
	setfillstyle(SOLID_FILL,RED);
	floodfill(51,91,RED);
	setcolor(GREEN);
	rectangle(120,50,140,150);
	setfillstyle(SOLID_FILL,RED);
	floodfill(121,51,GREEN);
	setcolor(RED);
	rectangle(120,50,140,150);
	getch();
}
