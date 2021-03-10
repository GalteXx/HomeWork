#include <graphics.h>
void lineVert(int n, int x)
{
	for(int i = 0; i < n + 1; i++)
	{
		putpixel(x, i, 1);
	}
}
