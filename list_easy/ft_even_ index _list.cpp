#include<iostream>
#include<vector>
#include "HQ.h"
using namespace std;
void ft_even_index_list(const vector <int> mass, vector <int> &mass2)
{
    for(int i =0; i < mass.size();i++)
    {
        if(i % 2 == 0)
        {
            mass2.push_back(mass[i]);
        }
    }
}
/*
int main()
{
    vector <int> arr;
    vector <int> mass2;
    int kol;
    cin >> kol;
    for(int i = 0; i < kol; i++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    ft_even_index_list(arr, mass2);

    for(int i = 0; i < mass2.size(); i++)
    {
        cout << mass2[i] << " ";
    }
    return 0;
}
*/
