#include<iostream>
#include<vector>
#include "HQ.h"
using namespace std;
void ft_rev_par_list(vector <int> &mass)
{
        int tmp;
    for(int i = 0; i < (mass.size() - mass.size() % 2 );i += 2)
    {
        tmp = mass[i];
        mass[i] = mass[i + 1];
        mass[i + 1] = tmp;
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
    ft_rev_par_list(arr);
    for(int i = 0; i < arr.size(); i++)
    {
        cout << arr[i];
    }
    return 0;
}
*/
