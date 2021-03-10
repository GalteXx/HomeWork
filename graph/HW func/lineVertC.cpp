#include <graphics.h>
void lineVertC(int x, int y, int sy)
{
	for(int i = y; i < sy + 1; i++)
	{
		putpixel(x, i, 1);//what number is white?
	}
}
