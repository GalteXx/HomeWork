#include <iostream>

using namespace std;

int main()
{
    cout << "a b c d\n";
    for(int a = 0; a < 2; a++)
    for(int b = 0; b < 2; b++)
    for(int c = 0; c < 2; c++)
    for(int d = 0; d < 2; d++)
    {

        if(  (!(!b || a) && (!c || d)) != (a && b && c && !d)  )
            cout << a << " " << b << " " << c << " " << d << endl;

    }
    return 0;
}