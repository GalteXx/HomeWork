#include <string>
#include <iostream>
#include "str_new.h"
using namespace std;

bool ft_equal_reverse(string str)
{
   string revers = "";
   int len;
    for(len = 0; str[len] != '\0'; len++)
    {
    len;
    }
   for(int i = len - 1; i >= 0; i--)
   {
       revers += str[i];
   }
   if(revers == str)
    return true;
   else
    return false;
}
