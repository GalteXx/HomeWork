
#include <string>
#include <iostream>
#include "str_new.h"
using namespace std;

string ft_slice_str(string str, int start, int endi)
{
   string output;
   int len;
   //len = ft_len(str);
    for(len = 0; str[len] != '\0'; len++)
    {
        len;
    }
   if(endi > len)
       endi = len;
   for(int i = start; i < endi; i++)
   {
       output += str[i];
   }
   return output;
}
 int main()
 {
     int st, en;
     string str;
     cin >> str >> st >> en;
     cout << ft_slice_str(str, st, en);
     return 0;
 }
