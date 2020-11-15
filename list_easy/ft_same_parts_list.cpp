#include<iostream>
#include<vector>
#include "HQ.h"
using namespace std;
bool ft_same_parts_list(const vector <int> mass)
{
    for(int i =1; i < mass.size();i++)
    {
        if(mass[i] == mass[i - 1])
        {
            return true;
        }
    }
    return false;
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
    cout << ft_same_parts_list(arr);
    return 0;
}
*/
