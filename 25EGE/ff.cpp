#include <iostream>
#include <cmath>

using namespace std;



int des(int a){
    int out = 0;
    while(a > 0){
        a /= 10;
        out++;
    }
    return out;
}

int rev(int a){
    int out = 0;
    while(a > 0){
        out  += a % 10;
        out *= 10;
        a /= 10;
    }
    return out / 10;
}

int conv(int a, int b){
    int out = 0;
    while(a > 0){
        out += a % b;
        out *= 10;
        a /= 10;
    }
    return rev(out / 10);
}



int main(){

    // for(int i = 0; i < 10000; i++)
    // for(int j = 0; j < 10; j++){
    //     int a = 1 * pow(10, des(i) + 5) + 586 * 100 + j * 10 + 6;
    //     if(conv(a, 7) == rev(conv(a, 7)))
    //         cout << conv(a, 7);
    // }
    int a;
    cin >> a;
    cout << conv(a, 2);

    return 0;
}