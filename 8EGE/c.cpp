#include<iostream>
#include<string>
#include<algorithm>
#include <vector>
using namespace std;

int main(){
    string nice = "PPPPAG";
    vector<string> a;
    int kol = 0;
    for(int i = 0; i < 6; i++)
    for(int i1 = 0; i1 < 6; i1++)
    for(int i2 = 0; i2 < 6; i2++)
    for(int i3 = 0; i3 < 6; i3++)
    for(int i4 = 0; i4 < 6; i4++)
    for(int i5 = 0; i5 < 6; i5++){
        string sphagetti = "";
        sphagetti = sphagetti + nice[i] +nice[i1] +nice[i2] +nice[i3] +nice[i4] +nice[i5];
        int gg = sphagetti.find("PPPP");
        int bg = sphagetti.find("PPPPP");
        if(gg != -1 && count(sphagetti.begin(), sphagetti.end(), 'G') == 1 &&
        count(sphagetti.begin(), sphagetti.end(), 'P') == 4 &&   count(sphagetti.begin(), sphagetti.end(), 'G') == 1){
            a.push_back(sphagetti);
        }
    }
    a.erase(unique(a.begin(), a.end()), a.end());
    for(int i = 0 ; i < a.size(); i++)
        cout << a[i] << endl;
    cout << a.size();
}