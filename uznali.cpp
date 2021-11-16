#include<iostream>
#include <vector>
using namespace std;


int main()
{
    vector<string> vec;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;
        vec.push_back(temp);
    }
    

    return 0;
}