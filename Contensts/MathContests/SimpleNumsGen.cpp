#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

bool isSimple(int test){

    if(sqrt(test) == (int)sqrt(test))
        return false;
    for(int i = 2; i < sqrt(test); i++){
        if(test % i == 0)
            return false;
    }

    return true;
}

int GenArr(){

    for(int i = 2; i < 1000000; i++){
        if(isSimple(i))
            cout << i << " ";
    }

    return 0;
}

int main(){
    GenArr();
}