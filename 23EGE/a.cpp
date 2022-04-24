#include <iostream>

using namespace std;

int fu(int a, int b, bool c){
    if(a > b)
        return 0;
    if(a == b)
        return 1;


    if(!c)
        return fu(a + 1, b, 0) + fu(a + 2, b, 0) + fu(a * 2, b, 1);
    
    
    return fu(a + 1, b, 0) + fu(a + 2, b, 0);
}

int main(){

   cout << fu(1, 15, 0);

    return 0;
}