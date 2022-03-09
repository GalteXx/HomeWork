#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int kex;
    for(int i = 525784203; i <= 728943762; i++){
        int kol = 0;
        if(i / 1000000 != kex){
            kex = i / 1000000;
            cout << kex << endl;
        }
        for(int  j = 2; j <= sqrt(i); j++){
            if(i % j == 0){
                if(j == sqrt(i))
                    kol++;
                else
                    kol += 2;
            }
            if(kol > 3)
                break;
        }
        if(kol == 3)
            cout << i << endl;
    }


    return 0;
}