#include <fstream>
#include <iostream>
#include <string>

using namespace std;

string read()
{
    string str;
    fstream sus("text.txt");
    getline(sus, str);
    cout << str;
    return str;
}

string connect(char frst, char scnd, char trd, char fr)
{
    string outPut;
    outPut += frst;
    outPut += scnd;
    outPut += trd;
    outPut += fr;
    cout << outPut << " - output\n";
    return outPut;
}

int main()
{
    string text;
    cout << "amoig";
    text = read();
    
    int current = 0, maxi = 0;
    for(int i = 0; text[i] != '\0'; i += 4)
    {
        if( connect(text[i], text[i + 1], text[i + 2], text[i + 3]) != "DBCA")
        {
            if(maxi < current)
                maxi = current;
            current = 0;
        }
        else
            current++;
    }

    cout << maxi;
    return 0;
}