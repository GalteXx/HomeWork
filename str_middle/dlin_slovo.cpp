#include<iostream>
#include<string>
#include "head.h"
using namespace std;

int ft_len(string str)
{
    int len;
    for(len = 0; str[len] != '\0'; len++)
    {
        len;
    }

    return len;
}

string dlin_slovo(string str)
{
    int num = 0, kolSlov = 0, k = 0, e = 0, sch = 0, u = 0, nait = 0;
    char  b = str[0];
    string out = "";

while(b != '\0')
{
    b = str[num];
    if(b != ' ')
    {
    kolSlov ++;
    if(nait == 0)
    {
        u = num;
        nait++;
    }
    }
    if(b == 32 || num == ft_len(str))
    {
    if (k < kolSlov)
    {
        k = kolSlov;
        e = num;
        sch = u;
        }
        kolSlov = 0;
        nait = 0;
        }
        num++;
}
    while(sch != e)
    {
        out += str[sch];
        sch++;
    }
    //это точно middle?
return(out);


}

