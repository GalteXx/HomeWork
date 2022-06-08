#include<iostream>
#include<vector>
#include "HQ.h"
using namespace std;
void ft_rshift_list(vector <int> &mass)
{
    vector <int> cop;
    cop = mass;
        int tmp;
    for(int i = 0; i < mass.size();i++)
    {
        if(i + 1 < mass.size())
        {
            mass[i + 1] = cop[i];
        }
        else if( i + 1 == mass.size())
            mass [0] = cop[i];
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
    ft_rshift_list(arr);
    for(int i = 0; i < arr.size(); i++)
    {
        cout << arr[i];
    }
    return 0;
}
*/
