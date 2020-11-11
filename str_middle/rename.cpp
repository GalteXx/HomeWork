#include<iostream>
#include<string>
#include "head.h"
using namespace std;
int main()
{
    string n = "North", s = "South", w = "West", e = "East", emp = "";
    int x = 0, y = 0, newi;
    while(emp != "000")
    {
        cin >> emp;
        if(emp != "000")
        {
        cin >> newi;
        if(emp == n)
            x += newi;

        if(emp == s)
            x -= newi;

        if(emp == e)
            y += newi;

        if(emp == w)
            y -= newi;
        }
    }

    cout << x << "; " << y;
}
