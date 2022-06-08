#include <string>
#include <iostream>
#include "str_new.h"
using namespace std;

string ft_cmp_str(string str1, string str2, int num)
{
   string output;
   int len;
   for(len = 0; str1[len] != '\0'; len++)
   {
    len;
   }
   for(int i = 0; i < len; i++)
   {
      if(i == num)
        {
        output += str2;
        }
      output += str1[i];
   }
   return output;
}
