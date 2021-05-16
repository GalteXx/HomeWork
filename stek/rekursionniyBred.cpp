#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool exiot = false;

void coutput(vector <int> vec)
{
    for(int i = 0; i < vec.size(); i++)
    {
        cout << vec[i];
    }
}

void backo(vector <int> &vec)
{
    if(vec.size() > 0)
        cout << vec[vec.size() - 1] << "\n";
    else
        cout << "error";
}
void push(vector <int> &vec)
{
    int ch;
    cin >> ch;
    vec.push_back(ch);
    cout << "ok \n";
}

void pop(vector <int> &vec)
{
    if(vec.size() > 0) {
        backo(vec);
        vec.pop_back();
    }
    else
        cout << "error";
}

void sizez(vector <int> &vec)
{
    cout << vec.size() << "\n";
}

void clearr(vector <int> &vec)
{
    for(int i = 0; i < vec.size(); true)
        vec.pop_back();

    cout << " ok";
}
void exitt()
{
    cout << "bye";
    exiot = true;
}

void execute(vector <int> &vec)
{
    string str;
    cin >> str;
    if(str == "push")
        push(vec);
    if(str == "pop")
        pop(vec);
    if(str == "back")
        backo(vec);
    if(str == "size")
        sizez(vec);
    if(str == "clear")
        clearr(vec);
    if(str == "exit")
        exitt();
}

int main()
{
    vector <int> vec;

    while(!exiot)
    {
        execute(vec);
    }
    return 0;
}