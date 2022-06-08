#include <graphics.h>
#include <iostream>
using namespace std;
/*
int okr(float gg)
{
	if( gg - (int) gg >= 0.5f)
		gg = (int) gg + 1;
	else
		gg = (int) gg;
	return gg;
}
*/
void linen(int x, int y, int fx, int fy)
{
	for(int i = x; i < fx; i++)
	{
		float j = ((i - x) * (fy - y)) / (fx - x) - y;
		cout << "x: " << i << " y: " << j << endl;
		putpixel(i, j, 15);
	}
}

int main()
{
	
	initwindow(600, 600, "AHaha" );
	int a, b, c, d;
	putpixel(0, 0, 2);
	cin >> a >> b >> c >> d;
	linen(a, b, c, d);
	getch();
	return 0;
}
