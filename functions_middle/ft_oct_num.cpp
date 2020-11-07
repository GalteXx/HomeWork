//#include"mid.h"
int ft_oct_num(int ch)
{   int bin = 0, a, b = 10;
    while(ch != 0)
    {
        a = ch % 8;
        ch /= 8;
        bin += (a*b);
        b *= 10;
    }
    return bin/10;
}

