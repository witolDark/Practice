#include <iostream>
#include <graphics.h>
#include <conio.h>
#include <math.h>

int main()
{
	float x, y;

	int gdriver = DETECT, gmode;
	initgraph(&gdriver, &gmode, "");

	x = -3.14;
	moveto(x, x * x);

	do
	{
		y = 2*pow(x,3)-4*x;
		lineto(x * 50 + getmaxx() / 2, getmaxy() / 2 - (y * 20));
		x = x + 0.02;
	} while (x < 3.14);
	getch();
	closegraph();
	return 0;
}