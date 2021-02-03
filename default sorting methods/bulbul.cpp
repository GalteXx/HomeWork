#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int mass[n];
    for(int i = 0; i < n; i++) {cin >> mass[i];}
    for(int i = 0; i < n; i++)
    {   for(int j = 0; j < n - i - 1; j++)
        {   if(mass[j] > mass [j+1])
            {   int tmp = mass[j];
                mass[j] = mass[j + 1];
                mass[j + 1] = tmp;}
            for(int k = 0; k < n; k++)
            {   if(k == n - 1) cout << mass[k] << "\n";
                else cout << mass[k] << " ";}}}
    return 0;
}