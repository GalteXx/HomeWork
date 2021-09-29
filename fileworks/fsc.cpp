#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int contA(string str)
{
    int kol = 0;
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == 'A')
            kol++;
    }
    return kol;
}


void debug(int* kkk)
{
    for(int i = 0; i < 26; i++)
        cout << (char) (i + 65) << " " << kkk[i] << "\n";
}


int mmax(int* m)
{
    int maxi = 0;
    for(int i = 0; i < 26; i++)
    {
        if(m[maxi] < m[i])
            maxi = i;
    }
    return maxi;
}
 //-65
int main()
{

    ifstream amogus("text.txt");
    string str;
    string saved;
    int savedL[26];
    
    for(int i = 0; i < 26; i++)
        savedL[i] = 0;
    cout << amogus.is_open();
    while(getline(amogus, str))
    {
        for(int i = 0; str[i] != '\0'; i++)
        {
            savedL[str[i] - 65]++;
        }
        if(contA(str) < contA(saved))
        {
            saved = str;
        }
    }
    cout << endl << saved << endl;
    debug(savedL);
    cout << endl;
    
    int kkk[26];
    for(int i = 0; saved[i] != '\0'; i++)
    {
        kkk[saved[i] - 65]++;
    }
    cout << (char) (mmax(kkk) + 65) << " " << savedL[mmax(kkk)];
    
    cin >> str;
    return 0;
}
