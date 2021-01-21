#include <iostream>

using namespace std;

int main()
{
    while (true){
    int p, k, q;
    cin >> p >> q >> k;
    int mass[p + 1];
    //0 == 1
    for(int i = 0; i < p+1; i++)
    {
        mass[i] = 0;
    }
    mass[1] = 1;
    for(int i = 2; i <= q;i++)
    {
        mass[i] += mass[i - 1];
        if(i % k == 0)
            mass[i] += mass[i/k];
    }
    for(int i = q + 1; i <= p; i++)
    {
        mass[i] += mass[q];
        if(i % k == 0 && i / k >= q)
            mass[i] += mass[i];
    }
    /*
    for(int i = 1; i < p; i++)
    {
        cout << i << " ";
    }
    cout << endl;
    for(int i = 1; i < p; i++)
    {
        cout << mass[i] << " ";
    }
    */
    cout << mass[p];
    }
    return 0;
}
