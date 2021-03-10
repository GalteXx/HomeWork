#include <graphics.h>
#include "iHate.h"
void lineVertL(int x, int y, int n)
{
	for(int i = y; i < y + n + 1; i++)
	{
		putpixel(x, i, 1);
	}
}
