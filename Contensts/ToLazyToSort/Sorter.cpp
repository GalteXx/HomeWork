#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int main()
{
    ifstream in("sorteddData.txt");
    float temp;
    vector <vector <float>> vec;
    for(int i = 0; i < 20; i++)
    {
        vector <float> tmp;
        for(int j = 0; j < 300; j++)
        {
            in >> temp;
            tmp.push_back(temp);
        }
        vec.push_back(tmp);
    }

    //0 - 299
    // 148 154 -- avg
    //

    return 0;
}