#include"mid.h"
int ft_max_num(int ch)
{
    int sum = -1;
    while(ch != 0)
    {
        if(ch % 10 > sum) sum = ch % 10;
        ch /= 10;
    }
    return sum;
}
