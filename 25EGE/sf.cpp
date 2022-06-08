#include <iostream>
#include <algorithm>

using namespace std;


bool isSimple(int test){

    if(sqrt(test) == (int)sqrt(test))
        return false;
    for(int i = 0; i < sqrt(test); i++){
        if(test % i == 0)
            return false;
    }

    return true;
}

int main(){

    for(int i = 125697; i <= 190234; i++){
        if(sqrt(i) != (int)sqrt(i)){
            for(int j = 2; j <= sqrt(i); j++){
                if(i % j == 0){
                    if(isSimple(j) && isSimple(j / i)){
                        kol += 2
                    }

                }
            }
        }
    }


    return 0;
}