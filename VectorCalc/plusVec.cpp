#include <iostream>
#include <vector>
using namespace std;


void rev(vector <int> &vec)
{
    vector <int> tmp;
    for(int i = vec.size() - 1; i >= 0; i--)
    {
        tmp.push_back(vec[i]);
    }
    vec = tmp;
}
void push_front(vector <int> &vec, int a)
{
    rev(vec);
    vec.push_back(a);
    rev(vec);
}

void fill(vector <int> &vec1, vector <int> &vec2)
{
    if(vec1.size() > vec2.size())
    {
        int nona = vec1.size() - vec2.size();
        for(int i = 0; i < nona; i++)
        {
            push_front(vec2, 0);
        }
    }
    else if(vec2.size() > vec1.size())
    {
        int nona = vec2.size() - vec1.size();
        for(int i = 0; i < nona; i++)
        {
            push_front(vec1, 0);
        }
    }
}
void print(vector <int> &vec)
{
    for(int i = 0; i < vec.size(); i++)
    {
        cout << vec[i];
    }
    cout << endl;
}

void input(vector <int> &vec)
{
    string str;
    cin >> str;
    for(int i = 0; str[i] != '\0'; i++)
    {
        vec.push_back(str[i] - 48);
    }

}

void clear(vector <int> &vec)
{
    if(vec.size() != 1){
    rev(vec);
    while(vec[vec.size() - 1] == 0)
    {
        vec.pop_back();
    }
    rev(vec);
    }
}
void minusi(vector <int> vec1, vector <int> vec2, vector <int> &res)
{
    fill(vec1, vec2);  
    //подготовка закончена
    int tmp = 0;
    //cout << "vectors: \n";
    //print(vec1);
    //print(vec2);
    for(int i = vec1.size() - 1; i >= 0; i--)
    {
        if(vec1[i] < vec2[i])
        {
            vec1[i-1]--;
            tmp += 10;
        }
        //cout << "tmp():" << tmp << endl;
        tmp = tmp + vec1[i] - vec2[i];
        push_front(res, tmp);
        //cout << "tmp: " << tmp << endl;
        tmp = 0; 
    }
    clear(res);
}
void empt(vector <int> &vec)
{
    rev(vec);
    while(vec.size() != 0)
    {
        vec.pop_back();
    }
    rev(vec);
}
void fillZero(vector <int> &vec, int a)
{
    for(int i = 0; i < a; i++)
    {
        vec.push_back(0);
    }
}
void plusi(vector <int> vec1, vector <int> vec2, vector <int> &res)
{
    fill(vec1,vec2);
    int tmp = 0;
    int i = vec1.size() - 1;
    empt(res);
    for(true; i >= 0; i--)
    {
        tmp = vec1[i] + vec2[i] + tmp;     
        push_front(res, tmp % 10);
        //cout << "tmp On" << tmp % 10 << endl;  
        tmp /= 10;
        //cout << "tmp:" << tmp << endl;
    }

    push_front(res, tmp % 10);
    clear(res);
}
void multiply(vector <int> &vec1, vector <int> vec2, vector <int> &res)
{
    vector <int> temp;
    fill(vec1,vec2);
    for(int j = vec2.size() - 1; j >= 0; j--)
    {
        empt(temp);
        int tmp = 0;
        int i = vec1.size() - 1;
        for(true; i >= 0; i--)
        {
            tmp = vec1[i] * vec2[j] + tmp;      
            push_front(temp, tmp % 10);
            //cout << "tmp On" << tmp % 10 << endl;  
            tmp /= 10;
            //cout << "tmp:" << tmp << endl;
        }
        fillZero(temp, vec2.size() - 1 -j);
        push_front(temp, tmp % 10);
        //cout << "temp: "; print(temp);
        plusi(res, temp, res);
        clear(res);
        //cout << "mid res: ";print(res);
    }
    //plusi(res, temp, res);
    //clear(res);
    res = res;//я не знаю, но без этого не работает :)
}

int main()
{
    //cout<<"Gald to see you using my calculator. \nWe currently support \"+\" \"-\" and \"*\" \nPlease enter 1st number, action, and 2nd number in exat order mentioned, with \nspaces beween \n";
    //cout << "NOTE: negative numbers arent supported"<< endl;
    while(true)
    {
    vector <int> res;
    vector <int> vec1;
    vector <int> vec2;
    //input(vec1);
    //char act;
    //cin >> act;

    input(res);

    vec1.push_back(2);
    //if(act == '+') plusi(vec1, vec2, res);
    //cout << "filling: \n";
    //cout << "res: \n";
    //else if(act == '-') minusi(vec1, vec2, res);
    //else if(act == '*') multiply(vec1, vec2, res);
    for(int i = 0; i < 101; i++)
    {
        multiply(res, vec1, res);
    }
    print(res);
    cout << "___" << endl;
    
    }
    //я перешел с gnu++ на mingw++, и теперь чтобы прога не закрывалась сразу нужно добавлять вот это
    int stopper;
    cin >> stopper;
    return 0;
}