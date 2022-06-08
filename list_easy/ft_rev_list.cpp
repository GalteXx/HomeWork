#include<iostream>
#include<vector>
#include "HQ.h"
using namespace std;
void ft_rev_list(vector <int> &mass)
{
    int tmp;
    for(int i = 0; i < mass.size() / 2;i++)
    {
        tmp = mass[mass.size() - 1 - i];
        mass[mass.size() - 1 - i] = mass[i];
        mass[i] = tmp;
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
    ft_rev_list(arr);
    for(int i = 0; i < arr.size(); i++)
    {
        cout << arr[i];
    }
    return 0;
}
*/
