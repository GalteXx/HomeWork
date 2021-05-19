#include <vector>
#include <iostream>
#include <string>
using namespace std;

void fill(vector <int> &vec)
{
    string a;
    cout << "input:\n";
    getline(cin, a);
    int temp = 0;
    for(int i = 0; a[i] != '\0' || a[i] != '\n'; i++)
    {
        if(a[i] == ' ')
        {
            vec.push_back(temp / 10);
            temp = 0;
            //cout << "reged2";
        }
        else
        {
            cout << "reged1";
            temp += (a[i] - 48);
            temp *= 10;
        }
    }
    vec.push_back(temp / 10);
    temp = 0;
}

void print(const vector <int> &vec)
{
    for(int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector <int> vec;
    fill(vec);
    print(vec);
    int a;
    cin >> a;
    return 0;
}