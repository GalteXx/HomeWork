#include <graphics.h>
#include "iHate.h"
void lineHorizL(int x, int y, int n)
{
	for(int i = x; i < x + n + 1; i++)
	{
		putpixel(i, y, 1);
	}
}
