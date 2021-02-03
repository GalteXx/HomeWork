#include <iostream>
using namespace std;
void change(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp; //bulp
}
    /* print
    for(int k = 0; k < n; k++)
    {
        cout << mass[k];
        if(k < n) cout << " ";
    }
    cout << "\n";
    */
int main()
{
    int n;
    cin >> n;
    int mass[n];
    for(int i = 0; i < n; i++)
    {
        cin >> mass[i];
    }
    for(int k = 0; k < n; k++)
    {
        cout << mass[k];
        if(k < n) cout << " ";
    }
    cout << "\n";
    for(int i = 0; i < n; i++)
    {
        for(int j = 1; j < n - i; j++)
        {
        if(mass[j - 1] > mass[j])
            {
                change(mass[j - 1], mass[j]);
                
                for(int k = 0; k < n; k++)
                {
                    cout << mass[k];
                    if(k < n) cout << " ";
                }
                cout << endl;
                
            }
        }
        for(int j = n - i; j > 1; j--)
        {
            if(mass[j - 1] > mass[j])
            {
                change(mass[j - 1], mass[j]);
                
                for(int k = 0; k < n; k++)
                {
                    cout << mass[k];
                    if(k < n) cout << " ";
                }
                cout << endl;
                
            }   
        }
    }
    for(int k = 0; k < n; k++)
    {
        cout << mass[k];
        if(k < n) cout << " ";
    }

    cin >> n;//delete me
    return 0;
}