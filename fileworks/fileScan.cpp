#include<fstream>
#include<iostream>
#include<string>
using namespace std;

void bruh(int* allah)
{
    int mini = 999999999, svd;
    for(int i = 0; i < 26; i++)
    {
        if(allah[i] < mini && allah[i] != 0)
        {
            mini = allah[i];
            svd = i;
        }
    }
    cout << (char) svd + 65 << "\n" << allah[svd];
}

int main()
{
    fstream nig("text.txt");

    string str;
    string saved;
    int maxx = -1;
    while(getline(nig, str))
    {
        
        int kol = 0;
        for(int i = 0; str[i] != '\0'; i++)
        {
            if(str[i] == 'Q')
            {
                kol++;
                if(kol > maxx)
                {
                    maxx = kol;
                    saved = str;
                }
            }
        }
    }



    int lettrs[26];
    for(int i = 0; str[i] != '\0'; i++)
        lettrs[str[i] - 65]++;


    bruh(lettrs);

    return 0;
}