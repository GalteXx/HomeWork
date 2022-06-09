#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool unq(vector <int> vec){
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if((vec[i] == vec[j] && i != j) || vec[j] == 2 || vec[j] == 6)
                return 0;
        }
    }
    return 1;
}

int main(){
    int kol = 0;
    for(int i = 1000; i <= 9999; i++){
        vector <int> vec = {i / 1000,  (i / 100) % 10,  (i / 10) % 10,  i % 10};
        int odd = 0, even = 0;
        
        for(int i = 0; i < 4; i++){
            if(vec[i] % 2 == 0)
                even++;
            else
                odd++;
        }
        
        if((odd == 2) != (even == 1) && unq(vec)){
            kol++;
            cout << i << "26\n";
        }
            
    }
    cout << kol;
}