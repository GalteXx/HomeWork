#include<iostream>
#include<vector>
#include "HQ.h"
using namespace std;
int ft_positive_list(const vector <int> mass) //covid-19 postive ’‡’¿ı¿ı¿ı¿’ı‡’¿ı‡ı
{
    int z = 0;
    for(int i =0; i < mass.size();i++)
    {
        if(mass[i] > 0)
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
    cout << ft_positive_list(arr);
    return 0;
}
*/
