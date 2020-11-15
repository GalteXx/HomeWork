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
            //mass [n - 1] = cop[i];
            mass[abs(n - i)] = cop[i];
            //mass [n%mass.size()] = cop[i];
            cout << "iter" << endl;
    }
}
if(n < 0)
{
        for(int i = 0; i < mass.size();i++)
    {
        if(i + n < mass.size())
        {
            mass[i + n] = cop[i];
        }
        else if( i + n == 0)
            mass [-1*abs(n - i)] = cop[i];
    }
}
}

/*
int main()
{
    vector <int> arr;
    int kol;
    cin >> kol;
    for(int i = 0; i < kol; i++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    int n;
    cin >> n;
    ft_super_shift_list(arr, n);
    for(int i = 0; i < arr.size(); i++)
    {
        cout << arr[i];
    }
    return 0;
}
*/
