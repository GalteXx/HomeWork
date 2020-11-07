#include <string>
#include <iostream>
//#include "str_new.h"
using namespace std;

string ft_max_char_on_end(string str)
{
    bool b = true;
    int kol1, kol2 = 0, nach, i;
    kol1 = ft_len(str);
    for (i = 0; i < kol1; i++)
    {
        if (str[i] == str[i - 1])
        {
            nach = i - 1;
            for (int z = 0; z < kol2 && b; z++)
            {
                if (str[z] == str[nach])
                {
                    //void
                }
                else
                    b = false;
            }
            if (z + 1 > kol2) kol2 = z + 1;
                b = true;
        }
        return kol2;
    }
}
