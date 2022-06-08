#include<iostream>
#include<string>
#include "head.h"
using namespace std;
//да ладно... да ну нет...
string ft_rev_covert_new(int ch,int n)
{
    string alph = "0123456789ABCDEF";
    string output = "", o = "";

    int bin = 0, a = 1, b = 10;
    while(ch != 0)
    {
        a = ch % n;
        ch /= n;
        o += alph[a];
    }
//территория террора находится ниже
int len;
    for(len = 0; o[len] != '\0'; len++)
    {
        len;
    }
for(int i = len - 1; i >= 0; i--)
    {
        output += o[i];
    }

    return output;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << ft_rev_covert_new(a, b);
}
