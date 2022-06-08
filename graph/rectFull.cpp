#include <graphics.h>
#include "iHate.h"
void rectFull(int x, int y, int sx, int sy)
{
	for(int i = y; i < sy + 1; i++)
	{
		lineHorizC(x,i,sx);
	}
}
