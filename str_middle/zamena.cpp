#include<iostream>
#include<string>
#include "head.h"
using namespace std;
string toInt(int a)
{
    string output;
    while(a != 0)
    {
        output += (char) (a % 10 + 48);
        a /= 10;
    }
    return output;
}
string  zamena(string str)
{
    int kol = 0, ch = 0, m = 0, cho = 0;
    char b;
    b = str[0];
    string out = "";
    while(b != '\0')
    {
        b = str[kol];
        while(b >= 48 && b <= 57)
        {
            ch = (ch * 10) + (int)b - 48;
            kol++;
            b = str[kol];
            m++;
        }
        if(m != 0)
        {
            m = 0;
    //перевод
    int a = 1, des = 10;
        while(ch != 0)
        {
            a = ch % 2;
            ch /= 2;
            cho += (a * des);
            des = des * 10;
        }
    //на карту сбера(’ј’ј’ј’ј’ј’ј’’ј)
        cho /= 10;
    //ch -> cho
            out += toInt(cho);
//int не берет, теперь это все еще и в char...
//€ короче функцию еще одну допишу пр€м сбда, не судите сторого, по другому € не придумал
            ch = 0;
            cho = 0;
            --kol;
            des = 10;
            a = 1;
        }
        else
        {
            out += b;
        }
        kol++;
    }
return(out);

}

