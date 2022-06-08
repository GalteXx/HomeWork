#include"mid.h"
int dt_multi_num(int ch)
{
    int sum = 0;
    while(ch != 0)
    {
        sum += ch % 10;
        ch *= 10;
    }
    return sum;
}
