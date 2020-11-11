#include<iostream>
#include<string>
#include "head.h"
using namespace std;
bool Compare(string S1, string S2)
{
    int len1 = 0, len2 = 0;
    for(int i = 0; S1[i]; i++) len1++;
    for(int i = 0; S2[i]; i++) len2++;
    if(len1 != len2) return false;
    for(int i = 0; S1[i], S2[i]; i++)
    {
        if(S1[i] != S2[i]) return false;
    }

    return true;
}
