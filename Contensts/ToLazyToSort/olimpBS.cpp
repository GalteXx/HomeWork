#include<vector>
#include<string>
#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;
float stf(string str)
{
    float m = 0, l = 0, j = 0.1, mi = 0;
    for(int i =0; str[i] !='\0'; i++)
    {
        if(str[i] == '-')
        {
            mi++;
        }
        else{
        if(str[i]=='.')
           {
               l++;
           }
        else
        {

           if(l==0)
           {
               int k = str[i] - 48;
                m = m*10 + k;
           }
           else
            {
                int k = str[i] - 48;
                m = m + k * j;
            }
            if(l!= 0)
            {
                j = j /10;
            }
        }}

    }
    if(mi == 0)
        return(m);
    else
        return(-m);
}
int main()
{
    float a, b, c;
    string str ="", s ="", st;

    vector<string> m;
    vector<string> m1;
    ifstream file("text.txt");


    while(getline(file, st))
    {
        m.push_back(st);
    }



    for(int i = 0; i < m.size(); i++)
    {
        s = m[i];
        for(int j = 0; s[j] != '\0'; j++)
        {
            if(s[j] != ' ')
            {
                str = str + s[j];
            }
            else
            {
                m1.push_back(str);
                if(s[j+1]!= '\0')
                    str ="";
            }
        }
        m1.push_back(str);
        str="";
    }

    cout << m[0] << endl;
    for(int i = 0; m[0][i] != '\0'; i++)
    {
        cout << m1[i] << " ";
    }

    int k = m1.size();
    vector <float> m2;
    for(int i = 0; i < m1.size(); i++)
    {
        m2.push_back(stf(m1[i]));
    }


    float sr1 = 0;
    float kol = 0;
    float sr = 0;


    for(int i = 0; i < m1.size(); i++)
    {
        sr = sr + m2[i];
        kol++;
    }
    sr = sr/kol;
    float maxx = 0;
    int jo = 0;
    for(int i = 0; i < m1.size(); i++)
    {
        if(abs(sr-m2[i]) > maxx)
        {
            if(sr-m2[i]<0)
                jo++;
            else
                jo = 0;
            maxx = abs(sr-m2[i]);
        }
    }
    if(jo == 0)
        cout << maxx;
    else
        cout << -maxx;
}