#include <iostream>
using namespace std;

int dr(int a, int b)
{
    if(a % b == 0)
    {
        return(b);
    }
    return(dr(b, a % b));
}

int main() {
int a, b, c, d, f;
cin >> a >> b >> c >> d;
//  a  ^  c
//  b  ^  d
//(b * d) / dr(b, d);
a *= ((b * d) / dr(b, d)) / b;
c *= ((b * d) / dr(b, d)) / d;
f = a + c;

cout << f/dr(a, b) << " " << ((b * d) / dr(b, d))/dr(a, b);
return 0;
}