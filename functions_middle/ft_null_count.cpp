#include"mid.h"
int ft_null_count(int ch)
{
    int sum = -1;
    while(ch != 0)
    {
        if(ch % 10 == 0) sum++;
        ch /= 10;
    }
    return sum;
}
