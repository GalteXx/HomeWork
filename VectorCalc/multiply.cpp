#include <iostream>

using namespace std;
int multiply(int n)
{
    if(n == 1)
        return n;
    multiply(n-1);
    n*= n;
}
int factorial(int n)
{
    if(n == 1)
    return n;
    multiply(n-1);
    n*= n;
}

void shag(int a, int b, int n)
{
    cout << a << " ";
    if(a == n)
        return;
    shag(a+b, b, n);
}
void last(int a, int n)
{
    cout << a << " ";
    if(a == n)
        return;
    last(a+1, n);
}
int convert(string str)
{
    int a = 0;
    for(int i = 0; str[i] != '\0'; i++)
    {

        if(str[i] == ' ')
            a = 0;
        else
        {
            a += str[i] - 48;
            a *= 10;
        }
    }
    return a/=10;
}//too many functions...
int razr(int a)
{
    int i;
    for(i = 0; a > 0; i++)
    {
        a /= 10;
    }
    return a;
}
step(int a, int b)
{
    for(int i = 0; i < b; i++)
    {
        a *= a;
    }
    return a;
}
string String(int a)
{
    //i cant do that
}
string fourth(string str)
{
    if(convert(str) < 0)
        return str;

    fourth(str + String(convert(str)));
}
int main()
{
    string a;
    int b;
    //getline(cin, a);
    cin >> b;
    cout << ToString(b);
    //cout << fourth(a);

    return 0;
}
