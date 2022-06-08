//#include <graphics.h>
#include "iHate.h"

void rectL(int x, int y, int Lx, int Ly)
{
	lineHorizL(x, y, Lx);
	lineHorizL(x, y + Ly, Lx);
	lineVertL(x, y, Ly);
	lineVertL(x + Lx, y, Ly);
}

