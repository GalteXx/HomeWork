#include<iostream>
#include<string>
#include "head.h"
using namespace std;
unsigned char ToUpper( unsigned char ch)
{
    if(ch >= 'a' && ch <= 'z')
    return ch - 32;
    if(ch >= 'а' && ch <= 'я')
        return ch - 33;
}
