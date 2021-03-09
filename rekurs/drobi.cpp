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
int a, b;
cin >> a >> b;
cout << a/dr(a, b) << "/" << b/dr(a, b);
return 0;
}