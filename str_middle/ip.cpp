#include<iostream>
#include<string>
#include "head.h"
using namespace std;
bool ip(string str)
{
    int a = 0, kol = 0;
    for(int i = 0; str[i] != '\0'; i++)
    {
        a = a * 10
        a += (int) str[i];
        if(str[i] == ' ')
        {
            if(a > 255 || kol > 4) return false;

            a = 0;
            kol++;
        }
    }
    if(kol == 4) return true;
    return false;
}
