#include <graphics.h>
void lineHoriz(int n, int y)
{
	for(int i = 0; i < n + 1; i++)
	{
		putpixel(i, y, 1);
	}
}
