#include <graphics.h>
#include "iHate.h"
void lineHorizC(int x, int y, int sx)
{
	for(int i = x; i < sx + 1; i++)
	{
		putpixel(i, y, 1);//damn blue 0_0
	}
}
