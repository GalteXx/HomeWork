#include"mid.h"
int ft_mirror_num(int ch)
{
    int sum = 0, ch1 = ch;
    while(ch != 0)
    {
        sum *= 10;
        sum += ch % 10;
        ch /= 10;
    }
    if(sum == ch)
        return true;
    else return false;
}
