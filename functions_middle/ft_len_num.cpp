#include"mid.h"
int ft_len_num(int ch)
{
    int kol = 0;
    while(ch != 0)
    {
        ch /= 10;
        kol++;
    }
    return kol;
}
