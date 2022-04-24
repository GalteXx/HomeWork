#include <iostream>
using namespace std;

bool fu(int s){
    s /= 15;
    int n = 14;
    while( s < 285){
        if((s + n) % 9 == 0){
            s += 11;
        }
        n += 13;
    }
    return n == 118;

}

int main(){
    int kol = 0;
    for(int i = -1400; i <= 150000; i++){
        if(fu(i))
            kol ++;
    }

    cout << kol;

    return 0;
}