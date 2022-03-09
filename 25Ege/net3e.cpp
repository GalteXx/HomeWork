#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int kex;
    for(int i = 525784203; i <= 728943762; i++){
        int kol = 0, l;
        if(sqrt(i) == (int)sqrt(i)){
            for(int  j = 2; j <= sqrt(i); j++){
                if(i % j == 0){
                    if(j == sqrt(i))
                        kol++;
                    else{
                        kol += 2;
                        l = j;
                    
                    }
                        
                }
                if(kol > 3)
                    break;
            }
        if(kol == 3)
            cout << i << " " << i / l << endl;
        
    }

    }
    return 0;
}