#include<iostream>
#include<string>
#include "head.h"
using namespace std;
string Cezar(string in, int key)
{
    string out = "";
    for(int i = 0; in[i] != '\0'; i++)
    {
        if(in[i] + key > 90)
        {
            out += (char)('a' + key % 26);
        }
        else
            out += (char)(in[i] + key);
    }
return(out);
}
