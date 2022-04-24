#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int kol = 0, initkol = 0;
    string base = "PREPARAT";
    for(int i1 = 0; i1 < 8; i1++)
    for(int i2 = 0; i2 < 8; i2++)
    for(int i3 = 0; i3 < 8; i3++)
    for(int i4 = 0; i4 < 8; i4++)
    for(int i5 = 0; i5 < 8; i5++)
    for(int i6 = 0; i6 < 8; i6++)
    for(int i7 = 0; i7 < 8; i7++)
    for(int i8 = 0; i8 < 8; i8++){
        if(i1 == i2 || i1 == i3 || i1 == i4 || i1 == i5 || i1 == i6 || i1 == i7 || i1 == i8 ||
        i2 == i3 || i2 == i4 || i2 == i5 || i2 == i6 || i2 == i7 || i2 == i8 ||
        i3 == i4 || i3 == i5 || i3 == i6 || i3 == i7 || i3 == i8 ||
        i4 == i5 || i4 == i6 || i4 == i7 || i4 == i8 ||
        i5 == i6 || i5 == i7 || i5 == i8 ||
        i6 == i7 || i6 == i8 || 
        i7 == i8)
        continue;
        initkol++;
        string str = "";
        str = str + base[i1] + base[i2] + base[i3] + base[i4] + base[i5] + base[i6] + base[i7] + base[i8];

        int f1 = str.find("PP");
        int f2 = str.find("PR");
        int f3 = str.find("RP");
        int f4 = str.find("PT");
        int f5 = str.find("RT");
        int f6 = str.find("TR");
        int f7 = str.find("TP");
        int f8 = str.find("RR");
        int f9 = str.find("TT");
        int f10 = str.find("AE");
        int f11 = str.find("EA");
        int f12 = str.find("AA");

        if(f1 != -1 || f2 != -1 || f3 != -1 || f4 != -1 || f5 != -1 || f6 != -1 
        || f7 != -1 || f8 != -1 || f9 != -1 || f10 != -1 || f11 != -1 || f12) { 
            kol++;
        }    
        
    }
    cout << kol << " " << initkol;
    return 0;
}