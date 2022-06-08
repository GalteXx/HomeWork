//#include"mid.h"
int ft_sum_num(int ch)
{
    int sum = 0;
    while(ch != 0)
    {
        sum += ch % 10;
        ch /= 10;
    }
    return sum;
}
