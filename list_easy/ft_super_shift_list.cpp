#include<iostream>
#include<vector>
#include "HQ.h"
using namespace std;
int abs(int a)
{
    if(a < 0)
        return a * -1;

    return a;
}
void ft_super_shift_list(vector <int> &mass, int n)
{
    vector <int> cop;
    cop = mass;
        int tmp;
if(n > 0)
{
    for(int i = 0; i < mass.size();i++)
    {
        if(i + n < mass.size())
        {
            mass[i + n] = cop[i];
        }
        else if( i + n >= mass.size())
            mass[i + n - mass.size() ] = cop[i];
    }

}
if(n < 0)
{
    for(int i = 0; i < mass.size();i++)
    {
        if(i + n >= 0)
        {
            mass[i + n] = cop[i];
        }
        else if( i + n < 0)
            mass[i + n + mass.size()] = cop[i];
}
}

}



