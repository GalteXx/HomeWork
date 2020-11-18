#include<iostream>
#include<string>
//#include "head.h"
using namespace std;
bool ip(string str)
{
    int a = 0;
    int kol = 0;
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] != '.')
        {
            a += (int) str[i] - 48;
            a = a * 10;
        }
        if(str[i] == '.')
        {
            if(a / 10 > 255 || kol >= 4) return false;

            a = 0;
            kol++;
        }
    }
    if(kol == 3) return true;
    return false;
}

int main()
{
    string a;
    getline(cin, a);
    cout << ip(a);
}
