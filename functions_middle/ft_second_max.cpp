//#include"mid.h"
int ft_second_max(int ch)
{
    int maxi = -1, smaxi = -1, ch1 = ch;
    while(ch != 0)
    {
        if(ch % 10 > maxi)
        {
            maxi = ch % 10;
        }
        ch /= 10;
    }
    while(ch1 != 0)
    {
        if(ch1 % 10 > smaxi && maxi != (ch1 % 10))
        {
            smaxi = ch1 % 10;
        }
        ch1 /= 10;
    }
    return smaxi;

}
