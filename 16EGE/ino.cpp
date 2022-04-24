#include <iostream>

using namespace std;

int fu(int n){

    if(n == 0)
        return 1;
    if(n > 0 && n % 2 != 0)
        return 1 + fu(n-1);
    
    return fu(n / 2);
}


int main(){
    int kol = 0;
    for(int i = 1; i <= 500000000; i++){
        if(fu(i) == 3)
            kol++;
        
    }
    cout << kol;
    return 0;
}