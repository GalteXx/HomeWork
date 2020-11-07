#include"mid.h"
int ft_min_num(int ch)
{
    int sum = 10;
    while(ch != 0)
    {
        if(ch % 10 < sum) sum = ch % 10;
        ch /= 10;
    }
    return sum;
}
