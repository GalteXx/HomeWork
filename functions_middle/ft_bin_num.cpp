#include"mid.h"
int ft_bin_num(int ch)
{
    int bin = 0, a = 1, b = 10;
    while(ch != 0)
    {
        a = ch % 2;
        ch /= 2;
        bin += (a*b);
        b *= 10;
    }
    return bin/10;
}
