#include <iostream>

using namespace std;

int hn = 4;
bool fu(int k, int hod){
    if(k >= 39 && (hod == hn || hod == 2))
        return 1;
    if(k < 39 && hod == hn)
        return 0;
    if(k >= 39 && hod != hn && hod != 2)
        return 0;

    if(hod == 0)
        return fu(k + 1, hod + 1) && fu(k + 2, hod + 1) && fu(k * 2, hod + 1);
    if(hod == 1)
        return fu(k + 1, hod + 1) || fu(k + 2, hod + 1) || fu(k * 2, hod + 1);
    if(hod == 2)
        return fu(k + 1, hod + 1) && fu(k + 2, hod + 1) && fu(k * 2, hod + 1);
    if(hod == 3)
        return fu(k + 1, hod + 1) || fu(k + 2, hod + 1) || fu(k * 2, hod + 1);
}

int main(){

    for(int i = 1; i <= 38; i++)
        if(fu(i, 0))
            cout << i << endl;
    return 0;
}