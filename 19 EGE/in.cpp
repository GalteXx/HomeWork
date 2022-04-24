#include <iostream>
#include <vector>
using namespace std;

int hn = 2;
// bool fu(int k1, int k2, int hod){
//     if(k1 + k2 >= 30 && (hod == hn || hod == 2))
//         return 1;
//     if(k1 + k2 >= 30 && hod != hn)
//         return 0;
//     if(k1 + k2 < 30 && hod == hn)
//         return 0;

//     if(hod == 0)
//         return fu(k1 + 1, k2, hod + 1) && fu(k1 * 2, k2, hod + 1) && 
//         fu(k1, k2 + 1, hod + 1) && fu(k1, k2 * 2, hod + 1);
//     if(hod == 1)
//         return fu(k1 + 1, k2, hod + 1) || fu(k1 * 2, k2, hod + 1) || 
//         fu(k1, k2 + 1, hod + 1) || fu(k1, k2 * 2, hod + 1);
//     if(hod == 2)
//         return fu(k1 + 1, k2, hod + 1) && fu(k1 * 2, k2, hod + 1) && 
//         fu(k1, k2 + 1, hod + 1) && fu(k1, k2 * 2, hod + 1);
//     if(hod == 3)
//         return fu(k1 + 1, k2, hod + 1) || fu(k1 * 2, k2, hod + 1) || 
//         fu(k1, k2 + 1, hod + 1) || fu(k1, k2 * 2, hod + 1);
// }

bool fu(int k1, int k2, int hod){
    if(k1 + k2 >= 30 && (hod == hn || hod == 2))
        return 1;
    if(k1 + k2 >= 30 && hod != hn)
        return 0;
    if(k1 + k2 < 30 && hod == hn)
        return 0;

    if(hod == 0)
        return fu(k1 + 1, k2, hod + 1) && fu(k1 * 2, k2, hod + 1) && 
        fu(k1, k2 + 1, hod + 1) && fu(k1, k2 * 2, hod + 1);
    if(hod == 1)
        return fu(k1 + 1, k2, hod + 1) || fu(k1 * 2, k2, hod + 1) || 
        fu(k1, k2 + 1, hod + 1) || fu(k1, k2 * 2, hod + 1);
}

int main(){
    
    for(int i = 1; i <= 29; i++){
        for(int j = 1; j <= 29; j++){
            if(fu(i, j, 0))
                cout << i << " " << j << "\n";
        }
    }
    
    return 0;
}