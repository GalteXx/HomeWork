#include <graphics.h>
int main()
{
initwindow(400,400);
moveto(0,0);
/*
lineto(0, 50);
lineto(50, 0);
moveto(50,50);
lineto(0,50);
lineto(50, 0);
*/
lineto(40,0);
lineto(40,40);
lineto(0,40);
lineto(0,0);
getch();             
closegraph();        
return 0;
}
