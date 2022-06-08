#include<iostream>
#include<vector>
#include "HQ.h"
using namespace std;
int ft_sl_list(const vector <int> mass)
{
    int z = 0;
    for(int i =1; i < mass.size();i++)
    {
        if(mass[i] > mass[i - 1])
        {
            z++;
        }
    }
    return z;
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
    cout << ft_sl_list(arr);
    return 0;
}
*/
