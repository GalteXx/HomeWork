//#include"mid.h"
long int ft_rev_oct_num(int ch)
{
long int out = 0;
for (int i = 1; ch != 0; ch/=10, i*=2)
{
out += i*(ch%10);
}
return out;
}
