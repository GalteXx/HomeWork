#include<iostream>
#include<string>
#include "head.h"
using namespace std;
string not_probel_str(string str){
char b = str[0];
int a = 0, i = 0;
string out;
while(b != '\0')
{
if(i == 0){
out += b;
}
else
{
    i = 0;
}
if(b == ' ')
{
    if(str[a + 1] == ' ')
        {
            i++;
        }
}
a++;
b = a[c];
}
return(out);
}
