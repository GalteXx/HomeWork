#include <iostream>
using namespace std;



int m(int a)
{
    int a2 = a, res = 1;
    for( ; a2 > 0; a2 /= 10)
    {
        res *= 10;
        if(a2 % 10 < 9)
        {
            res++;
            //res *= 10;
            cout << " - " << a2 % 10 << "\n";
        }
    }
    cout << "res: " << res/10 << "/0\n";
    return a + (res/10);
}

int f(int a, int b)
{
    if(a > b)
        return 0;
    if(a ==b)
        return 1;
    
    return f(a + 1, b) + f(m(a), b); 
}

int main()
{
    //cout << f(25, 51);
    int n;
    while(true)
    {cin >> n; cout << m(n) << "\n";}
    return 0;
}