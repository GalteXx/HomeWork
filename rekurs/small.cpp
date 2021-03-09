#include <iostream>
using namespace std;

int sm(int a, int b)
{
    if(a % b == 0)
        {
            return(b);
        }
    return(sm(b, a % b));
}
int main() 
{
    int a, b;
    cin >> a >> b;
    cout << (a * b)/ sm(a , b);
    //kill me
    cin >> a;
    return 0;
}