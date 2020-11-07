#include <string>
#include <iostream>
#include "str_new.h"
using namespace std;

string ft_first_end_three(string str)
{   int i = 0, len = 0;
    for(len = 0; str[len] != '\0'; len++)
    {
    len;
    }
string output = "";
    while(i < 3)
    {
        output += str[i];
        i++;
    }
    i = 3;
    while(i >= 0)
    {
        output += str[len - i];
        i--;
    }
        return output;
}
