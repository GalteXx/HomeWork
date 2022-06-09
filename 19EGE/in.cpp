#include <iostream>

using namespace std;

int hn = 4;
bool fu(int k1, int k2, int hod){
    if(k1 + k2 >= 49 && (hod == hn || hod == 2))
        return 1;
    if(k1 + k2  < 49 && hod == hn)
        return 0;
    if(k1 + k2 >= 49 && hod != hn && hod != 2)
        return 0;
    
    if(hod == 0)
        return fu(k1 + 1, k2, hod + 1) && fu(k1 * 3, k2, hod + 1) 
            && fu(k1, k2 + 1, hod + 1) && fu(k1, k2 * 3, hod + 1);
    if(hod == 1)
        return fu(k1 + 1, k2, hod + 1) || fu(k1 * 3, k2, hod + 1) 
            || fu(k1, k2 + 1, hod + 1) || fu(k1, k2 * 3, hod + 1);
    if(hod == 2)
        return fu(k1 + 1, k2, hod + 1) && fu(k1 * 3, k2, hod + 1) 
            && fu(k1, k2 + 1, hod + 1) && fu(k1, k2 * 3, hod + 1);
    if(hod == 3)
        return fu(k1 + 1, k2, hod + 1) || fu(k1 * 3, k2, hod + 1) 
            || fu(k1, k2 + 1, hod + 1) || fu(k1, k2 * 3, hod + 1);
}



int main() {

    for(int i = 1; i <= 43; i++){
        if(fu(5, i, 0))
            cout << i << endl;
    }
    return 0;
}