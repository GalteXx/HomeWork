#include <string>
#include <iostream>
#include "str_new.h"
using namespace std;

string ft_even_place(string str)
{
   string output;
   int len, i;
    for(len = 0; str[len] != '\0'; len++)
    {
        len;
    }
   for(i = 0; i < len; i++)
   {
       if(i % 2 == 0)
       {
           output += str[i];
       }
   }
   return output;
}
