//это особый случай, потом проверю
#include <string>
#include <iostream>
#include "str_new.h"
using namespace std;

string ft_three_str(string str, string str2, string str3)
{
   string output;
   int kol, kol2, target;
   kol = ft_len(str);
   kol2 = ft_len(str3);
   target = ft_find_str(str, str2) - 1;
   for(int i = 0; i < kol; i++)
   {
       if(i = target)
       {
           i += kol2;
           output += str3;
       }
       output[i] = str[i];
   }
   return output;
}
