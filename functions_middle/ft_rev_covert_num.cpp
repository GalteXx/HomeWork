#include"mid.h"
long int ft_rev_covert_num(int ch, int n)
{
long int out = 0;
for (int i = 1; ch != 0; ch/=10, i*=n)
{
out += i*(ch%10);
}
return out;
}
