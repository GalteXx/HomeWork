#include <iostream>

using namespace std;

int hn = 3;

bool fu(int k1, int k2, int hod){
    if(k1 + k2 >= 77 && hod == hn)
        return 1;
    if(k1 + k2 < 77 && hod == hn)
        return 0;
    if(k1 + k2 >= 77 && hod != hn)
        return 0;

    if(hod == 0)
        return fu(k1 + 1, k2, hod + 1) || fu(k1 * 2, k2, hod + 1) || fu(k1, k2 + 1, hod + 1) || fu(k1, k2 * 2, hod + 1);
    if(hod == 1)
        return fu(k1 + 1, k2, hod + 1) && fu(k1 * 2, k2, hod + 1) && fu(k1, k2 + 1, hod + 1) && fu(k1, k2 * 2, hod + 1);
    if(hod == 2)
        return fu(k1 + 1, k2, hod + 1) || fu(k1 * 2, k2, hod + 1) || fu(k1, k2 + 1, hod + 1) || fu(k1, k2 * 2, hod + 1);

}

int main(){

    for(int i = 1; i <= 69; i++){
        if(fu(7, i, 0))
            cout << i << endl;
    }

    return 0;
}