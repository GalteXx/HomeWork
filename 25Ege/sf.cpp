#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector<int> split(string str)
{
    vector<int> vec;
    int temp = 0;
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] != ' ')
        {
            temp += str[i] - 48;
            temp *= 10;
        }
        else{
            vec.push_back(temp / 10);
            temp = 0;
        }
    }
    vec.push_back(temp / 10);
    temp = 0;
    return vec;
}


int main()
{
    string st;
    getline(cin, st);
    vector<int> vec = split(st);
    int kol = 1, imax = 1;
    bool f = 0;
    for(int i = 0; i < vec.size() - 1; i++)
    {

        if(vec[i] == vec[i+1])
        {}
        if(vec[i+1] > vec[i] && f == 1)
        {
            f = 0;
            kol = 1;
        }
        if(vec[i+1] < vec[i] && f == 0)
        {
            f = 1;
            kol = 1;
        }
        if(f == 0)
        {
            if(vec[i+1] > vec[i])
            {
                kol++;
                if(imax < kol)
                    imax = kol;
            }
            else
                kol = 1;
        }
        else
        {
            if(vec[i+1] < vec[i])
            {
                kol++;
                if(imax < kol)
                    imax = kol;
            }
            else
                kol = 1;
        }

    }

    cout << imax;
    return 0;
}