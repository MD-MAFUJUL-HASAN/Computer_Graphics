#include<graphics.h>
#include<windows.h> //takes input
int i;
int main()
{
	DWORD screenwidth = GetSystemMetrics(SM_CXSCREEN);
	DWORD screenHeight = GetSystemMetrics(SM_CXSCREEN);
	initwindow(screenwidth,screenHeight," ", -3, -3);
	int rectPosx = 100, circ1PosX = 200, cir2cPosX = 500, speed = 10;
	//drawig car
	while(1)
	{
		setcolor(RED);
		for(i=0; i<20; i++)
		rectangle(rectPosx - i, 300 - i, rectPosx+500+i, 511+i);
		rectangle(rectPosx,300,rectPosx+500, 511);
		setcolor(BLUE);
		for(i = 50; i < 70; i++)
		{
			circle(circ1PosX, 600, i);
			circle(cir2cPosX, 600, i);
		}
		setcolor(GREEN);
		for(i = 670; i<= 690; i++)
		line(0, i, screenwidth,i);
		if(GetAsyncKeyState(VK_LEFT))
		{
			rectPosx -= speed;
			circ1PosX -= speed;
			cir2cPosX -= speed;
		}
		else if(GetAsyncKeyState(VK_RIGHT))
		{
			rectPosx += speed;
			circ1PosX += speed;
			cir2cPosX += speed;
		}
		delay(5);
		cleardevice();
	}
	getch();
}
