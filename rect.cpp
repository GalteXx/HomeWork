#include <graphics.h>
#include "iHate.h"
void rect(int x, int y, int sx, int sy)
{
	lineHorizC(x, y, sx);
	lineHorizC(x, sy, sx);
	lineVertC(x, y, sy);
	lineVertC(sx, y, sy);
}
