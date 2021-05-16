#include <iostream>
using namespace std;

void f(int n)
{
    std::cout << n;
    if (n >= 5)
        f(n - 1);
    if (n > 3)
        f(n / 2);
}

int main()
{
    f(8);
    while(true)
    {}
}
