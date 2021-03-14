#include"iHate.h"

void rectFullL(int x, int y, int lx, int ly)
{
	//if(ly > 0)
	//{
		for(int i = y; i < y + ly; i++)
		{
			lineHorizL(x, i, lx);
		}
	//}
	/*else
	{
		for(int i = y; i < -1 * y + ly; i++)
	{
		lineHorizL(x, i, lx);
	}
	}
	*/
	
}
