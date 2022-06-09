#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool unq(string a){
    for(int i = 0; a[i] != '\0'; i++){
        for(int j = 0; a[j] != '\0'; j++){
            if(a[i] == a[j] && i != j)
                return 0;
        }
    }
    return 1;
}


int main(){
    int kol = 0;
    const string base = "DEYKSTRA";
    for(int i0 = 0; i0 < 8; i0++)
    for(int i1 = 0; i1 < 8; i1++)
    for(int i2 = 0; i2 < 8; i2++)
    for(int i3 = 0; i3 < 8; i3++)
    for(int i4 = 0; i4 < 8; i4++)
    for(int i5 = 0; i5 < 8; i5++){
        string a = "";
        a = a + base[i0] + base[i1] + base[i2] + base[i3] + base[i4]
        + base[i5];
        int posY = a.find("Y");

        // _ _ _ _ _ Y \0
        if(!unq(a) || posY == -1 
        || (a[posY + 1] != 'E' && a[posY + 1] != 'A'))
            continue;
        kol++;
    }

    cout << kol;

    return 0;
}