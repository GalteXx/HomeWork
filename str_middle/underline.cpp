#include<iostream>
#include<string>
#include "head.h"
using namespace std;
bool underline(string str1, string str2)
{
char bu1, bu2 = b[0];
int m = 0, k = 1, i = 0;
bu1 = str1[0];
while(bu1 != '\0')
{
    bu1 = str1[i];
    if (str1 == bu2)
{
l++;
while(bu2 != '\0' && m == 0)
{
    bu1 = str1[i];
    bu2 = str2[k];
    i++;
    k++;
    if(bu2 != bu1)
        m++;
}
    if(bu2 == '\0')
{
    return(1);
}
    k = 1;
    m = 0;
    l--;
    bu2 = str2[0];
}
i++;
}
return(0);
}
