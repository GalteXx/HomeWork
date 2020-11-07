
#include <string>
#include <iostream>
#include "str_new.h"
using namespace std;

float ft_percent_lower_uppercase(string str)
{
   int len;
    for(len = 0; str[len] != '\0'; len++)
    {
    len;
    }
   float kolB = 0, kolM = 0, output;
   for(int i = 0; i < len; i++)
   {
    if(str[i] >= 65 && str[i] <= 90)
    {
    kolB++;
    }
    else if(str[i] >= 97 && str[i] <= 112)
    {
    kolM++;
    }
   }
   output = kolM / (kolM + kolB);
   return output;
}
