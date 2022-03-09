#include <iostream>

using namespace std;

int fu(int a, int b){

    if(a == b)
        return 1;
    if(a > b)
        return 0;

    return fu(a + 2, b) + fu(a + 5, b);
}


int main(){

    for(int i = 0; i < 1000; i++)
    {
        if(fu(5,i) == 34)
            cout << i <<endl;
    }
    return 0;
}