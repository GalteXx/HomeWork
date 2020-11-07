#include <string>
#include <iostream>
#include "str_new.h"
using namespace std;

string ft_reverse_str(string a){
string b = "";
int len;
//len = ft_len(a);
    for(len = 0; a[len] != '\0'; len++)
    {
        len;
    }
for(int i = len - 1; i >= 0; i--)
        {
            b += a[i];
        }

return(b);
}

int main()
{
    string str;
    cin >> str;
    cout << ft_reverse_str(str);
    return 0;
}
