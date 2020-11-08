#include"mid.h"
int ft_covert_num(int ch, int n)
{
    int bin = 0, a = 1, b = 10;
    while(ch != 0)
    {
        a = ch % n;
        ch /= n;
        bin += (a*b);
        b *= 10;
    }
    return bin/10;
}
