#include"mid.h"
int ft_mirror_count(int ch)
{
    int output = 0;
for(int i = 0; i < ch; i++)
{ int z = i, sum = 0;
    while(z != 0)
    {
        sum *= 10;
        sum += z % 10;
        z /= 10;
    }
    if(sum == i)
         output++;

}
return output;
}
