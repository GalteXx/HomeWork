#include <string>
#include <iostream>
#include "str_new.h"
using namespace std;

int ft_count_char_in_str(string str, char bukva)
{
   int len, output = 0;
    for(len = 0; str[len] != '\0'; len++)
    {
        len;
    }
   for(int i = 0; i < len; i++)
   {
       if(str[i] == bukva)
       {
           output++;
       }
   }
   return output;
}
