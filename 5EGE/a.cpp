#include <iostream>
#include <string>

using namespace std;

string reverse(string str){
    string outp  = "";
    for(int i = str.size() - 1; i >= 0; i--){
        outp = outp + str[i];
    }
    return outp;
}

string bin(int a){
    string out;
    while(a > 0){
        out += (a % 2) + 48;
        a /= 2;
    }
    return reverse(out);
}

int main(){

    for(int i = 800; i <= 900; i++){
        
    }

    return 0;
}