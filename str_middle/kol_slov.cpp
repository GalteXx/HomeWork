#include<iostream>
#include<string>
#include "head.h"
using namespace std;
int kol_slov(string str)
{
    int out = 0;
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
        {
         out++;
        }
    }
    return out + 1;
}
