#include <iostream>
#include <string>
#include <vector>
 
using namespace std;

void printv(vector <vector<int64_t>> vec){
    for(int i = 0; i < vec.size(); i++){
        cout << i << ": ";
        for(int j = 0; j < vec[i].size(); j++){
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    string str;
    cin >> str;
    int savedSize = str.size();
    vector <vector<int64_t>> vec(savedSize, vector<int64_t> (savedSize, 0));
    
    for (int i = 0; i < savedSize; i++)
    {
        int j;
        for (int k = 0; k < savedSize; k++)
        {
            j = k + i;
            if (j == savedSize)
                break;
            if (k == j)
                vec[k][j] = 1;
            else
            {
                if (str[k] != str[j])
                    vec[k][j] = vec[k + 1][j] + vec[k][j - 1] - vec[k + 1][j - 1];
                else
                    vec[k][j] = vec[k + 1][j] + vec[k][j - 1] + 1;
            }
        }

        printv(vec);
    }
    cout << vec[0].back() << endl;
    return 0;
}