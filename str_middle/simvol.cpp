#include<iostream>
#include<string>
#include "head.h"
using namespace std;
char simvol(string str)
{
    int len;
    for(len = 0; str[len] != '\0'; len++)
    { }
    int a = 0;
    bool notFound = true;
    while(notFound)
    {
     for(int i = (a + 1); i < len; i++)
    {
        if(str[a] == str[i])
        {
            return str[i];
        }
    }
        if(a < len) a ++;
        else notFound = false;
    }
    return 0;
}
