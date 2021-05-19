#include <vector>
#include <iostream>
#include <string>
using namespace std;

void fill(vector <int>& vec)
{
    string a;
    cout << "input:\n";
    getline(cin, a);
    int temp = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == ' ')
        {
            vec.push_back(temp / 10);
            temp = 0;
            
        }
        else
        {
           
            temp += (a[i] - 48);
            temp *= 10;
        }
    }
    vec.push_back(temp / 10);
    temp = 0;
}

void print(const vector <int>& vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
}

vector <int> split(vector <int> vec)
{
    if (vec.size() > 1)
    {
        vector <int> vec2(vec.begin(), vec.begin() + vec.size() / 2);
        vector <int> vec3(vec.size() / 2, vec.size() / 2);
        split(vec2);
        split(vec3);
    }
    else
        return vec;
}
vector <int> merge(vector <int> vec1, vector <int> vec2)
{
    vector <int> res;
    for (int i = 0; i < vec1.size() && vec2.size(); i++)
    {

            
    }
    return res;
}

int main()
{
    vector <int> vec;
    fill(vec);
    vector <int> vec2 (vec.begin(), vec.begin() + vec.size() / 2);
    vector <int> vec3 (vec.size() / 2, vec.size() / 2);
    print(merge(split(vec2), split(vec3)));
    return 0;
}