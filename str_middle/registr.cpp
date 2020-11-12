#include<iostream>
#include<string>
#include "head.h"
using namespace std;
unsigned char registr(unsigned char c)
{
    if(c > 64 && c <= 90) return c + 32;
    return c - 32;
}

