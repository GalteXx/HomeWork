#include <iostream>
#include <cmath>

using namespace std;

int summ(int a){
    int output = 0;
    int d = 2;
    while(d * d < a){
        if(a % d == 0){
            output += a / d + d;
        }
        d++;
    }
    if(d*d == a)
        output += d;
    return output;
}

int md(int a){
    int d = 2;
    while(d * d < a){
        if(a % d == 0){
            return a / d;
        }
        d++;
    }
    if(d*d == a)
        return d;
    return -1;
}

int rev(int a){
    int output = 0;
    while(a > 0){
        output += a % 10;
        output *= 10;
        a /= 10;
    }
    return output / 10;
}

int main(){
    int k = 0;
    for(int i = 520000; k <= 5; i++){
        if(summ(i) == rev(summ(i)) && summ(i) != 0){
            cout << i << " " << md(i) << endl;
            k++;
        }
    }
    return 0;
}