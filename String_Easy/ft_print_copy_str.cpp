#include <string>
#include <iostream>
#include "str_new.h"
using namespace std;

void ft_print_copy_str(string str, int num)
{
    for(int i = 0; i < num; i++)
    {
        cout << str << " ";
    }
}

int main()
{
    int n;
    string str;
    cin >> str >> n;
    ft_print_copy_str(str, n);
    return 0;
}
