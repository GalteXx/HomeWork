#include <iostream>
using namespace std;
int mpow(int a, int b)
{
if(b == 2)
{
return(a * a);
}
if(b == 1)
{
return(a);
}
if(b % 2 != 0)
return(a * mpow(a, b-1));
return(a * mpow(a, b - 1));
}
int main() {
int a, b, c;
cin >> a >> b;
cout << mpow(a, b);

//kill me
cin >> a;
return 0;
}