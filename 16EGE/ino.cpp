#include <iostream>

using namespace std;

int fu(int n){

    if(n < 2)
        return 1;
    if(n >= 2 && n % 3 == 0)
        return fu(n/3) - 1;
    
    return fu(n - 1) + 17;
}


int main(){
    int kol = 0;
    for(int i = 1; i <= 100000; i++){
        if(fu(i) == 43)
            kol++;
        
    }
    cout << kol;
    return 0;
}