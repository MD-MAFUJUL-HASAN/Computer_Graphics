#include<graphics.h>
int main()
{
	initwindow(900,500);
	//circle(100,200,80);
	int i,j;
	for (i = 0; i < 200; i++) {
		circle(100 + i, 200+i, 80);
		delay(10);
		cleardevice();
	}
	for(j = 0; j < 200; j++){
		circle(100 + i+j, 200+i-j, 80);
		delay(10);
		cleardevice();
	}
	int x = 100 + i+j, y = 200+i-j;
	for(i = 0; i < 200; i++){
		circle(x + i, y + i, 80);
		delay(10);
		cleardevice();
	}
	getch();
}
