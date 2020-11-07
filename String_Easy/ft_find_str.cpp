#include<iostream>
#include<string>
using namespace std;

int ft_find_str(string str1, string str2)
{
    bool b = true;
    int len1, len2, nach, i;
    //kol1 = ft_len(kol1);
        for(len1 = 0; str1[len1] != '\0'; len1++)
    {
        len1;
    }
    //kol2 = ft_len(kol2);
        for(len2 = 0; str2[len2] != '\0'; len2++)
    {
        len2;
    }
    for(i = 0; i < len1; i++)
    {
        if(str1[i] == str2[0])
        {   nach = i;
            for(int z = 0; z < len2 && b; z++)
            {
                if(str2[z] == str1[nach + z])
                {
                    //void
                }
                else
                    b = false;
            }
            if(b == true)
                return i;
             else
                b = true;
}}
return -1;
}
