#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cin >> str;

    int sk1 = 0, sk2 = 0, sk3 = 0;

    for(int i = 0; str[i] != '\n'; i++)
    {
        if(str[i] == '(')
            sk1++;
        if(str[i] == ')')
            sk1--;
        if(str[i] == '[')
            sk2++;
        if(str[i] == ']')
            sk2--;
        if(str[i] == '{')
            sk3++;
        if(str[i] == '}')
            sk3--;
    }
    if(sk1 == 0 && sk2 == 0 && sk3 == 0)
        cout << "yes";
    else
        cout << "no";
    cin >> sk2; //for stopping :)
    return 0;
}