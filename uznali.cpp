#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> split(string str)
{
    vector<int> out;
    int temp = 0;
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
        {
            out.push_back(temp / 10);
            temp = 0;
        }
        else{
            temp += str[i] - 48;
            temp *= 10;
        }
    }

    out.push_back(temp / 10);
    temp = 0;

    return out;
}

vector <int> clean(vector <int> vec)
{
    vector <int> out;
    for(int i = 1; i < vec.size(); i++)
    {
        if(vec[i] != vec[i - 1])
            out.push_back(vec[i - 1]);
    }


    out.push_back(vec[vec.size() - 1]);

    return out;
}


int main()
{
    string inp;
    int kol = 1, maxx = 1;

    getline(cin, inp);
    vector <int> vec = split(inp);
    


    for(int i = 1; i < vec.size(); i++)
    {
        if(vec[i] == vec[i - 1] && kol == 1)
        {
            //cout << "ignored " << vec[i - 1] << endl; 
        }
        else if(vec[i] >= vec[i - 1])
        {
            
            kol++;
            if(kol > maxx)
                maxx = kol;
            
        }
        if (vec[i] < vec[i - 1])
        {
            kol = 1;
            
        }
    }

    kol = 1;
    for(int i = 1; i < vec.size(); i++)
    {
        if(vec[i] == vec[i - 1] && kol == 1)
        {
            //cout << "ignored " << vec[i - 1] << endl; 
        }
        else if(vec[i] <= vec[i - 1])
        {

            kol++;
            if(kol > maxx)
                maxx = kol;
            
        }
        if(vec[i] > vec[i - 1])
        {
            kol = 1;
            
        }
    }
        

    cout << maxx;
}